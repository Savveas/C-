#include "TMVA/Factory.h"
#include "TMVA/DataLoader.h"
#include "TFile.h"
#include "TTree.h"
#include "TCut.h" 
#include "TH1F.h"
#include "TMVA/Reader.h"
using namespace TMVA;


void TMVClassificationApplication( )
{
  TFile *inputfile = TFile::Open("histos_signal.root");
  //TFile *inputfile_back= TFile::Open("histos_DY.root");
  //TFile *inputfile_back_2= TFile::Open("histos_TTbarDileptonic.root");
 
  TTree* InTree = (TTree*)inputfile->Get("t1");
  //TTree* InTree = (TTree*)inputfile_back->Get("t1");
  //TTree* InTree = (TTree*)inputfile_back_2->Get("t1");

  // Create the output file
  TFile *outputfile = new TFile("output.root", "RECREATE");
  //TFile *outputfile_back = new TFile("output_DY.root", "RECREATE");
  //TFile *outputfile_back_2 = new TFile("output_TTbar.root", "RECREATE");


  TH1F *h_BDT= new TH1F("h_BDT","h_BDT",100,-1.,1.);
  TMVA::Reader *reader= new TMVA::Reader("!Color");


  Float_t pt_hig;
  Float_t mass_hig;
  Float_t pt_z;
  Float_t mass_z;
  Float_t Ht2;
  Float_t DR_bb;
  Float_t DR_ll;
  Float_t Dphi_ZH;
  Float_t Dm_min;
  Int_t Njets;
  Float_t pt_lep;
  Float_t _met;
  Float_t _btag_0;
  Float_t _btag_1;
  Float_t _btag_2;
  //Float_t _btag_3;
  Float_t njets;
  
  reader->AddVariable( "pt_hig",&pt_hig );
  reader->AddVariable( "mass_hig", &mass_hig );
  reader->AddVariable( "pt_z", &pt_z );
  reader->AddVariable( "mass_z", &mass_z );
  reader->AddVariable( "Ht2", &Ht2 );
  reader->AddVariable( "DR_bb", &DR_bb );
  reader->AddVariable( "DR_ll", &DR_ll );
  reader->AddVariable( "Dphi_ZH", &Dphi_ZH );
  reader->AddVariable( "Dm_min", &Dm_min );
  reader->AddVariable( "Njets", &njets );
  reader->AddVariable( "pt_lep", &pt_lep );
  reader->AddVariable( "_met", &_met );
  reader->AddVariable( "_btag_0", &_btag_0 );
  reader->AddVariable( "_btag_1", &_btag_1 );
  reader->AddVariable( "_btag_2", &_btag_2 );
  //reader->AddVariable( "btag3", &btag3 );
  
  reader->BookMVA( "kBDT method", "MVAnalysis/weights/MVAnalysis_BDT.weights.xml" );
  
  // … set branch addresses for user TTree
  InTree->SetBranchAddress("pt_H",&pt_hig );
  InTree->SetBranchAddress("m_H",&mass_hig );
  InTree->SetBranchAddress("pt_Z",&pt_z );
  InTree->SetBranchAddress( "m_Z",&mass_z );
  InTree->SetBranchAddress("H_T_v2",&Ht2 );
  InTree->SetBranchAddress( "dR_ave",&DR_bb );
  InTree->SetBranchAddress( "dR_ll",&DR_ll );
  InTree->SetBranchAddress( "dphi_ZH",&Dphi_ZH );
  InTree->SetBranchAddress( "minDm",&Dm_min );
  InTree->SetBranchAddress( "njet",&Njets);
  InTree->SetBranchAddress( "pt_lep1",&pt_lep );
  InTree->SetBranchAddress( "met_pt",&_met );
  InTree->SetBranchAddress( "btag_0",&_btag_0);
  InTree->SetBranchAddress( "btag_1", &_btag_1 );
  InTree->SetBranchAddress( "btag_2", &_btag_2 );
  //InTree->SetBranchAddress( "_btag_3", &btag3 );
  
 
  for (Long64_t ievt=0; ievt<InTree->GetEntries();ievt++) {
    InTree->GetEntry(ievt);
    //cout<<"number of events:" <<ievt<<endl;
    
    if(std::isnan(_btag_0)){
      cout<<"#events "<<ievt<<" " <<_btag_0<<endl;
      continue;
    }
    njets = Njets;
    
    Double_t out = reader->EvaluateMVA( "kBDT method" );

    h_BDT->Fill(out);
  }
  
  h_BDT->Write();
  
  // Close the output file
  outputfile->Close();
  //outputfile_back->Close();
  //outputfile_back_2->Close();
  delete reader;
   
}
