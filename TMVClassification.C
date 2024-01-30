#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h" 
#include "TH1F.h"
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

    TFile *input_WJetsToLNu = TFile::Open("histos_back_WJetsToLNu.root");
    TTree* bkgTree_W = (TTree*)input_WJetsToLNu->Get( "my_tree" );

    TMVA::DataLoader *dataloader = new TMVA::DataLoader("MVAnalysis");
    
    dataloader->AddSignalTree(sigTree, 1.0 );
    dataloader->AddBackgroundTree(bkgTree_Semileptonic, 1.0 );

    dataloader->AddVariable("_h_b_pt", 'F');
    dataloader->AddVariable("_mt", 'F');
    dataloader->AddVariable("_b_inv_m", 'F');
    dataloader->AddVariable("_met_pt", 'F');
    dataloader->AddVariable("_btag_0", 'F');
    dataloader->AddVariable("_btag_1", 'F');
    dataloader->AddVariable("_btag_2", 'F');
    dataloader->AddVariable("_btag_3", 'F');
    dataloader->AddVariable("_lep_pt", 'F');
    dataloader->AddVariable("_Nbjets_after", 'F');
    dataloader->AddVariable("_w_pt", 'F');
    //dataloader->AddVariable("_d_phi_w_b_h", 'F');
    dataloader->AddVariable("_Njets_after", 'I');
    dataloader->AddVariable("_dR_av", 'F');
    dataloader->AddVariable("_Njets_after", 'F');
    dataloader->AddVariable("_minDelta_m", 'F');
    dataloader->AddVariable("_delta_phi", 'F');
    dataloader->AddVariable("_H_T", 'F');

    //dataloader->PrepareTrainingAndTestTree("", "NSigTrain=3000:NBkgTrain=3000:SplitMode=Random:!V" );
    //dataloader->PrepareTrainingAndTestTree("",TString("NSigTrain=3000:NBkgTrain=3000:SplitMode=Random:!V")+TString("nTest_Quarks=20000:nTest_Gluons=20000:nTest_Pileup=20000:")+TString("SplitMode=Random:NormMode=NumEvents:!V"));
    dataloader->PrepareTrainingAndTestTree("","nTrain_Signal=1000:nTrain_Background=1000:SplitMode=Random:NormMode=NumEvents:!V" );

    factory->BookMethod(dataloader, TMVA::Types::kBDT,"BDT","!H:!V:NTrees=100:BoostType=Grad:Shrinkage=0.7.0:DoBoostMonitor=True:MaxDepth=3:nCuts=200");
    factory->BookMethod(dataloader,TMVA::Types::kMLP, "MLP", "!V:NCycles=200:HiddenLayers=N+1,N:TestRate=5" );

    factory->TrainAllMethods();
    factory->TestAllMethods();
    factory->EvaluateAllMethods(); 

    outputFile->Close();
    delete factory;

    TMVA::TMVAGui("TMVA.root");
}