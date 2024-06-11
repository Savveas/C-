
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

    TString dir="M50/";
    
    TFile *outputFile = TFile::Open(dir+ "TMVA.root", "RECREATE" );

    TMVA::Factory *factory = new TMVA::Factory( "MVAnalysis", outputFile,"!V:!Silent:Color:DrawProgressBar:Transformations=I;G:AnalysisType=Classification"); 

    TFile *input_Signal = TFile::Open(dir+ "histos_signal.root");
    TTree* sigTree = (TTree*)input_Signal->Get( "my_tree" );

    TFile *input_TTbarSemileptonic = TFile::Open(dir+ "histos_back_TTbarSemileptonic_50.root");
    TTree* bkgTree_Semileptonic = (TTree*)input_TTbarSemileptonic->Get( "my_tree" );

    TFile *input_TTbarDileptonic = TFile::Open(dir+ "histos_back_TTbarDileptonic_50.root");
    TTree* bkgTree_Dileptonic = (TTree*)input_TTbarDileptonic->Get( "my_tree" );

    TFile *input_TTbarHadronic = TFile::Open(dir+ "histos_back_TTbarHadronic_50.root");
    TTree* bkgTree_Hadronic = (TTree*)input_TTbarHadronic->Get( "my_tree" );

    TFile *input_WJetsToLNu70to100 = TFile::Open(dir+ "histos_back_WJetsToLNu70to100_50.root");
    TTree* bkgTree_W_70to100 = (TTree*)input_WJetsToLNu70to100->Get( "my_tree" );

    TFile *input_WJetsToLNu100to200 = TFile::Open(dir+ "histos_back_WJetsToLNu100to200_50.root");
    TTree* bkgTree_W_100to200 = (TTree*)input_WJetsToLNu100to200->Get( "my_tree" );

    TFile *input_WJetsToLNu200to400 = TFile::Open(dir+ "histos_back_WJetsToLNu200to400_50.root");
    TTree* bkgTree_W_200to400 = (TTree*)input_WJetsToLNu200to400->Get( "my_tree" );

    TFile *input_WJetsToLNu400to600 = TFile::Open(dir+ "histos_back_WJetsToLNu400to600_50.root");
    TTree* bkgTree_W_400to600 = (TTree*)input_WJetsToLNu400to600->Get( "my_tree" );

    TFile *input_WJetsToLNu600to800 = TFile::Open(dir+ "histos_back_WJetsToLNu600to800_50.root");
    TTree* bkgTree_W_600to800 = (TTree*)input_WJetsToLNu600to800->Get( "my_tree" );

    TFile *input_WJetsToLNu800to1200 = TFile::Open(dir+ "histos_back_WJetsToLNu800to1200_50.root");
    TTree* bkgTree_W_800to1200 = (TTree*)input_WJetsToLNu800to1200->Get( "my_tree" );

    TFile *input_WJetsToLNu1200to2500 = TFile::Open(dir+ "histos_back_WJetsToLNu1200to2500_50.root");
    TTree* bkgTree_W_1200to2500 = (TTree*)input_WJetsToLNu1200to2500->Get( "my_tree" );

    TFile *input_WJetsToLNu_0 = TFile::Open(dir+ "histos_back_WJetsToLNu_0_50.root");
    TTree* bkgTree_W_0 = (TTree*)input_WJetsToLNu_0->Get( "my_tree" );

    TFile *input_qcd_80to170 = TFile::Open(dir+ "histos_back_qcd_bctoE_80to170_50.root");
    TTree* bkgTree_qcd_80to170 = (TTree*)input_qcd_80to170->Get( "my_tree" );

    TFile *input_qcd_170to250 = TFile::Open(dir+ "histos_back_qcd_bctoE_170to250_50.root");
    TTree* bkgTree_qcd_170to250 = (TTree*)input_qcd_170to250->Get( "my_tree" );

    TFile *input_qcd_250toInf = TFile::Open(dir+ "histos_back_qcd_bctoE_250toInf_50.root");
    TTree* bkgTree_qcd_250toInf = (TTree*)input_qcd_250toInf->Get( "my_tree" );

    TMVA::DataLoader *dataloader = new TMVA::DataLoader("MVAnalysis");

    float bgweight_Semileptonic(1.0);
    float bgweight_Hadronic(1.0);
    float bgweight_Dileptonic(1.0);
    float bgweight_W_70to100(1.0);
    float bgweight_W_100to200(1.0);
    float bgweight_W_200to400(1.0);
    float bgweight_W_400to600(1.0);
    float bgweight_W_600to800(1.0);
    float bgweight_W_800to1200(1.0);
    float bgweight_W_1200to2500(1.0);
    float bgweight_W_0(1.0);
    float bgweight_qcd_80to170(1.0);
    float bgweight_qcd_170to250(1.0);
    float bgweight_qcd_250toInf(1.0);

    TLeaf *xpos_Semileptonic = bkgTree_Semileptonic->GetLeaf("w"); xpos_Semileptonic->GetBranch()->GetEntry(1);
    bgweight_Semileptonic = xpos_Semileptonic->GetValue();
    TLeaf *xpos_Hadronic = bkgTree_Hadronic->GetLeaf("w"); xpos_Hadronic->GetBranch()->GetEntry(1);
    bgweight_Hadronic = xpos_Hadronic->GetValue();
    TLeaf *xpos_Dileptonic = bkgTree_Dileptonic->GetLeaf("w"); xpos_Dileptonic->GetBranch()->GetEntry(1);
    bgweight_Dileptonic = xpos_Dileptonic->GetValue();
    TLeaf *xpos_W_70to100 = bkgTree_W_70to100->GetLeaf("w"); xpos_W_70to100->GetBranch()->GetEntry(1);
    bgweight_W_70to100 = xpos_W_70to100->GetValue();
    TLeaf *xpos_W_100to200 = bkgTree_W_100to200->GetLeaf("w"); xpos_W_100to200->GetBranch()->GetEntry(1);
    bgweight_W_100to200 = xpos_W_100to200->GetValue();
    TLeaf *xpos_W_200to400 = bkgTree_W_200to400->GetLeaf("w"); xpos_W_200to400->GetBranch()->GetEntry(1);
    bgweight_W_200to400 = xpos_W_200to400->GetValue();
    TLeaf *xpos_W_400to600 = bkgTree_W_400to600->GetLeaf("w"); xpos_W_400to600->GetBranch()->GetEntry(1);
    bgweight_W_400to600 = xpos_W_400to600->GetValue();
    TLeaf *xpos_W_600to800 = bkgTree_W_600to800->GetLeaf("w"); xpos_W_600to800->GetBranch()->GetEntry(1);
    bgweight_W_600to800 = xpos_W_600to800->GetValue();
    TLeaf *xpos_W_800to1200 = bkgTree_W_800to1200->GetLeaf("w"); xpos_W_800to1200->GetBranch()->GetEntry(1);
    bgweight_W_800to1200 = xpos_W_800to1200->GetValue();
    TLeaf *xpos_W_1200to2500 = bkgTree_W_1200to2500->GetLeaf("w"); xpos_W_1200to2500->GetBranch()->GetEntry(1);
    bgweight_W_1200to2500 = xpos_W_1200to2500->GetValue();
    TLeaf *xpos_W_0 = bkgTree_W_0->GetLeaf("w"); xpos_W_0->GetBranch()->GetEntry(1);
    bgweight_W_0 = xpos_W_0->GetValue();
    TLeaf *xpos_qcd_80to170 = bkgTree_qcd_80to170->GetLeaf("w"); xpos_qcd_80to170->GetBranch()->GetEntry(1);
    bgweight_qcd_80to170 = xpos_qcd_80to170->GetValue();
    TLeaf *xpos_qcd_170to250 = bkgTree_qcd_170to250->GetLeaf("w"); xpos_qcd_170to250->GetBranch()->GetEntry(1);
    bgweight_qcd_170to250 = xpos_qcd_170to250->GetValue();
    TLeaf *xpos_qcd_250toInf = bkgTree_qcd_250toInf->GetLeaf("w"); xpos_qcd_250toInf->GetBranch()->GetEntry(1);
    bgweight_qcd_250toInf = xpos_qcd_250toInf->GetValue();
    
    
    
    dataloader->AddSignalTree(sigTree, 1.0 );
    dataloader->AddBackgroundTree(bkgTree_Semileptonic,bgweight_Semileptonic);
    dataloader->AddBackgroundTree(bkgTree_Dileptonic,bgweight_Dileptonic);
    dataloader->AddBackgroundTree(bkgTree_Hadronic,bgweight_Hadronic);
    dataloader->AddBackgroundTree(bkgTree_W_70to100,bgweight_W_70to100);
    dataloader->AddBackgroundTree(bkgTree_W_100to200,bgweight_W_100to200);
    dataloader->AddBackgroundTree(bkgTree_W_200to400,bgweight_W_200to400);
    dataloader->AddBackgroundTree(bkgTree_W_400to600,bgweight_W_400to600);
    dataloader->AddBackgroundTree(bkgTree_W_600to800,bgweight_W_600to800);
    dataloader->AddBackgroundTree(bkgTree_W_800to1200,bgweight_W_800to1200);
    dataloader->AddBackgroundTree(bkgTree_W_1200to2500,bgweight_W_1200to2500);
    dataloader->AddBackgroundTree(bkgTree_W_0,bgweight_W_0);
    dataloader->AddBackgroundTree(bkgTree_qcd_80to170,bgweight_qcd_80to170);
    dataloader->AddBackgroundTree(bkgTree_qcd_170to250,bgweight_qcd_170to250);
    dataloader->AddBackgroundTree(bkgTree_qcd_250toInf,bgweight_qcd_250toInf);

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
