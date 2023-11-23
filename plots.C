#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void plots(){
  TFile *inputfile=TFile::Open("histos.root","READ");
  
  
  TH1F *h_mn_pt = (TH1F*)inputfile->Get("h_mn_pt");
  TH1F *h_mn_eta = (TH1F*)inputfile->Get("h_mn_eta");
  TH1F *h_mn_phi = (TH1F*)inputfile->Get("h_mn_phi");
  
  TH1F *h_en_pt = (TH1F*)inputfile->Get("h_en_pt");
  TH1F *h_en_eta = (TH1F*)inputfile->Get("h_en_eta");
  TH1F *h_en_phi = (TH1F*)inputfile->Get("h_mn_phi");
  
  TH1F *h_jet1_pt = (TH1F*)inputfile->Get("h_jet1_pt");
  TH1F *h_jet1_eta = (TH1F*)inputfile->Get("h_jet1_eta");
  TH1F *h_jet1_phi = (TH1F*)inputfile->Get("h_jet1_phi");
  TH1F *h_jet1_m = (TH1F*)inputfile->Get("h_jet1_m");
  TH1F *h_jet2_pt = (TH1F*)inputfile->Get("h_jet2_pt");
  TH1F *h_jet2_eta = (TH1F*)inputfile->Get("h_jet2_eta");
  TH1F *h_jet2_phi = (TH1F*)inputfile->Get("h_jet2_phi");
  TH1F *h_jet2_m = (TH1F*)inputfile->Get("h_jet2_m");
  TH1F *h_jet3_pt = (TH1F*)inputfile->Get("h_jet3_pt");
  TH1F *h_jet3_eta = (TH1F*)inputfile->Get("h_jet3_eta");
  TH1F *h_jet3_phi = (TH1F*)inputfile->Get("h_jet3_phi");
  TH1F *h_jet3_m = (TH1F*)inputfile->Get("h_jet3_m");
  TH1F *h_jet4_pt = (TH1F*)inputfile->Get("h_jet4_pt");
  TH1F *h_jet4_eta = (TH1F*)inputfile->Get("h_jet4_eta");
  TH1F *h_jet4_phi = (TH1F*)inputfile->Get("h_jet4_phi");
  TH1F *h_jet4_m = (TH1F*)inputfile->Get("h_jet4_m");


  TH1F *h_b_jet1_pt = (TH1F*)inputfile->Get("h_b_jet1_pt");
  TH1F *h_b_jet1_eta = (TH1F*)inputfile->Get("h_b_jet1_eta");
  TH1F *h_b_jet1_phi = (TH1F*)inputfile->Get("h_b_jet1_phi");
  TH1F *h_b_jet1_m = (TH1F*)inputfile->Get("h_b_jet1_m");
  TH1F *h_b_jet2_pt = (TH1F*)inputfile->Get("h_b_jet2_pt");
  TH1F *h_b_jet2_eta = (TH1F*)inputfile->Get("h_b_jet2_eta");
  TH1F *h_b_jet2_phi = (TH1F*)inputfile->Get("h_b_jet2_phi");
  TH1F *h_b_jet2_m = (TH1F*)inputfile->Get("h_b_jet2_m");
  TH1F *h_b_jet3_pt = (TH1F*)inputfile->Get("h_b_jet3_pt");
  TH1F *h_b_jet3_eta = (TH1F*)inputfile->Get("h_b_jet3_eta");
  TH1F *h_b_jet3_phi = (TH1F*)inputfile->Get("h_b_jet3_phi");
  TH1F *h_b_jet3_m = (TH1F*)inputfile->Get("h_b_jet3_m");
  TH1F *h_b_jet4_pt = (TH1F*)inputfile->Get("h_b_jet4_pt");
  TH1F *h_b_jet4_eta = (TH1F*)inputfile->Get("h_b_jet4_eta");
  TH1F *h_b_jet4_phi = (TH1F*)inputfile->Get("h_b_jet4_phi");
  TH1F *h_b_jet4_m = (TH1F*)inputfile->Get("h_b_jet4_m");
  
  TH1F *h_met_pt = (TH1F*)inputfile->Get("h_met_pt");
  TH1F *h_mt = (TH1F*)inputfile->Get("h_mt");
  TH1F *h_d_phi_w_h = (TH1F*)inputfile->Get("h_d_phi_w_h");
  TH1F *h_h_pt = (TH1F*)inputfile->Get("h_h_pt");
  TH1F *h_h_phi = (TH1F*)inputfile->Get("h_h_phi");
  TH1F *h_h_eta = (TH1F*)inputfile->Get("h_h_eta");
  TH1F *h_inv_m = (TH1F*)inputfile->Get("h_inv_m");
  TH1F *h_w_pt = (TH1F*)inputfile->Get("h_w_pt");
  TH1F *h_w_phi = (TH1F*)inputfile->Get("h_w_phi");
  TH1F *h_w_eta = (TH1F*)inputfile->Get("h_w_eta");
  TH1F *h_w_m = (TH1F*)inputfile->Get("h_w_m");
  TH1F *h_dR_jet_muon = (TH1F*)inputfile->Get("h_dR_jet_muon");
  TH1F *h_dR_jet_electron = (TH1F*)inputfile->Get("h_dR_jet_electron");
 /*
  TH1F *h_dR_jet1_muon_after = (TH1F*)inputfile->Get("h_dR_jet1_muon_after");
  TH1F *h_dR_jet2_muon_after = (TH1F*)inputfile->Get("h_dR_jet2_muon_after");
  TH1F *h_dR_jet3_muon_after = (TH1F*)inputfile->Get("h_dR_jet3_muon_after");
  TH1F *h_dR_jet4_muon_after = (TH1F*)inputfile->Get("h_dR_jet4_muon_after");
  TH1F *h_dR_jet1_electron_after = (TH1F*)inputfile->Get("h_dR_jet1_muon_after");
  TH1F *h_dR_jet2_electron_after = (TH1F*)inputfile->Get("h_dR_jet2_muon_after");
  TH1F *h_dR_jet3_electron_after = (TH1F*)inputfile->Get("h_dR_jet3_muon_after");
  TH1F *h_dR_jet4_electron_after = (TH1F*)inputfile->Get("h_dR_jet4_muon_after");
*/
  TH1F *h_dR_jet_muon_after =(TH1F*)inputfile->Get("h_dR_jet_muon_after");
  TH1F *h_dR_jet_electron_after =(TH1F*)inputfile->Get("h_dR_jet_electron_after");
  TH1F *h_jet_mult = (TH1F*)inputfile->Get("h_jet_mult");


  


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




  



  //jets
  TCanvas *c_jets = new TCanvas("jets","jets",1100,1000);
  c_jets->Divide(2,2);
  //pt
  c_jets->cd(1);
  h_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  h_jet1_pt->GetYaxis()->SetTitle("Entries");
  h_jet1_pt->Draw("Ehist");
  h_b_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  h_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  h_b_jet1_pt->SetLineColor(kRed);
  h_b_jet1_pt->Draw("Ehist,same");
  c_jets->cd(2);
  h_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  h_jet2_pt->GetYaxis()->SetTitle("Entries");
  h_jet2_pt->Draw("Ehist");
  h_b_jet2_pt->GetXaxis()->SetTitle("BJet 2 Transverse Momentum (GeV/c)");
  h_b_jet2_pt->GetYaxis()->SetTitle("Entries");
  h_b_jet2_pt->SetLineColor(kRed);
  h_b_jet2_pt->Draw("Ehist,same");
  c_jets->cd(3);
  h_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  h_jet3_pt->GetYaxis()->SetTitle("Entries");
  h_jet3_pt->Draw("Ehist");
  h_b_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  h_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  h_b_jet3_pt->SetLineColor(kRed);
  h_b_jet3_pt->Draw("Ehist,same");
  c_jets->cd(4);
  h_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  h_jet4_pt->GetYaxis()->SetTitle("Entries");
  h_jet4_pt->Draw("Ehist");
  h_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  h_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  h_b_jet4_pt->SetLineColor(kRed);
  h_b_jet4_pt->Draw("Ehist,same");
  //eta
  TCanvas *c_jets_eta= new TCanvas("jets_eta","jets_eta",1100,1000);
  c_jets_eta->Divide(2,2);
  c_jets_eta->cd(1);
  h_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  h_jet1_eta->GetYaxis()->SetTitle("Entries");
  h_jet1_eta->Draw("Ehist");
  h_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  h_b_jet1_eta->GetYaxis()->SetTitle("Entries");
  h_b_jet1_eta->SetLineColor(kRed);
  h_b_jet1_eta->Draw("Ehist,same");
  c_jets_eta->cd(2);
  h_jet2_eta->Draw("Ehist");
  h_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  h_jet2_eta->GetYaxis()->SetTitle("Entries");
  h_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  h_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  h_b_jet2_eta->SetLineColor(kRed);
  h_b_jet2_eta->Draw("Ehist,same");
  c_jets_eta->cd(3);
  h_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  h_jet3_eta->GetYaxis()->SetTitle("Entries");
  h_jet3_eta->Draw("Ehist");
  h_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  h_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  h_b_jet3_eta->SetLineColor(kRed);
  h_b_jet3_eta->Draw("Ehist,same");
  c_jets_eta->cd(4);
  h_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  h_jet4_eta->GetYaxis()->SetTitle("Entries");
  h_jet4_eta->Draw("Ehist");
  h_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  h_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  h_b_jet4_eta->SetLineColor(kRed);
  h_b_jet4_eta->Draw("Ehist,same");
  //phi
  TCanvas *c_jets_phi= new TCanvas("jets_phi","jets_phi",1100,1000);
  c_jets_phi->Divide(2,2);
  c_jets_phi->cd(1);
  h_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  h_jet1_phi->GetYaxis()->SetTitle("Entries");
  h_jet1_phi->Draw("Ehist");
  h_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  h_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  h_b_jet1_phi->SetLineColor(kRed);
  h_b_jet1_phi->Draw("Ehist,same");
  c_jets_phi->cd(2);
  h_jet2_phi->Draw("Ehist");
  h_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  h_jet2_phi->GetYaxis()->SetTitle("Entries");
  h_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  h_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  h_b_jet2_phi->SetLineColor(kRed);
  h_b_jet2_phi->Draw("Ehist,same");
  c_jets_phi->cd(3);
  h_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  h_jet3_phi->GetYaxis()->SetTitle("Entries");
  h_jet3_phi->Draw("Ehist");
  h_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  h_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  h_b_jet3_phi->SetLineColor(kRed);
  h_b_jet3_phi->Draw("Ehist,same");
  c_jets_phi->cd(4);
  h_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  h_jet4_phi->GetYaxis()->SetTitle("Entries");
  h_jet4_phi->Draw("Ehist");
  h_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  h_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  h_b_jet4_phi->SetLineColor(kRed);
  h_b_jet4_phi->Draw("Ehist,same");
  //mass
  TCanvas *c_jets_m= new TCanvas("jets_eta","jets_eta",1100,1000);
  c_jets_m->Divide(2,2);
  c_jets_m->cd(1);
  h_jet1_m->GetXaxis()->SetTitle("Jet 1 Mass");
  h_jet1_m->GetYaxis()->SetTitle("Entries");
  h_jet1_m->Draw("Ehist");
  h_b_jet1_m->GetXaxis()->SetTitle("bJet 1 Mass");
  h_b_jet1_m->GetYaxis()->SetTitle("Entries");
  h_b_jet1_m->SetLineColor(kRed);
  h_b_jet1_m->Draw("Ehist,same");
  c_jets_m->cd(2);
  h_jet2_m->Draw("Ehist");
  h_jet2_m->GetXaxis()->SetTitle("Jet 2 Mass");
  h_jet2_m->GetYaxis()->SetTitle("Entries");
  h_b_jet2_m->GetXaxis()->SetTitle("bJet 2 Mass");
  h_b_jet2_m->GetYaxis()->SetTitle("Entries");
  h_b_jet2_m->SetLineColor(kRed);
  h_b_jet2_m->Draw("Ehist,same");
  c_jets_m->cd(3);
  h_jet3_m->GetXaxis()->SetTitle("Jet 3 Mass");
  h_jet3_m->GetYaxis()->SetTitle("Entries");
  h_jet3_m->Draw("Ehist");
  h_b_jet3_m->GetXaxis()->SetTitle("bJet 3 Mass");
  h_b_jet3_m->GetYaxis()->SetTitle("Entries");
  h_b_jet3_m->SetLineColor(kRed);
  h_b_jet3_m->Draw("Ehist,same");
  c_jets_m->cd(4);
  h_jet4_m->GetXaxis()->SetTitle("Jet 4 Mass");
  h_jet4_m->GetYaxis()->SetTitle("Entries");
  h_jet4_m->Draw("Ehist");
  h_b_jet4_m->GetXaxis()->SetTitle("bJet 4 Mass");
  h_b_jet4_m->GetYaxis()->SetTitle("Entries");
  h_b_jet4_m->SetLineColor(kRed);
  h_b_jet4_m->Draw("Ehist,same");
  


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


  //jet_mult
  TCanvas *c_jet_mult = new TCanvas ("jet_mult","jet_mult",1100,1000);
  h_jet_mult->GetXaxis()->SetTitle("jet multiplicity");
  h_jet_mult->GetYaxis()->SetTitle("Entries");
  h_jet_mult->Draw("Ehist");


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
  //muon-jet
  c_dR->cd(1);
  h_dR_jet_muon_after->GetXaxis()->SetTitle("delta R between jets and muons after cross cleaning");
  h_dR_jet_muon_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet_muon_after->SetLineColor(kRed);
  h_dR_jet_muon_after->Draw("Ehist,same");
  //electron-jet
  c_dR->cd(2);
  h_dR_jet_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons after cross cleaning");
  h_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  h_dR_jet_electron_after->SetLineColor(kRed);
  h_dR_jet_electron_after->Draw("Ehist,same");
}
