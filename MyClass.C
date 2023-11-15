#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void MyClass::Loop()
{
//   In a ROOT session, you can do:
//      root> .L MyClass.C
//      root> MyClass t
//      root> t.GetEntry(12); // Fill t data members with entry number 12
//      root> t.Show();       // Show values of entry 12
//      root> t.Show(16);     // Read and show values of entry 16
//      root> t.Loop();       // Loop on all entries
//

//     This is the loop skeleton where:
//    jentry is the global entry number in the chain
//    ientry is the entry number in the current Tree
//  Note that the argument to GetEntry must be:
//    jentry for TChain::GetEntry
//    ientry for TTree::GetEntry and TBranch::GetEntry
//
//       To read only selected branches, Insert statements like:
// METHOD1:
//    fChain->SetBranchStatus("*",0);  // disable all branches
//    fChain->SetBranchStatus("branchname",1);  // activate branchname
// METHOD2: replace line
//    fChain->GetEntry(jentry);       //read all branches
//by  b_branchname->GetEntry(ientry); //read only this branch
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();
   TFile f("histos.root","recreate");
   //muon 
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

   TH1F *h_dR_jet1_muon_after = new TH1F("h_dR_jet_muon_after","dR between jet and muon distribution (after cross-cleaning)",100,0.,6.);
   TH1F *h_dR_jet1_electron_after = new TH1F("h_dR_jet_electron_after","dR between jet and electron distribution (after cross-cleaning)",100,0.,6.);

   TH1F *h_dR_jet2_muon_after = new TH1F("h_dR_jet2_muon_after","dR between jet2 and muon distribution (after cross-cleaning)",100,0.,6.);
   TH1F *h_dR_jet2_electron_after = new TH1F("h_dR_jet2_electron_after","dR between jet2 and electron distribution (after cross-cleaning)",100,0.,6.);

   TH1F *h_dR_jet3_muon_after = new TH1F("h_dR_jet3_muon_after","dR between jet3 and muon distribution (after cross-cleaning)",100,0.,6.);
   TH1F *h_dR_jet3_electron_after = new TH1F("h_dR_jet3_electron_after","dR between jet3 and electron distribution (after cross-cleaning)",100,0.,6.);

   TH1F *h_dR_jet4_muon_after = new TH1F("h_dR_jet4_muon_after","dR between jet4 and muon distribution (after cross-cleaning)",100,0.,6.);
   TH1F *h_dR_jet4_electron_after = new TH1F("h_dR_jet4_electron_after","dR between jet4 and electron distribution (after cross-cleaning)",100,0.,6.);

   Long64_t nbytes = 0, nb = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      Long64_t ientry = LoadTree(jentry);
      //for (Int_t mn_i = 0; mn_i < mn; mn_i++)
      //{
      //muons
      //TLorentzVector mn_p;
      //mn_p.SetPxPyPzE(mn_px[0],mn_py[0],mn_pz[0],mn_en[0]);
      //double mn_eta=mn_p.Eta();
      //double mn_phi=mn_p.Phi();
      //double mn_pt=mn_p.Pt();
      //float d_phi = std::abs(mn_phi-met_phi);
      //h_mn_eta->Fill(mn_eta);
      //h_mn_pt->Fill(mn_pt);
      //h_mn_phi->Fill(mn_phi);
      //h_mn_pt_eta->Fill(mn_pt,mn_eta);
      //h_met_mn_pt->Fill(met_pt,mn_pt);
      //}
      if(mn==0 || en==0) continue;


  
  //muon
  TLorentzVector mn_p;
  mn_p.SetPxPyPzE(mn_px[0],mn_py[0],mn_pz[0],mn_en[0]);
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
  en_p.SetPxPyPzE(en_px[0],en_py[0],en_pz[0],en_en[0]);
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
  pjet.SetPxPyPzE(jet_px[ijet],jet_py[ijet],jet_pz[ijet],jet_en[ijet]);



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


   if (ientry < 0) break;
   // if (Cut(ientry) < 0) continue;
   }
   h_mn_pt->Write();
   h_mn_eta->Write();
   h_mn_phi->Write();
   h_mn_pt_eta->Write();
   h_mn_en_phi->Write();
   h_en_pt->Write();
   h_en_eta->Write();
   h_en_phi->Write();
   h_en_pt_eta->Write();
   h_jet1_pt->Write();
   h_jet1_eta->Write();
   h_jet2_pt->Write();
   h_jet2_eta->Write();
   h_jet3_pt->Write();
   h_jet3_eta->Write();
   h_jet4_pt->Write();
   h_jet4_eta->Write();
   h_met_pt->Write();
   h_met_mn_pt->Write();
   h_met_en_pt->Write();
   h_mt->Write();
   h_d_phi_w_h->Write();
   h_h_pt->Write();
   h_h_phi->Write();
   h_h_eta->Write();
   h_inv_m->Write();
   h_w_pt->Write();
   h_w_phi->Write();
   h_w_eta->Write();
   h_w_m->Write();
   h_dR_jet_muon->Write();
   h_dR_jet_electron->Write();
   h_dR_jet1_muon_after->Write();
   h_dR_jet1_electron_after->Write();
   h_dR_jet2_muon_after->Write();
   h_dR_jet2_electron_after->Write();
   h_dR_jet3_muon_after->Write();
   h_dR_jet3_electron_after->Write();
   h_dR_jet4_muon_after->Write();
   h_dR_jet4_electron_after->Write();
   f.Close();

}