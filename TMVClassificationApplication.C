#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h" 
#include "TH1F.h"
#include "TMVA/Reader.h"
using namespace TMVA;

void TMVClassificationApplication() {

    TFile *input_Signal = TFile::Open("histos_signal.root");
    TTree* sigTree = (TTree*)input_Signal->Get( "my_tree" );

    //TFile *input_TTbarSemileptonic = TFile::Open("histos_back_TTbarSemileptonic.root");
    //TTree* bkgTree_Semileptonic = (TTree*)input_TTbarSemileptonic->Get( "my_tree" );

    //TFile *input_TTbarDileptonic = TFile::Open("histos_back_TTbarDileptonic.root");
    //TTree* bkgTree_Dileptonic = (TTree*)input_TTbarDileptonic->Get( "my_tree" );

    //TFile *input_TTbarHadronic = TFile::Open("histos_back_TTbarHadronic.root");
    //TTree* bkgTree_Hadronic = (TTree*)input_TTbarHadronic->Get( "my_tree" );

    //TFile *input_WJetsToLNu = TFile::Open("histos_back_WJetsToLNu.root");
    //TTree* bkgTree_W = (TTree*)input_WJetsToLNu->Get( "my_tree" );

    TMVA::Reader *reader = new TMVA::Reader("!Color"); 

    Float_t h_pt mt inv_m met_pt btag_0 btag_1 btag_2 lep_pt Nbjets_after w_pt d_phi_w_h w_pt dR_av minDelta_m d_phi_j_E H_T
    Int_t Nbjets_after Njets_after 

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
    reader->AddVariable( "Njets_after", &Njets_after );
    reader->AddVariable( "dR_av", &dR_av );
    reader->AddVariable( "minDelta_m", &minDelta_m );
    reader->AddVariable( "d_phi_j_E", &d_phi_j_E );
    reader->AddVariable( "H_T", &H_T );
    //reader->AddVariable( "Nbjets_after", &Nbjets_after );

    reader->BookMVA("kBDT method","MVAnalysis/weights/MVAnalysis_BDT.weights.xml");


    //if (fChain == 0) return;



  Long64_t nentries = fChain->GetEntriesFast();
  or (Long64_t jentry=0; jentry<nentries;jentry++) {
    
    TH1F *BDT_eval = new TH1F("BDT_eval","BDT_eval",100,0.,100.);
    
    Double_t out = reader->EvaluateMVA( "kBDT method" );
    BDT_eval->Fill(out);
    TCanvas *c_BDT_eval = new TCanvas("BDT_eval", "BDT_eval", 1000, 1000);
  BDT_eval->GetXaxis()->SetTitle("BDT_eval");
  BDT_eval->GetYaxis()->SetTitle("Entries");
  BDT_eval->SetLineColor(kBlack);
  BDT_eval->Scale(1./BDT_eval->Integral());
  BDT_eval->Draw("Ehist");


  }
  BDT_eval->Write();

}