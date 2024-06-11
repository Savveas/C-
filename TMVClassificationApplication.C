#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h" 
#include "TH1F.h"
#include "TMVA/Reader.h"
using namespace TMVA;

void TMVClassificationApplication() {

    TString dir="M50/"; 
    TFile *input_Signal = TFile::Open(dir+ "histos_signal.root");
    TTree* InTree = (TTree*)input_Signal->Get( "my_tree" );

    //TFile *input_TTbarSemileptonic = TFile::Open(dir+ "histos_back_TTbarSemileptonic.root");
    //TTree* InTree = (TTree*)input_TTbarSemileptonic->Get( "my_tree" );

    //TFile *input_TTbarDileptonic = TFile::Open(dir+ "histos_back_TTbarDileptonic.root");
    //TTree* InTree = (TTree*)input_TTbarDileptonic->Get( "my_tree" );

    //TFile *input_TTbarHadronic = TFile::Open(dir+ "output_TTbarHadronic.root");
    //TTree* InTree = (TTree*)input_TTbarHadronic->Get( "my_tree" );

    //TFile *input_WJetsToLNu_70to100 = TFile::Open(dir+ "histos_back_WJetsToLNu70to100.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_70to100->Get( "my_tree" );

    //TFile *input_WJetsToLNu_100to200 = TFile::Open(dir+ "histos_back_WJetsToLNu100to200.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_100to200->Get( "my_tree" );

    //TFile *input_WJetsToLNu_200to400 = TFile::Open(dir+ "histos_back_WJetsToLNu200to400.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_200to400->Get( "my_tree" );

    //TFile *input_WJetsToLNu_400to600 = TFile::Open(dir+ "histos_back_WJetsToLNu400to600.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_400to600->Get( "my_tree" );

    //TFile *input_WJetsToLNu_600to800 = TFile::Open(dir+ "histos_back_WJetsToLNu600to800.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_600to800->Get( "my_tree" );

    //TFile *input_WJetsToLNu_800to1200 = TFile::Open(dir+ "histos_back_WJetsToLNu800to1200.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_800to1200->Get( "my_tree" );

    //TFile *input_WJetsToLNu_1200to2500 = TFile::Open(dir+ "histos_back_WJetsToLNu1200to2500.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_1200to2500->Get( "my_tree" );

    //TFile *input_WJetsToLNu_0 = TFile::Open(dir+ "histos_back_WJetsToLNu_0.root");
    //TTree* InTree = (TTree*)input_WJetsToLNu_0->Get( "my_tree" );

    //TFile *input_qcd_80to170 = TFile::Open(dir+ "histos_back_qcd_bctoE_80to170.root");
    //TTree* InTree = (TTree*)input_qcd_80to170->Get( "my_tree" );

    //TFile *input_qcd_170to250 = TFile::Open(dir+ "histos_back_qcd_bctoE_170to250.root");
    //TTree* InTree = (TTree*)input_qcd_170to250->Get( "my_tree" );

    //TFile *input_qcd_250toInf = TFile::Open(dir+"histos_back_qcd_bctoE_250toInf.root");
    //TTree* InTree = (TTree*)input_qcd_250toInf->Get( "my_tree" );

    TFile *output_signal = new TFile(dir+ "output_signal.root", "RECREATE");
    

    TH1F *BDT_eval = new TH1F("BDT_eval","BDT_eval",100,-1,1.);
    TMVA::Reader *reader = new TMVA::Reader("!Color"); 
    Float_t w;
    Float_t mt;
    Float_t inv_m;
    Float_t met_pt;
    Float_t btag_0;
    Float_t btag_1;
    Float_t btag_2;
    Float_t btag_3;
    Float_t lep_pt;
    Float_t w_pt;
    Float_t d_phi_w_h;
    Int_t Njets_after;
    Float_t dR_av;
    Float_t minDelta_m;
    Float_t d_phi_j_E;
    Float_t h_pt;
    Float_t H_T;
    Float_t njets;


    
    reader->AddVariable( "h_pt", &h_pt );
    reader->AddVariable( "mt", &mt );
    reader->AddVariable( "inv_m", &inv_m );
    reader->AddVariable( "met_pt", &met_pt );
    reader->AddVariable( "btag_0", &btag_0 );
    reader->AddVariable( "btag_1", &btag_1 );
    reader->AddVariable( "btag_2", &btag_2 );
    reader->AddVariable( "lep_pt", &lep_pt );
    //reader->AddVariable( "Nbjets_after", &Nbjets_after );
    reader->AddVariable( "w_pt", &w_pt );
    reader->AddVariable("d_phi_w_h",&d_phi_w_h);
    reader->AddVariable( "Njets_after", &njets );
    reader->AddVariable( "dR_av", &dR_av );
    reader->AddVariable( "minDelta_m", &minDelta_m );
    reader->AddVariable( "d_phi_j_E", &d_phi_j_E );
    reader->AddVariable( "H_T", &H_T );
    //reader->AddVariable( "Nbjets_after", &Nbjets_after );
   
    reader->BookMVA("kBDT method","MVAnalysis/weights/MVAnalysis_BDT.weights.xml");

    InTree->SetBranchAddress("w",&w);
    InTree->SetBranchAddress("h_pt",&h_pt );
    InTree->SetBranchAddress("mt",&mt );
    InTree->SetBranchAddress("inv_m",&inv_m );
    InTree->SetBranchAddress( "met_pt",&met_pt );
    InTree->SetBranchAddress( "btag_0",&btag_0);
    InTree->SetBranchAddress( "btag_1", &btag_1 );
    InTree->SetBranchAddress( "btag_2", &btag_2 );
    InTree->SetBranchAddress("lep_pt",&lep_pt );
    InTree->SetBranchAddress( "w_pt",&w_pt );
    InTree->SetBranchAddress( "d_phi_w_h",&d_phi_w_h );
    InTree->SetBranchAddress( "njets",&Njets_after );
    InTree->SetBranchAddress( "dR_av",&dR_av );
    InTree->SetBranchAddress( "minDelta_m",&minDelta_m);
    InTree->SetBranchAddress( "d_phi_j_E",&d_phi_j_E );
    InTree->SetBranchAddress( "H_T",&H_T );
for (Long64_t ievt=0; ievt<InTree->GetEntries();ievt++) {
InTree->GetEntry(ievt);
  if(std::isnan(btag_0)){
      cout<<"#events "<<ievt<<" " <<btag_0<<endl;
      continue;
    }
    njets = Njets_after;
    Double_t out = reader->EvaluateMVA( "kBDT method" );
    BDT_eval->Fill(out,w);
}
    BDT_eval->Write();
    output_signal->Close();
  delete reader;
}
