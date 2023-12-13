#define MyClass_cxx
#include "MyClass.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>
#include <TLorentzVector.h>

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
  //TFile f("histos_signal.root","recreate");
  TFile f("histos_back.root","recreate");
  //muon 
  TH1F *h_mn_pt = new TH1F("h_mn_pt","muon pt distribution",100,0.,500.);
  TH1F *h_mn_eta = new TH1F("h_mn_eta","muon pseudorapidity distribution",100,-5.,5.);
  TH1F *h_mn_phi = new TH1F("h_mn_phi","muon phi distribution",100,-5.,5.);  

  TH2F *h_mn_pt_eta = new TH2F("h_mn_pt_eta","muon pt-eta distribution",100,0.,500.,100,-3.,3.);

  TH2F *h_mn_en_phi = new TH2F("h_mn_en_phi","electron-muon phi ditribution",100,-5.,5.,100,-5.,5.);

  TH1F *h_en_pt = new TH1F("h_en_pt","electron pt distribution",500,0.,500.); 
  TH1F *h_en_eta = new TH1F("h_en_eta","electron pseudorapidity distribution",100,-5.,5.);
  TH1F *h_en_phi = new TH1F("h_en_phi","electron phi distribution",100,-5.,5.);

  TH2F *h_en_pt_eta = new TH2F("h_en_pt_eta","electron pt-eta distribution",100,0.,500.,100,-3.,3.);

  TH1F *h_jet1_pt = new TH1F("h_jet1_pt","jet1 distribution",500,0.,500.);
  TH1F *h_jet1_eta = new TH1F("h_jet1_eta","jet pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet1_phi = new TH1F("h_jet1_phi","jet phi distribution",100,-5.,5.);
  TH1F *h_jet1_m = new TH1F("h_jet1_m","jet mass distributions",100,0.,100);
  TH1F *h_jet2_pt = new TH1F("h_jet2_pt","jet2 distribution",500,0.,500.);
  TH1F *h_jet2_eta = new TH1F("h_jet2_eta","jet2 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet2_phi = new TH1F("h_jet2_phi","jet phi distribution",100,-5.,5.);
  TH1F *h_jet2_m = new TH1F("h_jet2_m","jet mass distributions",100,0.,100);
  TH1F *h_jet3_pt = new TH1F("h_jet3_pt","jet3 distribution",500,0.,500.);
  TH1F *h_jet3_eta = new TH1F("h_jet3_eta","jet3 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet3_phi = new TH1F("h_jet3_phi","jet phi distribution",100,-5.,5.);
  TH1F *h_jet3_m = new TH1F("h_jet3_m","jet mass distributions",100,0.,100);
  TH1F *h_jet4_pt = new TH1F("h_jet4_pt","jet4 distribution",500,0.,500.);
  TH1F *h_jet4_eta = new TH1F("h_jet4_eta","jet4 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_jet4_phi = new TH1F("h_jet4_phi","jet phi distribution",100,-5.,5.);
  TH1F *h_jet4_m = new TH1F("h_jet4_m","jet mass distributions",100,0.,100);

  TH1F *h_b_jet1_pt = new TH1F("h_b_jet1_pt","bjet1 distribution",500,0.,500.);
  TH1F *h_b_jet1_eta = new TH1F("h_b_jet1_eta","bjet1 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_b_jet1_phi = new TH1F("h_b_jet1_phi","bjet1 phi distribution",100,-5.,5.);
  TH1F *h_b_jet1_m = new TH1F("h_b_jet1_m","bjet1 mass distributions",100,0.,100);
  TH1F *h_b_jet2_pt = new TH1F("h_b_jet2_pt","bjet2 distribution",500,0.,500.);
  TH1F *h_b_jet2_eta = new TH1F("h_b_jet2_eta","bjet2 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_b_jet2_phi = new TH1F("h_b_jet2_phi","bjet2 phi distribution",100,-5.,5.);
  TH1F *h_b_jet2_m = new TH1F("h_b_jet2_m","bjet2 mass distributions",100,0.,100);
  TH1F *h_b_jet3_pt = new TH1F("h_b_jet3_pt","bjet3 distribution",500,0.,500.);
  TH1F *h_b_jet3_eta = new TH1F("h_b_jet3_eta","bjet3 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_b_jet3_phi = new TH1F("h_b_jet3_phi","bjet3 phi distribution",100,-5.,5.);
  TH1F *h_b_jet3_m = new TH1F("h_b_jet3_m","bjet3 mass distributions",100,0.,100);
  TH1F *h_b_jet4_pt = new TH1F("h_b_jet4_pt","bjet4 distribution",500,0.,500.);
  TH1F *h_b_jet4_eta = new TH1F("h_b_jet4_eta","bjet4 pseudorapidity distribution",100,-5.,5.);
  TH1F *h_b_jet4_phi = new TH1F("h_b_jet4_phi","bjet4 phi distribution",100,-5.,5.);
  TH1F *h_b_jet4_m = new TH1F("h_b_jet4_m","bjet4 mass distributions",100,0.,100);

  TH1F *h_met_pt = new TH1F("h_met_pt","met_pt distribution",100,0.,500.);

  TH2F *h_met_mn_pt = new TH2F("h_met_mn_pt","MET-muon pt distribution",100,0.,500.,100,0.,500);
  TH2F *h_met_en_pt = new TH2F("h_met_en_pt","MET-electron pt distribution",100,0.,500.,100,0.,500);

  TH1F *h_mt = new TH1F("h_mt","transverse mass distribution",100,0.,400.);

  TH1F *h_d_phi_w_h = new TH1F("h_d_phi_w_h","d_phi between W boson and H boson",100,0.,M_PI);
  TH1F *h_d_phi_w_b_h = new TH1F("h_d_phi_w_b_h","d_phi between W boson and b_tagged H boson",100,0.,M_PI);

  TH1F *h_h_pt = new TH1F("h_h_pt","h_pt distribution",100,0.,500.);
  TH1F *h_h_phi = new TH1F("h_h_phi","h_phi distribution",100,-5.,5.);
  TH1F *h_h_eta = new TH1F("h_h_eta","h_eta distribution",100,-5.,5.);
  TH1F *h_inv_m = new TH1F("h_inv_m","invariant mass",200,0,1000);
  TH1F *h_b_inv_m = new TH1F("h_b_inv_m","invariant mass (after b_tagging)",200,0,1000);

  TH1F *h_w_pt = new TH1F("h_w_pt","w_pt distribution",100,0.,500.);
  TH1F *h_w_phi = new TH1F("h_w_phi","w_phi distribution",100,-5.,5.);
  TH1F *h_w_eta = new TH1F("h_w_eta","w_eta distribution",100,-5.,5.);
  TH1F *h_w_m = new TH1F("h_w_m","w_m distribution",100,0.,300.);

  TH1F *h_dR_jet_muon = new TH1F("h_dR_jet_muon","dR between jet and muon distribution ",100,0.,6.);
  TH1F *h_dR_jet_electron = new TH1F("h_dR_jet_electron","dR between jet and electron distribution ",100,0.,6.);

  TH1F *h_dR_jet_muon_after=new TH1F("h_dR_jet_muon_after","dR between jets and muons",100,0.,6.);
  TH1F *h_dR_jet_electron_after=new TH1F("h_dR_jet_electron_after","dR between jets and electron",100,0.,6.);
  TH1F *h_jet_mult=new TH1F("h_jet_mult","jet multiplicity",10,0.,10.);
  TH1F *h_b_jet_mult=new TH1F("h_b_jet_mult","b_jet multiplicity",10,0.,10.);


  TH1F *h_lep_pt = new TH1F("h_lep_pt","Lepton pt distribution",100,0.,500.);
  TH1F *h_lep_phi = new TH1F("h_lep_phi","Lepton phi distribution",100,-5.,5.);
  TH1F *h_lep_eta = new TH1F("h_lep_eta","Lepton pseudorapidity distribution",100,-5.,5.);
  TH1F *h_lep_m = new TH1F("h_lep_m","Lepton mass distribution",100,0.,0.3);

  Long64_t nbytes = 0, nb = 0;

  int count_N1(0);
  int count_N2(0);
  int count_N3(0);
  int count_N4(0);

for (Long64_t jentry=0; jentry<nentries;jentry++) {
  nb = fChain->GetEntry(jentry);   nbytes += nb;
  Long64_t ientry = LoadTree(jentry);

 // Require at least 1 lepton


  vector<TLorentzVector> vec_muons;
  vector<TLorentzVector> vec_electrons;
  vector<TLorentzVector> vec_leptons;

for (int i=0; i<mn; i++) {

	TLorentzVector p_muon;
	p_muon.SetPxPyPzE(mn_px[i],mn_py[i],mn_pz[i],mn_en[i]);
	
	// pt/eta cuts (detector acceptance cuts: pT>20 GeV and |eta|<2.4
if (p_muon.Pt()<20. || fabs(p_muon.Eta())>2.4) continue;
	// Require muon to pass good Identification and Isolation:
if ( !(mn_passId[i]) || !(mn_passIso[i]) ) continue; 

	// store muons in new vector:
	vec_leptons.push_back(p_muon);
  vec_muons.push_back(p_muon);

}

  int Nmuons=vec_muons.size(); // Muon multiplicity
  

for (int i=0; i<en; i++) {

	TLorentzVector p_electron;
	p_electron.SetPxPyPzE(en_px[i],en_py[i],en_pz[i],en_en[i]);
	
	// pt/eta cuts (detector acceptance cuts: pT>20 GeV and |eta|<2.4
if (p_electron.Pt()<20. || fabs(p_electron.Eta())>2.4) continue;
	// Require electron to pass good Identification and Isolation:
if ( !(en_passId[i]) || !(en_passIso[i]) ) continue; 

  

	// store muons in new vector:
	vec_leptons.push_back(p_electron);
  vec_electrons.push_back(p_electron);
}


  int Nelectrons=vec_electrons.size(); // Electron multiplicity
  int Nleptons=vec_leptons.size(); // Lepton multiplicity
if (Nleptons == 0) continue;
if (mn==0 || en==0) continue;

 count_N1++;
    
for (int i=0; i<Nmuons; i++) vec_leptons.push_back(vec_muons[i]);
for (int i=0; i<Nelectrons; i++) vec_leptons.push_back(vec_electrons[i]);


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
  vector<TLorentzVector> Njet_vec;
  vector<TLorentzVector> bjet_vec;
for (Int_t ijet= 0; ijet < jet; ijet++)
{
  TLorentzVector pjet;
  pjet.SetPxPyPzE(jet_px[ijet],jet_py[ijet],jet_pz[ijet],jet_en[ijet]);
  Njet_vec.push_back(pjet);
  

  //check muon jet overlap
  bool overlap(false);
  double dR_jet_muon=ROOT::Math::VectorUtil::DeltaR(pjet,mn_p);
  double dR_jet_electron=ROOT::Math::VectorUtil::DeltaR(pjet,en_p);
  h_dR_jet_muon->Fill(dR_jet_muon);
  h_dR_jet_electron->Fill(dR_jet_electron);
if (dR_jet_muon < 0.4 || dR_jet_electron < 0.4)
{
  overlap = true;
}
if (overlap)
{
  continue;
}
  jet_vec.push_back(pjet);

  
  //b-jet indetification
  if (jet_btag1[ijet]>0.4941) bjet_vec.push_back(pjet);  
}  
  //dR after cross cleaning
  TLorentzVector p_jet_after;
  int jet_mult;
  jet_mult=jet_vec.size();
  h_jet_mult->Fill(jet_mult);
for (int ijet_after = 0; ijet_after <jet_mult; ijet_after++)
{
  p_jet_after.SetPtEtaPhiE(jet_vec[ijet_after].Pt(),jet_vec[ijet_after].Eta(),jet_vec[ijet_after].Phi(),jet_vec[ijet_after].E());
  double dR_mn_jet_after=ROOT::Math::VectorUtil::DeltaR(p_jet_after,mn_p);
  double dR_en_jet_after=ROOT::Math::VectorUtil::DeltaR(p_jet_after,en_p);
  h_dR_jet_muon_after->Fill(dR_mn_jet_after);
  h_dR_jet_electron_after->Fill(dR_en_jet_after);
}

  int Njets=Njet_vec.size();

// Require at least 3 jets

if(jet_mult<3) continue;
  count_N2++;

  int bjet_mult;
  bjet_mult=bjet_vec.size();
  h_b_jet_mult->Fill(bjet_mult);

if (bjet_mult<3) continue;
  count_N3++;




  //jets pt & pseudorapidity  
  float jet1_eta=jet_vec[0].Eta();
  float jet1_pt=jet_vec[0].Pt();
  float jet1_phi=jet_vec[0].Phi();
  float jet1_m=jet_vec[0].M();
  h_jet1_eta->Fill(jet1_eta);
  h_jet1_pt->Fill(jet1_pt);  
  h_jet1_phi->Fill(jet1_phi);
  h_jet1_m->Fill(jet1_m);

  
 

  float jet2_eta=jet_vec[1].Eta();
  float jet2_pt=jet_vec[1].Pt();
  float jet2_phi=jet_vec[1].Phi();
  float jet2_m=jet_vec[1].M();
  h_jet2_eta->Fill(jet2_eta);
  h_jet2_pt->Fill(jet2_pt);
  h_jet2_phi->Fill(jet2_phi);
  h_jet2_m->Fill(jet2_m);

  
 
  float jet3_eta=jet_vec[2].Eta();
  float jet3_pt=jet_vec[2].Pt();
  float jet3_phi=jet_vec[2].Phi();
  float jet3_m=jet_vec[2].M();
  h_jet3_eta->Fill(jet3_eta);
  h_jet3_pt->Fill(jet3_pt);
  h_jet3_phi->Fill(jet3_phi);
  h_jet3_m->Fill(jet3_m);



if(jet_mult>3){
  float jet4_eta=jet_vec[3].Eta();
  float jet4_pt=jet_vec[3].Pt();
  float jet4_phi=jet_vec[3].Phi();
  float jet4_m=jet_vec[3].M();
  h_jet4_eta->Fill(jet4_eta);
  h_jet4_pt->Fill(jet4_pt);
  h_jet4_phi->Fill(jet4_phi);
  h_jet4_m->Fill(jet4_m);
}



if(bjet_mult<3) continue;
  

  //bjets pt & pseudorapidity  
  float bjet1_eta=bjet_vec[0].Eta();
  float bjet1_pt=bjet_vec[0].Pt();
  float bjet1_phi=bjet_vec[0].Phi();
  float bjet1_m=bjet_vec[0].M();
  h_b_jet1_eta->Fill(bjet1_eta);
  h_b_jet1_pt->Fill(bjet1_pt);  
  h_b_jet1_phi->Fill(bjet1_phi);
  h_b_jet1_m->Fill(bjet1_m);

  

  float bjet2_eta=bjet_vec[1].Eta();
  float bjet2_pt=bjet_vec[1].Pt();
  float bjet2_phi=bjet_vec[1].Phi();
  float bjet2_m=bjet_vec[1].M();
  h_b_jet2_eta->Fill(bjet2_eta);
  h_b_jet2_pt->Fill(bjet2_pt);
  h_b_jet2_phi->Fill(bjet2_phi);
  h_b_jet2_m->Fill(bjet2_m);

  
 
  float bjet3_eta=bjet_vec[2].Eta();
  float bjet3_pt=bjet_vec[2].Pt();
  float bjet3_phi=bjet_vec[2].Phi();
  float bjet3_m=bjet_vec[2].M();
  h_b_jet3_eta->Fill(bjet3_eta);
  h_b_jet3_pt->Fill(bjet3_pt);
  h_b_jet3_phi->Fill(bjet3_phi);
  h_b_jet3_m->Fill(bjet3_m);



if(bjet_mult>3){
  float bjet4_eta=bjet_vec[3].Eta();
  float bjet4_pt=bjet_vec[3].Pt();
  float bjet4_phi=bjet_vec[3].Phi();
  float bjet4_m=bjet_vec[3].M();
  h_b_jet4_eta->Fill(bjet4_eta);
  h_b_jet4_pt->Fill(bjet4_pt);
  h_b_jet4_phi->Fill(bjet4_phi);
  h_b_jet4_m->Fill(bjet4_m);
}



  //invariant mass
  TLorentzVector h_p=jet_vec[0]+jet_vec[1]+jet_vec[2];
  TLorentzVector h_b_p=bjet_vec[0]+bjet_vec[1]+bjet_vec[2];
  
if (jet_mult>3)
{
  h_p+=jet_vec[3];
}
if (bjet_mult>3)
{
  h_b_p+=bjet_vec[3];
}

  for(int j=0; j<Nleptons; j++){
  //Transverse Mass (MT)
  TLorentzVector p_lepton;
  p_lepton.SetPtEtaPhiE(vec_leptons[j].Pt(),vec_leptons[j].Eta(),vec_leptons[j].Phi(),vec_leptons[j].E());
if (d_phi>M_PI){
	d_phi=d_phi-(2*M_PI);
}
  Double_t MT;
  MT=sqrt(2*mn_pt*met_pt*(1-cos(d_phi)));
  h_mt->Fill(MT);
  double lep_eta=p_lepton.Eta();
  double lep_pt=p_lepton.Pt();
  double lep_phi=p_lepton.Phi();
  double lep_m=p_lepton.M();
  h_lep_pt->Fill(lep_pt);
  h_lep_phi->Fill(lep_phi);
  h_lep_m->Fill(lep_m);
  h_lep_eta->Fill(lep_eta);
}

  float h_m=h_p.M();
  float h_phi=h_p.Phi();
  float h_pt=h_p.Pt();
  float h_eta=h_p.Eta();
  h_inv_m->Fill(h_m);

  float h_b_m=h_b_p.M();
  float h_b_phi=h_b_p.Phi();
  float h_b_pt=h_b_p.Pt();
  float h_b_eta=h_b_p.Eta();
  h_b_inv_m->Fill(h_b_m);



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
  float d_phi_w_b_h;
  d_phi_w_b_h=abs(w_p.DeltaPhi(h_b_p));
  


  h_d_phi_w_h->Fill(d_phi_w_h);
  h_d_phi_w_b_h->Fill(d_phi_w_b_h);



  //scalar sum of the handronic activity
  h_h_pt->Fill(h_pt);
  h_h_phi->Fill(h_phi);
  h_h_eta->Fill(h_eta);


if (ientry < 0) break;
   // if (Cut(ientry) < 0) continue;
} // end EVENT loop

std::cout << " Number of entries = " << nentries << std::endl;
std::cout << " Nevents at step 1 (at least 1 lepton) = " << count_N1 << " and eff_1 = " << (float)count_N1/(float)nentries << std::endl;
std::cout << " Nevents at step 2 (at least 3 jets) = " << count_N2 << " and eff_2 =" << (float)count_N2/(float)count_N1 << std::endl;
std::cout << " Nevents at step 3 (at least 3 b-jets) = " << count_N3 << " and eff_3 = " << (float)count_N3/(float)count_N1 << std::endl;




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
  h_jet1_phi->Write();
  h_jet1_m->Write();
  h_jet2_pt->Write();
  h_jet2_eta->Write();
  h_jet2_phi->Write();
  h_jet2_m->Write();
  h_jet3_pt->Write();
  h_jet3_eta->Write();
  h_jet3_phi->Write();
  h_jet3_m->Write();
  h_jet4_pt->Write();
  h_jet4_eta->Write();
  h_jet4_phi->Write();
  h_jet4_m->Write();
  h_b_jet1_pt->Write(); 
  h_b_jet1_eta->Write();
  h_b_jet1_phi->Write();
  h_b_jet1_m->Write();
  h_b_jet2_pt->Write();
  h_b_jet2_eta->Write();
  h_b_jet2_phi->Write();
  h_b_jet2_m->Write();
  h_b_jet3_pt->Write();
  h_b_jet3_eta->Write();
  h_b_jet3_phi->Write();
  h_b_jet3_m->Write();
  h_b_jet4_pt->Write();
  h_b_jet4_eta->Write();
  h_b_jet4_phi->Write();
  h_b_jet4_m->Write();
  h_met_pt->Write();
  h_met_mn_pt->Write();
  h_met_en_pt->Write();
  h_mt->Write();
  h_d_phi_w_h->Write();
  h_d_phi_w_b_h->Write();
  h_h_pt->Write();
  h_h_phi->Write();
  h_h_eta->Write();
  h_inv_m->Write();
  h_b_inv_m->Write();
  h_w_pt->Write();
  h_w_phi->Write();
  h_w_eta->Write();
  h_w_m->Write();
  h_lep_pt->Write();
  h_lep_phi->Write();
  h_lep_eta->Write();
  h_lep_m->Write();
  h_dR_jet_muon->Write();
  h_dR_jet_electron->Write();
  h_dR_jet_muon_after->Write();
  h_dR_jet_electron_after->Write();
  h_jet_mult->Write();
  h_b_jet_mult->Write();
  f.Close();
}
