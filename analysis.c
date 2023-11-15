#include "TROOT.h"
#include "TFile.h"
#include "TTree.h"
#include "TBrowser.h"
#include "TH1.h"
#include "TH2.h"

// test

void analysis()
{
  //read the Tree
  //note that we use "new" to create the TFile and TTree objects !
  //because we want to keep these objects alive when we leave this function.
  TFile *f = new TFile ("analysis_1.root");  
  TTree *t1 = (TTree*)f->Get("mainNtuplizer/data;1");
 


  Float_t mn_px[10];
  Float_t mn_py[10];
  Float_t mn_pz[10];
  Float_t mn_e[10];
  Float_t en_px[10];
  Float_t en_py[10];
  Float_t en_pz[10];
  Float_t en_e[10];
  Float_t jet_px[20];
  Float_t jet_py[20];
  Float_t jet_pz[20];
  Float_t jet_e[20];
  float met_phi;
  Int_t mn;
  Int_t jet;
  Int_t en;
  float met_pt;

 

  t1->SetBranchAddress("mn_px",&mn_px);
  t1->SetBranchAddress("mn_py",&mn_py);
  t1->SetBranchAddress("mn_pz",&mn_pz);
  t1->SetBranchAddress("mn",&mn);
  t1->SetBranchAddress("mn_en",&mn_e);
  t1->SetBranchAddress("jet_px",&jet_px);
  t1->SetBranchAddress("jet_py",&jet_py);
  t1->SetBranchAddress("jet_pz",&jet_pz);
  t1->SetBranchAddress("jet",&jet);
  t1->SetBranchAddress("jet_en",&jet_e);
  t1->SetBranchAddress("en_px",&en_px);
  t1->SetBranchAddress("en_py",&en_py);
  t1->SetBranchAddress("en_pz",&en_pz);
  t1->SetBranchAddress("en",&en);
  t1->SetBranchAddress("en_en",&en_e);
  t1->SetBranchAddress("met_pt",&met_pt);
  t1->SetBranchAddress("met_phi",&met_phi);
  
  //create  histograms
  TH1F *h_mn_pt = new TH1F("h_mn_pt","muon pt distribution",100,0.,500.);
  TH1F *h_mn_eta = new TH1F("h_mn_eta","muon pseudorapidity distribution",100,-5.,5.);
  TH1F *h_mn_phi = new TH1F("h_mn_phi","muon phi distribution",100,-5.,5.);

  TH2F *h_mn_pt_eta = new TH2F("h_mn_pt_eta","muon pt-eta distribution",100,0.,500.,100,-3.,3.);

  TH2F *h_mn_en_phi = new TH2F("h_mn_en_phi","electron-muon phi ditribution",100,-5.,5.,100,-5.,5.);

  TH1F *h_en_pt = new TH1F("h_en_pt","electron pt distribution",100,0.,500.);
  TH1F *h_en_eta = new TH1F("h_en_eta","electron pseudorapidity distribution",100,-5.,5.);
  TH1F *h_en_phi = new TH1F("h_en_phi","electron phi distribution",100,-5.,5.);

  TH2F *h_en_pt_eta = new TH2F("h_en_pt_eta","electron pt-eta distribution",100,0.,500.,100,-3.,3.);

  TH1F *h_jet1_pt = new TH1F("h_jet1_pt","jet1 distribution",100,0.,500.);
  TH1F *h_jet1_eta = new TH1F("h_jet1_eta","jet pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet2_pt = new TH1F("h_jet2_pt","jet2 distribution",100,0.,500.);
  TH1F *h_jet2_eta = new TH1F("h_jet2_eta","jet2 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet3_pt = new TH1F("h_jet3_pt","jet3 distribution",100,0.,500.);
  TH1F *h_jet3_eta = new TH1F("h_jet3_eta","jet3 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet4_pt = new TH1F("h_jet4_pt","jet4 distribution",100,0.,500.);
  TH1F *h_jet4_eta = new TH1F("h_jet4_eta","jet4 pseudorapidity distribution",100,-5.,5.);

  TH1F *h_met_pt = new TH1F("h_met_pt","met_pt distribution",100,0.,500.);

  TH2F *h_met_mn_pt = new TH2F("h_met_mn_pt","MET-muon pt distribution",100,0.,500.,100,0.,500);
  TH2F *h_met_en_pt = new TH2F("h_met_en_pt","MET-electron pt distribution",100,0.,500.,100,0.,500);

  TH1F *h_mt = new TH1F("h_mt","transverse mass distribution",100,0.,400.);

  TH1F *h_d_phi_w_h = new TH1F("h_d_phi_w_h","d_phi between W boson and H boson",100,0.,M_PI);

  TH1F *h_h_pt = new TH1F("h_h_pt","h_pt distribution",100,0.,500.);
  TH1F *h_h_phi = new TH1F("h_h_phi","h_phi distribution",100,-5.,5.);
  TH1F *h_h_eta = new TH1F("h_h_eta","h_eta distribution",100,-5.,5.);
  TH1F *h_inv_m = new TH1F("h_inv_m","invariant mass",100,0,1000);

  TH1F *h_w_pt = new TH1F("h_w_pt","w_pt distribution",100,0.,500.);
  TH1F *h_w_phi = new TH1F("h_w_phi","w_phi distribution",100,-5.,5.);
  TH1F *h_w_eta = new TH1F("h_w_eta","w_eta distribution",100,-5.,5.);
  TH1F *h_w_m = new TH1F("h_w_m","w_m distribution",100,0.,300.);

  TH1F *h_dR_jet_muon = new TH1F("h_dR_jet_muon","dR between jet and muon distribution (before cross-cleaning)",100,0.,6.);
  TH1F *h_dR_jet_electron = new TH1F("h_dR_jet_electron","dR between jet and electron distribution (before cross-cleaning)",100,0.,6.);

  TH1F *h_dR_jet1_muon_after = new TH1F("h_dR_jet1_muon_after","dR between jet1 and muon distribution (after cross-cleaning)",100,0.,6.);
  TH1F *h_dR_jet1_electron_after = new TH1F("h_dR_jet1_electron_after","dR between jet1 and electron distribution (after cross-cleaning)",100,0.,6.);

  TH1F *h_dR_jet2_muon_after = new TH1F("h_dR_jet2_muon_after","dR between jet2 and muon distribution (after cross-cleaning)",100,0.,6.);
  TH1F *h_dR_jet2_electron_after = new TH1F("h_dR_jet2_electron_after","dR between jet2 and electron distribution (after cross-cleaning)",100,0.,6.);

  TH1F *h_dR_jet3_muon_after = new TH1F("h_dR_jet3_muon_after","dR between jet3 and muon distribution (after cross-cleaning)",100,0.,6.);
  TH1F *h_dR_jet3_electron_after = new TH1F("h_dR_jet3_electron_after","dR between jet3 and electron distribution (after cross-cleaning)",100,0.,6.);

  TH1F *h_dR_jet4_muon_after = new TH1F("h_dR_jet4_muon_after","dR between jet4 and muon distribution (after cross-cleaning)",100,0.,6.);
  TH1F *h_dR_jet4_electron_after = new TH1F("h_dR_jet4_electron_after","dR between jet4 and electron distribution (after cross-cleaning)",100,0.,6.);

  //read all entries and fill the histograms
  Int_t nentries = (Int_t)t1->GetEntries();
for (Int_t i=0;i<nentries;i++) {
  t1->GetEntry(i);



if(mn==0 || en==0) continue;


  
  //muon
  TLorentzVector mn_p;
  mn_p.SetPxPyPzE(mn_px[0],mn_py[0],mn_pz[0],mn_e[0]);
  double mn_eta=mn_p.Eta();
  double mn_phi=mn_p.Phi();
  double mn_pt=mn_p.Pt();
  float d_phi = std::abs(mn_phi-met_phi);
  h_mn_eta->Fill(mn_eta);
  h_mn_pt->Fill(mn_pt);
  h_mn_phi->Fill(mn_phi);
  h_mn_pt_eta->Fill(mn_pt,mn_eta);
  h_met_mn_pt->Fill(met_pt,mn_pt);
  


  //Transverse Mass (MT)
if (d_phi>M_PI){
  d_phi=d_phi-(2*M_PI);
}
  Double_t MT;
  MT=sqrt(2*mn_pt*met_pt*(1-cos(d_phi)));
  h_mt->Fill(MT);
  
  

  //electron
  TLorentzVector en_p;
  en_p.SetPxPyPzE(en_px[0],en_py[0],en_pz[0],en_e[0]);
  double en_eta=en_p.Eta();
  double en_phi=en_p.Phi();
  double en_pt=en_p.Pt();
  h_en_eta->Fill(en_eta);
  h_en_pt->Fill(en_pt);
  h_en_phi->Fill(en_phi);
  h_en_pt_eta->Fill(en_pt,en_eta);
  h_met_en_pt->Fill(met_pt,en_pt);
  h_mn_en_phi->Fill(mn_phi,en_phi);



  //Cross cleaning
vector<TLorentzVector> jet_vec;
for (Int_t ijet= 0; ijet < jet; ijet++)
{
  TLorentzVector pjet;
  pjet.SetPxPyPzE(jet_px[ijet],jet_py[ijet],jet_pz[ijet],jet_e[ijet]);



  //check muon jet overlap
  bool overlap(false);
  double dR1=ROOT::Math::VectorUtil::DeltaR(pjet,mn_p);
  double dR2=ROOT::Math::VectorUtil::DeltaR(pjet,en_p);
  h_dR_jet_muon->Fill(dR1);
  h_dR_jet_electron->Fill(dR2);
if (dR1 < 0.4 || dR2 < 0.4)
{
  overlap = true;
}
if (overlap)
{
  continue;
}
  jet_vec.push_back(pjet);
}
  int jet_mult;
  jet_mult=jet_vec.size();
if(jet_mult<3) continue;



  //jets pt & pseudorapidity  
  float jet1_eta=jet_vec[0].Eta();
  float jet1_pt=jet_vec[0].Pt();
  float jet1_phi=jet_vec[0].Phi();
  //float jet1_e=jet_vec[0].E();
  h_jet1_eta->Fill(jet1_eta);
  h_jet1_pt->Fill(jet1_pt);  
  
 

  float jet2_eta=jet_vec[1].Eta();
  float jet2_pt=jet_vec[1].Pt();
  float jet2_phi=jet_vec[1].Phi();
  //float jet1_e=jet_vec[0].E();
  h_jet2_eta->Fill(jet2_eta);
  h_jet2_pt->Fill(jet2_pt);

  
 
  float jet3_eta=jet_vec[2].Eta();
  float jet3_pt=jet_vec[2].Pt();
  float jet3_phi=jet_vec[2].Phi();
  h_jet3_eta->Fill(jet3_eta);
  h_jet3_pt->Fill(jet3_pt);



if(jet_mult>3){
  float jet4_eta=jet_vec[3].Eta();
  float jet4_pt=jet_vec[3].Pt();
  float jet4_phi=jet_vec[3].Phi();
  h_jet4_eta->Fill(jet4_eta);
  h_jet4_pt->Fill(jet4_pt);
}



  //invariant mass
  TLorentzVector h_p=jet_vec[0]+jet_vec[1]+jet_vec[2];
if (jet_mult>3)
{
  h_p+=jet_vec[3];
}

  float h_m=h_p.M();
  float h_phi=h_p.Phi();
  float h_pt=h_p.Pt();
  float h_eta=h_p.Eta();
  h_inv_m->Fill(h_m);



  //dR after cross cleaning
  TLorentzVector p_jet1;
  p_jet1.SetPtEtaPhiE(jet_vec[0].Pt(),jet_vec[0].Eta(),jet_vec[0].Phi(),jet_vec[0].E());
  double dR1_after=ROOT::Math::VectorUtil::DeltaR(p_jet1,mn_p);
  double dR2_after=ROOT::Math::VectorUtil::DeltaR(p_jet1,en_p);
  h_dR_jet1_muon_after->Fill(dR1_after);
  h_dR_jet1_electron_after->Fill(dR2_after);
  TLorentzVector p_jet2;
  p_jet2.SetPtEtaPhiE(jet_vec[1].Pt(),jet_vec[1].Eta(),jet_vec[1].Phi(),jet_vec[1].E());
  double dR12_after=ROOT::Math::VectorUtil::DeltaR(p_jet2,mn_p);
  double dR22_after=ROOT::Math::VectorUtil::DeltaR(p_jet2,en_p);
  h_dR_jet2_muon_after->Fill(dR12_after);
  h_dR_jet2_electron_after->Fill(dR22_after);
  TLorentzVector p_jet3;
  p_jet3.SetPtEtaPhiE(jet_vec[2].Pt(),jet_vec[2].Eta(),jet_vec[2].Phi(),jet_vec[2].E());
  double dR13_after=ROOT::Math::VectorUtil::DeltaR(p_jet3,mn_p);
  double dR23_after=ROOT::Math::VectorUtil::DeltaR(p_jet3,en_p);
  h_dR_jet3_muon_after->Fill(dR13_after);
  h_dR_jet3_electron_after->Fill(dR23_after);
if (jet_mult>3)
  {
  TLorentzVector p_jet4;
  p_jet4.SetPtEtaPhiE(jet_vec[3].Pt(),jet_vec[3].Eta(),jet_vec[3].Phi(),jet_vec[3].E());
  double dR14_after=ROOT::Math::VectorUtil::DeltaR(p_jet4,mn_p);
  double dR24_after=ROOT::Math::VectorUtil::DeltaR(p_jet4,en_p);
  h_dR_jet4_muon_after->Fill(dR14_after);
  h_dR_jet4_electron_after->Fill(dR24_after);
  }


  //MET
  h_met_pt->Fill(met_pt);



  //W boson
  TLorentzVector met_p;
  met_p.SetPtEtaPhiE(met_pt,0,met_phi,0);
  TLorentzVector w_p=met_p+mn_p;
  float w_pt=w_p.Pt();
  float w_phi=w_p.Phi();
  float w_eta=w_p.Eta();
  float w_m=w_p.M();
  h_w_pt->Fill(w_pt);
  h_w_eta->Fill(w_eta);
  h_w_phi->Fill(w_phi);
  h_w_m->Fill(w_m);


  //D_phi
  float d_phi_w_h;
  d_phi_w_h=abs(w_p.DeltaPhi(h_p));


  h_d_phi_w_h->Fill(d_phi_w_h);



  //scalar sum of the handronic activity
  h_h_pt->Fill(h_pt);
  h_h_phi->Fill(h_phi);
  h_h_eta->Fill(h_eta);
} 
  gStyle->SetPalette(kRainBow);



  //muons
  TCanvas *c_muons = new TCanvas ("muons","muons",1000,1000);
  c_muons->Divide(1,3);
  //pt
  c_muons->cd(1);
  h_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  h_mn_pt->GetYaxis()->SetTitle("Entries");
  h_mn_pt->Draw("Ehist"); 
  //eta
  c_muons->cd(2);
  h_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  h_mn_eta->GetYaxis()->SetTitle("Entries");
  h_mn_eta->Draw("Ehist");
  //phi
  c_muons->cd(3);
  h_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  h_mn_phi->GetYaxis()->SetTitle("Entries");
  h_mn_phi->Draw("Ehist");  
  //2D
  TCanvas *c_2D_muons = new TCanvas ("muons2D","muons2D",1000,1000);
  h_mn_pt_eta->Draw("colz");



  //electrons
  TCanvas *c_electrons = new TCanvas ("electrons","electrons",1000,1000);
  c_electrons->Divide(1,3); 
  //pt
  c_electrons->cd(1);
  h_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  h_en_pt->GetYaxis()->SetTitle("Entries");
  h_en_pt->Draw("Ehist");
  //eta
  c_electrons->cd(2);
  h_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  h_en_eta->GetYaxis()->SetTitle("Entries");
  h_en_eta->Draw("Ehist");
  //phi
  c_electrons->cd(3);
  h_en_phi->GetXaxis()->SetTitle("Electron Phi");
  h_en_phi->GetYaxis()->SetTitle("Entries");
  h_en_phi->Draw("Ehist");  
  //2D
  TCanvas *c_2D_electrons = new TCanvas ("electrons2D","electrons2D",1000,1000);
  h_en_pt_eta->Draw("colz");



  //2D muon-electron
  TCanvas *c_2d_phi = new TCanvas("muon-electron phi","muon-electron phi",1000,1000);
  h_mn_en_phi->Draw("colz");



  //jets
  TCanvas *c_jets = new TCanvas("jets","jets",1100,1000);
  c_jets->Divide(2,2);
  //pt
  c_jets->cd(1);
  h_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  h_jet1_pt->GetYaxis()->SetTitle("Entries");
  h_jet1_pt->Draw("Ehist");
  c_jets->cd(2);
  h_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  h_jet2_pt->GetYaxis()->SetTitle("Entries");
  h_jet2_pt->Draw("Ehist");
  c_jets->cd(3);
  h_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  h_jet3_pt->GetYaxis()->SetTitle("Entries");
  h_jet3_pt->Draw("Ehist");
  c_jets->cd(4);
  h_jet4_pt->Draw("Ehist");
  h_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  h_jet4_pt->GetYaxis()->SetTitle("Entries");
  //eta
  TCanvas *c_jets_eta= new TCanvas("jets_eta","jets_eta",1100,1000);
  c_jets_eta->Divide(2,2);
  c_jets_eta->cd(1);
  h_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  h_jet1_eta->GetYaxis()->SetTitle("Entries");
  h_jet1_eta->Draw("Ehist");
  c_jets_eta->cd(2);
  h_jet2_eta->Draw("Ehist");
  h_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  h_jet2_eta->GetYaxis()->SetTitle("Entries");
  c_jets_eta->cd(3);
  h_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  h_jet3_eta->GetYaxis()->SetTitle("Entries");
  h_jet3_eta->Draw("Ehist");
  c_jets_eta->cd(4);
  h_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  h_jet4_eta->GetYaxis()->SetTitle("Entries");
  h_jet4_eta->Draw("Ehist");
  


  //MET
  TCanvas *c_MET = new TCanvas("MET","MET",1100,1000);
  c_MET->Divide(1,2);
  c_MET->cd(1);
  h_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  h_met_pt->GetYaxis()->SetTitle("Entries");
  h_met_pt->Draw("Ehist");
  


  //Mt
  c_MET->cd(2);
  h_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  h_mt->GetYaxis()->SetTitle("Entries");
  h_mt->Draw("Ehist");



  //MET-muon
  TCanvas *c_2D = new TCanvas("2D","2D",1000,1000); 
  c_2D->Divide(1,2);
  c_2D->cd(1);
  h_met_mn_pt->Draw("colz");
  c_2D->cd(2);
  h_met_en_pt->Draw("colz");



  //d_phi W and H bosons 
  TCanvas *c_w_h = new TCanvas("w_h","w_h",1000,1000);
  h_d_phi_w_h->SetStats(11111);
  h_d_phi_w_h->Draw("Ehist");



  //Higgs
  TCanvas *c_higgs = new TCanvas("higgs","higgs",1100,1000);
  c_higgs->Divide(2,2);
  //pt
  c_higgs->cd(1);
  h_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  h_h_pt->GetYaxis()->SetTitle("Entries");
  h_h_pt->Draw("Ehist");
  //phi
  c_higgs->cd(3);
  h_h_phi->GetXaxis()->SetTitle("Higgs phi");
  h_h_phi->GetYaxis()->SetTitle("Entries");
  h_h_phi->Draw("Ehist");
  //eta
  c_higgs->cd(2);
  h_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  h_h_eta->GetYaxis()->SetTitle("Entries");
  h_h_eta->Draw("Ehist");
  //mass
  c_higgs->cd(4);
  h_inv_m->GetXaxis()->SetTitle("Higgs mass");
  h_inv_m->GetYaxis()->SetTitle("Entries");
  h_inv_m->Draw("Ehist");



  //W boson
  TCanvas *c_W = new TCanvas("W","W",1100,1000);
  c_W->Divide(2,2);
  //pt
  c_W->cd(1);
  h_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  h_w_pt->GetYaxis()->SetTitle("Entries");
  h_w_pt->Draw("Ehist");
  //eta
  c_W->cd(2);
  h_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  h_w_eta->GetYaxis()->SetTitle("Entries");
  h_w_eta->Draw("Ehist");
  //phi
  c_W->cd(3);
  h_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  h_w_phi->GetYaxis()->SetTitle("Entries");
  h_w_phi->Draw("Ehist");
  //mass
  c_W->cd(4);
  h_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  h_w_m->GetYaxis()->SetTitle("Entries");
  h_w_m->Draw("Ehist");


  //delta R before cross-cleaning
  TCanvas *c_dR = new TCanvas("dR","dR",1100,1100);
  c_dR->Divide(1,2);
  //muon-jet
  c_dR->cd(1);
  h_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  h_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  h_dR_jet_muon->Draw("Ehist");
  //electron-jet
  c_dR->cd(2);
  h_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  h_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  h_dR_jet_electron->Draw("Ehist");



  //delta R after cross-cleaning
  TCanvas *c_dR_after = new TCanvas("dR_after","dR_after",1100,1100);
  c_dR_after->Divide(2,4);
  //muon-jet1
  c_dR_after->cd(1);
  h_dR_jet1_muon_after->GetXaxis()->SetTitle("delta R between jets and muons");
  h_dR_jet1_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet1_muon_after->Draw("Ehist");
  //electron-jet1
  c_dR_after->cd(2);
  h_dR_jet1_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons");
  h_dR_jet1_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet1_electron_after->Draw("Ehist");
  //muon-jet2
  c_dR_after->cd(3);
  h_dR_jet2_muon_after->GetXaxis()->SetTitle("delta R between jets2 and muons");
  h_dR_jet2_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet2_muon_after->Draw("Ehist");
  //electron-jet2
  c_dR_after->cd(4);
  h_dR_jet2_electron_after->GetXaxis()->SetTitle("delta R between jets2 and electrons");
  h_dR_jet2_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet2_electron_after->Draw("Ehist");
  //muon-jet3
  c_dR_after->cd(5);
  h_dR_jet3_muon_after->GetXaxis()->SetTitle("delta R between jets3 and muons");
  h_dR_jet3_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet3_muon_after->Draw("Ehist");
  //electron-jet3
  c_dR_after->cd(6);
  h_dR_jet3_electron_after->GetXaxis()->SetTitle("delta R between jets3 and electrons");
  h_dR_jet3_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet3_electron_after->Draw("Ehist");
  //muon-jet4
  c_dR_after->cd(7);
  h_dR_jet4_muon_after->GetXaxis()->SetTitle("delta R between jets4 and muons");
  h_dR_jet4_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet4_muon_after->Draw("Ehist");
  //electron-jet2
  c_dR_after->cd(8);
  h_dR_jet4_electron_after->GetXaxis()->SetTitle("delta R between jets2 and electrons");
  h_dR_jet4_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet4_electron_after->Draw("Ehist");
}
