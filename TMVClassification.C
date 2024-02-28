
#include <cstdlib>
#include <vector>
#include <iostream>
#include <map>
#include <string>

#include "TFile.h"
#include "TTree.h"
#include "TString.h"
#include "TSystem.h"
#include "TROOT.h"
#include "TStopwatch.h"

#include "TMVA/Tools.h"
#include "TMVA/Reader.h"
#include "TMVA/MethodCuts.h"

using namespace TMVA;


void TMVClassification()
{
    TFile *outputFile = TFile::Open( "TMVA.root", "RECREATE" );

    TMVA::Factory *factory = new TMVA::Factory( "MVAnalysis", outputFile,"!V:!Silent:Color:DrawProgressBar:Transformations=I;G:AnalysisType=Classification"); 

    TFile *input_Signal = TFile::Open("histos_signal.root");
    TTree* sigTree = (TTree*)input_Signal->Get( "my_tree" );

    TFile *input_TTbarSemileptonic = TFile::Open("histos_back_TTbarSemileptonic.root");
    TTree* bkgTree_Semileptonic = (TTree*)input_TTbarSemileptonic->Get( "my_tree" );

    TFile *input_TTbarDileptonic = TFile::Open("histos_back_TTbarDileptonic.root");
    TTree* bkgTree_Dileptonic = (TTree*)input_TTbarDileptonic->Get( "my_tree" );

    TFile *input_TTbarHadronic = TFile::Open("histos_back_TTbarHadronic.root");
    TTree* bkgTree_Hadronic = (TTree*)input_TTbarHadronic->Get( "my_tree" );

    TFile *input_WJetsToLNu = TFile::Open("histos_back_WJetsToLNu100to200.root");
    TTree* bkgTree_W = (TTree*)input_WJetsToLNu->Get( "my_tree" );

    TMVA::DataLoader *dataloader = new TMVA::DataLoader("MVAnalysis");

    float bgweight_Semileptonic(1.0);
    float bgweight_Hadronic(1.0);
    float bgweight_Dileptonic(1.0);
    float bgweight_W(1.0);

    TLeaf *xpos_Semileptonic = bkgTree_Semileptonic->GetLeaf("w"); xpos_Semileptonic->GetBranch()->GetEntry(1);
    bgweight_Semileptonic = xpos_Semileptonic->GetValue();
    TLeaf *xpos_Hadronic = bkgTree_Hadronic->GetLeaf("w"); xpos_Hadronic->GetBranch()->GetEntry(1);
    bgweight_Hadronic = xpos_Hadronic->GetValue();
    TLeaf *xpos_W = bkgTree_W->GetLeaf("w"); xpos_W->GetBranch()->GetEntry(1);
    bgweight_W = xpos_W->GetValue();
    TLeaf *xpos_Dileptonic = bkgTree_Dileptonic->GetLeaf("w"); xpos_Dileptonic->GetBranch()->GetEntry(1);
    bgweight_Dileptonic = xpos_Dileptonic->GetValue();
    
    
    dataloader->AddSignalTree(sigTree, 1.0 );
    dataloader->AddBackgroundTree(bkgTree_Semileptonic,bgweight_Semileptonic);
    dataloader->AddBackgroundTree(bkgTree_Dileptonic,bgweight_Dileptonic);
    dataloader->AddBackgroundTree(bkgTree_Hadronic,bgweight_Hadronic);
    dataloader->AddBackgroundTree(bkgTree_W,bgweight_W);

    dataloader->AddVariable("h_pt", 'F');
    dataloader->AddVariable("mt", 'F');
    dataloader->AddVariable("inv_m", 'F');
    dataloader->AddVariable("met_pt", 'F');
    dataloader->AddVariable("btag_0", 'F');
    dataloader->AddVariable("btag_1", 'F');
    dataloader->AddVariable("btag_2", 'F');
    //dataloader->AddVariable("btag_3", 'F');
    dataloader->AddVariable("lep_pt", 'F');
    //dataloader->AddVariable("Nbjets_after", 'I');
    dataloader->AddVariable("w_pt", 'F');
    dataloader->AddVariable("d_phi_w_h", 'F');
    dataloader->AddVariable("Njets_after", 'I');
    dataloader->AddVariable("dR_av", 'F');
    dataloader->AddVariable("minDelta_m", 'F');
    dataloader->AddVariable("d_phi_j_E", 'F');
    dataloader->AddVariable("H_T", 'F');

    TCut preselectionCut = "!TMath::IsNaN(btag_0)";

    //dataloader->PrepareTrainingAndTestTree("", "NSigTrain=3000:NBkgTrain=3000:SplitMode=Random:!V" );
    //dataloader->PrepareTrainingAndTestTree("",TString("NSigTrain=3000:NBkgTrain=3000:SplitMode=Random:!V")+TString("nTest_Quarks=20000:nTest_Gluons=20000:nTest_Pileup=20000:")+TString("SplitMode=Random:NormMode=NumEvents:!V"));
    dataloader->PrepareTrainingAndTestTree(preselectionCut,"nTrain_Signal=1000:nTrain_Background=1000:SplitMode=Random:NormMode=NumEvents:!V" );

    //factory->BookMethod(dataloader, TMVA::Types::kBDT,"BDT","!H:!V:NTrees=100:BoostType=Grad:Shrinkage=0.7.0:DoBoostMonitor=True:MaxDepth=3:nCuts=200");
    factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDT","!H:!V:NTrees=1000:MinNodeSize=5.0%:BoostType=AdaBoost:AdaBoostBeta=0.5:UseBaggedBoost:BaggedSampleFraction=0.5:SeparationType=GiniIndex:nCuts=20" );
    //factory->BookMethod(dataloader,TMVA::Types::kMLP, "MLP", "!V:NCycles=200:HiddenLayers=N+1,N:TestRate=5" );
    //factory->BookMethod( dataloader, TMVA::Types::kFisher, "Fisher", "H:!V:Fisher:VarTransform=None:CreateMVAPdfs:PDFInterpolMVAPdf=Spline2:NbinsMVAPdf=50:NsmoothMVAPdf=10" );
    factory->BookMethod( dataloader, TMVA::Types::kLikelihood, "LikelihoodD","!H:!V:TransformOutput:PDFInterpol=Spline2:NSmoothSig[0]=20:NSmoothBkg[0]=20:NSmooth=5:NAvEvtPerBin=50:VarTransform=Decorrelate" );
    //factory->BookMethod( dataloader, TMVA::Types::kMLP, "MLP", "H:!V:NeuronType=tanh:VarTransform=N:NCycles=600:HiddenLayers=N+5:TestRate=5:!UseRegulator" );
    
    factory->TrainAllMethods();
    factory->TestAllMethods();
    factory->EvaluateAllMethods(); 

    outputFile->Close();
    delete factory;

    TMVA::TMVAGui("TMVA.root");
}