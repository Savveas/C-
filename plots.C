#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void plots(){
  TFile *inputfile=TFile::Open("histos_signal.root");
  TFile *inputfile_back=TFile::Open("histos_back.root");
  
  
  TH1F *hsig_mn_pt = (TH1F*)inputfile->Get("h_mn_pt");
  TH1F *hsig_mn_eta = (TH1F*)inputfile->Get("h_mn_eta");
  TH1F *hsig_mn_phi = (TH1F*)inputfile->Get("h_mn_phi");

  TH1F *hbkg_mn_pt = (TH1F*)inputfile_back->Get("h_mn_pt");
  TH1F *hbkg_mn_eta = (TH1F*)inputfile_back->Get("h_mn_eta");
  TH1F *hbkg_mn_phi = (TH1F*)inputfile_back->Get("h_mn_phi");
  

  TH1F *hsig_en_pt = (TH1F*)inputfile->Get("h_en_pt");
  TH1F *hsig_en_eta = (TH1F*)inputfile->Get("h_en_eta");
  TH1F *hsig_en_phi = (TH1F*)inputfile->Get("h_en_phi");

  TH1F *hbkg_en_pt = (TH1F*)inputfile_back->Get("h_en_pt");
  TH1F *hbkg_en_eta = (TH1F*)inputfile_back->Get("h_en_eta");
  TH1F *hbkg_en_phi = (TH1F*)inputfile_back->Get("h_en_phi");
  

  TH1F *hsig_jet1_pt = (TH1F*)inputfile->Get("h_jet1_pt");
  TH1F *hsig_jet1_eta = (TH1F*)inputfile->Get("h_jet1_eta");
  TH1F *hsig_jet1_phi = (TH1F*)inputfile->Get("h_jet1_phi");
  TH1F *hsig_jet1_m = (TH1F*)inputfile->Get("h_jet1_m");
  TH1F *hsig_jet2_pt = (TH1F*)inputfile->Get("h_jet2_pt");
  TH1F *hsig_jet2_eta = (TH1F*)inputfile->Get("h_jet2_eta");
  TH1F *hsig_jet2_phi = (TH1F*)inputfile->Get("h_jet2_phi");
  TH1F *hsig_jet2_m = (TH1F*)inputfile->Get("h_jet2_m");
  TH1F *hsig_jet3_pt = (TH1F*)inputfile->Get("h_jet3_pt");
  TH1F *hsig_jet3_eta = (TH1F*)inputfile->Get("h_jet3_eta");
  TH1F *hsig_jet3_phi = (TH1F*)inputfile->Get("h_jet3_phi");
  TH1F *hsig_jet3_m = (TH1F*)inputfile->Get("h_jet3_m");
  TH1F *hsig_jet4_pt = (TH1F*)inputfile->Get("h_jet4_pt");
  TH1F *hsig_jet4_eta = (TH1F*)inputfile->Get("h_jet4_eta");
  TH1F *hsig_jet4_phi = (TH1F*)inputfile->Get("h_jet4_phi");
  TH1F *hsig_jet4_m = (TH1F*)inputfile->Get("h_jet4_m");

  TH1F *hbkg_jet1_pt = (TH1F*)inputfile_back->Get("h_jet1_pt");
  TH1F *hbkg_jet1_eta = (TH1F*)inputfile_back->Get("h_jet1_eta");
  TH1F *hbkg_jet1_phi = (TH1F*)inputfile_back->Get("h_jet1_phi");
  TH1F *hbkg_jet1_m = (TH1F*)inputfile_back->Get("h_jet1_m");
  TH1F *hbkg_jet2_pt = (TH1F*)inputfile_back->Get("h_jet2_pt");
  TH1F *hbkg_jet2_eta = (TH1F*)inputfile_back->Get("h_jet2_eta");
  TH1F *hbkg_jet2_phi = (TH1F*)inputfile_back->Get("h_jet2_phi");
  TH1F *hbkg_jet2_m = (TH1F*)inputfile_back->Get("h_jet2_m");
  TH1F *hbkg_jet3_pt = (TH1F*)inputfile_back->Get("h_jet3_pt");
  TH1F *hbkg_jet3_eta = (TH1F*)inputfile_back->Get("h_jet3_eta");
  TH1F *hbkg_jet3_phi = (TH1F*)inputfile_back->Get("h_jet3_phi");
  TH1F *hbkg_jet3_m = (TH1F*)inputfile_back->Get("h_jet3_m");
  TH1F *hbkg_jet4_pt = (TH1F*)inputfile_back->Get("h_jet4_pt");
  TH1F *hbkg_jet4_eta = (TH1F*)inputfile_back->Get("h_jet4_eta");
  TH1F *hbkg_jet4_phi = (TH1F*)inputfile_back->Get("h_jet4_phi");
  TH1F *hbkg_jet4_m = (TH1F*)inputfile_back->Get("h_jet4_m");



  TH1F *hsig_lep_pt = (TH1F*)inputfile->Get("h_lep_pt");
  TH1F *hsig_lep_eta = (TH1F*)inputfile->Get("h_lep_eta");
  TH1F *hsig_lep_phi = (TH1F*)inputfile->Get("h_lep_phi");
  TH1F *hsig_lep_m = (TH1F*)inputfile->Get("h_lep_m");

  TH1F *hbkg_lep_pt = (TH1F*)inputfile_back->Get("h_lep_pt");
  TH1F *hbkg_lep_eta = (TH1F*)inputfile_back->Get("h_lep_eta");
  TH1F *hbkg_lep_phi = (TH1F*)inputfile_back->Get("h_lep_phi");
  TH1F *hbkg_lep_m = (TH1F*)inputfile_back->Get("h_lep_m");


  TH1F *hsig_b_jet1_pt = (TH1F*)inputfile->Get("h_b_jet1_pt");
  TH1F *hsig_b_jet1_eta = (TH1F*)inputfile->Get("h_b_jet1_eta");
  TH1F *hsig_b_jet1_phi = (TH1F*)inputfile->Get("h_b_jet1_phi");
  TH1F *hsig_b_jet1_m = (TH1F*)inputfile->Get("h_b_jet1_m");
  TH1F *hsig_b_jet2_pt = (TH1F*)inputfile->Get("h_b_jet2_pt");
  TH1F *hsig_b_jet2_eta = (TH1F*)inputfile->Get("h_b_jet2_eta");
  TH1F *hsig_b_jet2_phi = (TH1F*)inputfile->Get("h_b_jet2_phi");
  TH1F *hsig_b_jet2_m = (TH1F*)inputfile->Get("h_b_jet2_m");
  TH1F *hsig_b_jet3_pt = (TH1F*)inputfile->Get("h_b_jet3_pt");
  TH1F *hsig_b_jet3_eta = (TH1F*)inputfile->Get("h_b_jet3_eta");
  TH1F *hsig_b_jet3_phi = (TH1F*)inputfile->Get("h_b_jet3_phi");
  TH1F *hsig_b_jet3_m = (TH1F*)inputfile->Get("h_b_jet3_m");
  TH1F *hsig_b_jet4_pt = (TH1F*)inputfile->Get("h_b_jet4_pt");
  TH1F *hsig_b_jet4_eta = (TH1F*)inputfile->Get("h_b_jet4_eta");
  TH1F *hsig_b_jet4_phi = (TH1F*)inputfile->Get("h_b_jet4_phi");
  TH1F *hsig_b_jet4_m = (TH1F*)inputfile->Get("h_b_jet4_m");

  TH1F *hbkg_b_jet1_pt = (TH1F*)inputfile_back->Get("h_b_jet1_pt");
  TH1F *hbkg_b_jet1_eta = (TH1F*)inputfile_back->Get("h_b_jet1_eta");
  TH1F *hbkg_b_jet1_phi = (TH1F*)inputfile_back->Get("h_b_jet1_phi");
  TH1F *hbkg_b_jet1_m = (TH1F*)inputfile_back->Get("h_b_jet1_m");
  TH1F *hbkg_b_jet2_pt = (TH1F*)inputfile_back->Get("h_b_jet2_pt");
  TH1F *hbkg_b_jet2_eta = (TH1F*)inputfile_back->Get("h_b_jet2_eta");
  TH1F *hbkg_b_jet2_phi = (TH1F*)inputfile_back->Get("h_b_jet2_phi");
  TH1F *hbkg_b_jet2_m = (TH1F*)inputfile_back->Get("h_b_jet2_m");
  TH1F *hbkg_b_jet3_pt = (TH1F*)inputfile_back->Get("h_b_jet3_pt");
  TH1F *hbkg_b_jet3_eta = (TH1F*)inputfile_back->Get("h_b_jet3_eta");
  TH1F *hbkg_b_jet3_phi = (TH1F*)inputfile_back->Get("h_b_jet3_phi");
  TH1F *hbkg_b_jet3_m = (TH1F*)inputfile_back->Get("h_b_jet3_m");
  TH1F *hbkg_b_jet4_pt = (TH1F*)inputfile_back->Get("h_b_jet4_pt");
  TH1F *hbkg_b_jet4_eta = (TH1F*)inputfile_back->Get("h_b_jet4_eta");
  TH1F *hbkg_b_jet4_phi = (TH1F*)inputfile_back->Get("h_b_jet4_phi");
  TH1F *hbkg_b_jet4_m = (TH1F*)inputfile_back->Get("h_b_jet4_m");
  

  TH1F *hsig_met_pt = (TH1F*)inputfile->Get("h_met_pt");
  TH1F *hsig_mt = (TH1F*)inputfile->Get("h_mt");
  TH1F *hsig_d_phi_w_h = (TH1F*)inputfile->Get("h_d_phi_w_h");
  TH1F *hsig_d_phi_w_b_h = (TH1F*)inputfile->Get("h_d_phi_w_b_h");

  TH1F *hbkg_met_pt = (TH1F*)inputfile_back->Get("h_met_pt");
  TH1F *hbkg_mt = (TH1F*)inputfile_back->Get("h_mt");
  TH1F *hbkg_d_phi_w_h = (TH1F*)inputfile_back->Get("h_d_phi_w_h");
  TH1F *hbkg_d_phi_w_b_h = (TH1F*)inputfile_back->Get("h_d_phi_w_b_h");


  TH1F *hsig_h_pt = (TH1F*)inputfile->Get("h_h_pt");
  TH1F *hsig_h_phi = (TH1F*)inputfile->Get("h_h_phi");
  TH1F *hsig_h_eta = (TH1F*)inputfile->Get("h_h_eta");
  TH1F *hsig_inv_m = (TH1F*)inputfile->Get("h_inv_m");
  TH1F *hsig_b_inv_m = (TH1F*)inputfile->Get("h_b_inv_m");
  TH1F *hsig_w_pt = (TH1F*)inputfile->Get("h_w_pt");
  TH1F *hsig_w_phi = (TH1F*)inputfile->Get("h_w_phi");
  TH1F *hsig_w_eta = (TH1F*)inputfile->Get("h_w_eta");
  TH1F *hsig_w_m = (TH1F*)inputfile->Get("h_w_m");
  TH1F *hsig_dR_jet_muon = (TH1F*)inputfile->Get("h_dR_jet_muon");
  TH1F *hsig_dR_jet_electron = (TH1F*)inputfile->Get("h_dR_jet_electron");

  TH1F *hbkg_h_pt = (TH1F*)inputfile_back->Get("h_h_pt");
  TH1F *hbkg_h_phi = (TH1F*)inputfile_back->Get("h_h_phi");
  TH1F *hbkg_h_eta = (TH1F*)inputfile_back->Get("h_h_eta");
  TH1F *hbkg_inv_m = (TH1F*)inputfile_back->Get("h_inv_m");
  TH1F *hbkg_b_inv_m = (TH1F*)inputfile_back->Get("h_b_inv_m");
  TH1F *hbkg_w_pt = (TH1F*)inputfile_back->Get("h_w_pt");
  TH1F *hbkg_w_phi = (TH1F*)inputfile_back->Get("h_w_phi");
  TH1F *hbkg_w_eta = (TH1F*)inputfile_back->Get("h_w_eta");
  TH1F *hbkg_w_m = (TH1F*)inputfile_back->Get("h_w_m");
  TH1F *hbkg_dR_jet_muon = (TH1F*)inputfile_back->Get("h_dR_jet_muon");
  TH1F *hbkg_dR_jet_electron = (TH1F*)inputfile_back->Get("h_dR_jet_electron");


  TH1F *hsig_dR_jet_muon_after =(TH1F*)inputfile->Get("h_dR_jet_muon_after");
  TH1F *hsig_dR_jet_electron_after =(TH1F*)inputfile->Get("h_dR_jet_electron_after");
  TH1F *hsig_jet_mult = (TH1F*)inputfile->Get("h_jet_mult");
  TH1F *hsig_b_jet_mult = (TH1F*)inputfile->Get("h_b_jet_mult");

  TH1F *hbkg_dR_jet_muon_after =(TH1F*)inputfile_back->Get("h_dR_jet_muon_after");
  TH1F *hbkg_dR_jet_electron_after =(TH1F*)inputfile_back->Get("h_dR_jet_electron_after");
  TH1F *hbkg_jet_mult = (TH1F*)inputfile_back->Get("h_jet_mult");
  TH1F *hbkg_b_jet_mult = (TH1F*)inputfile_back->Get("h_b_jet_mult");


  //muons
  TCanvas *c_muons = new TCanvas ("muons","muons",1000,1000);
  c_muons->Divide(3,1);
  //pt
  c_muons->cd(1);
  hsig_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hsig_mn_pt->GetYaxis()->SetTitle("Entries");
  hsig_mn_pt->Draw("Ehist");
  hsig_mn_pt->Scale(1./hsig_mn_pt->Integral());
  c_muons->cd(1);
  hbkg_mn_pt->SetLineColor(kRed);
  hbkg_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt->Draw("Ehist,sames");
  hbkg_mn_pt->Scale(1./hbkg_mn_pt->Integral());
  //eta
  c_muons->cd(2);
  hbkg_mn_eta->SetLineColor(kRed);
  hbkg_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta->Scale(1./hbkg_mn_eta->Integral());
  hbkg_mn_eta->Draw("Ehist");
  hsig_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hsig_mn_eta->GetYaxis()->SetTitle("Entries");
  hsig_mn_eta->Scale(1./hsig_mn_eta->Integral());
  hsig_mn_eta->Draw("Ehist,sames");
  
 
  
  //phi
  c_muons->cd(3);
  hsig_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hsig_mn_phi->GetYaxis()->SetTitle("Entries");
  hsig_mn_phi->Scale(1./hsig_mn_phi->Integral());
  hsig_mn_phi->Draw("Ehist"); 
  hbkg_mn_phi->SetLineColor(kRed);
  hbkg_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi->Scale(1./hbkg_mn_phi->Integral());
  hbkg_mn_phi->Draw("Ehist,sames"); 
 



  //electrons
  TCanvas *c_electrons = new TCanvas ("electrons","electrons",1000,1000);
  c_electrons->Divide(1,3); 
  //pt
  c_electrons->cd(1);
  hsig_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hsig_en_pt->GetYaxis()->SetTitle("Entries");
  hsig_en_pt->Scale(1./hsig_en_pt->Integral());
  hsig_en_pt->Draw("Ehist");
  hbkg_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt->Scale(1./hbkg_en_pt->Integral());
  hbkg_en_pt->Draw("Ehist,sames");
  hbkg_en_pt->SetLineColor(kRed);
  //eta
  c_electrons->cd(2);
  hbkg_en_eta->SetLineColor(kRed);
  hbkg_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta->Scale(1./hbkg_en_eta->Integral());
  hbkg_en_eta->Draw("Ehist");
  hsig_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hsig_en_eta->GetYaxis()->SetTitle("Entries");
  hsig_en_eta->Scale(1./hsig_en_eta->Integral());
  hsig_en_eta->Draw("Ehist,sames");
  
  //phi
  c_electrons->cd(3);
  hsig_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hsig_en_phi->GetYaxis()->SetTitle("Entries");
  hsig_en_phi->Scale(1./hsig_en_phi->Integral());
  hsig_en_phi->Draw("Ehist");
  hbkg_en_phi->SetLineColor(kRed);
  hbkg_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi->Scale(1./hbkg_en_phi->Integral());
  hbkg_en_phi->Draw("Ehist,sames");  



  //leptons
  TCanvas *c_leptons = new TCanvas ("leptons","leptons",1000,1000);
  c_leptons->Divide(3,1); 
  //pt
  c_leptons->cd(1);
  hbkg_lep_pt->SetLineColor(kRed);
  hbkg_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt->Scale(1./hbkg_lep_pt->Integral());
  hbkg_lep_pt->Draw("Ehist");
  hsig_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hsig_lep_pt->GetYaxis()->SetTitle("Entries");
  hsig_lep_pt->Scale(1./hsig_lep_pt->Integral());
  hsig_lep_pt->Draw("Ehist,sames");
  
  //eta
  c_leptons->cd(2);
  hbkg_lep_eta->SetLineColor(kRed);
  hbkg_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta->GetYaxis()->SetTitle("Entries");
  hsig_lep_eta->Scale(1./hsig_lep_eta->Integral());
  hbkg_lep_eta->Draw("Ehist");
  hsig_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hsig_lep_eta->GetYaxis()->SetTitle("Entries");
  hsig_lep_eta->Scale(1./hsig_lep_eta->Integral());
  hsig_lep_eta->Draw("Ehist,sames");
  
  //phi
  c_leptons->cd(3);
  hbkg_lep_phi->SetLineColor(kRed);
  hbkg_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi->Scale(1./hbkg_lep_phi->Integral());
  hbkg_lep_phi->Draw("Ehist");
  hsig_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hsig_lep_phi->GetYaxis()->SetTitle("Entries");
  hsig_lep_phi->Scale(1./hsig_lep_phi->Integral());
  hsig_lep_phi->Draw("Ehist,sames");
    

  


  //jets
  //pt
  TCanvas *c_jets_pt = new TCanvas("jets","jets",1000,1000);
  hsig_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hsig_jet1_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet1_pt->Scale(1./hsig_jet1_pt->Integral());
  hsig_jet1_pt->Draw("Ehist");
  hbkg_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_jet1_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_pt->Scale(1./hbkg_jet1_pt->Integral());
  hbkg_jet1_pt->Draw("Ehist,sames");
  hbkg_jet1_pt->SetLineColor(kRed);
  TCanvas *c_b_jets_pt = new TCanvas("b-jets1_pt","b-jets1_pt",1000,1000);
  hsig_b_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hsig_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_pt->Scale(1./hsig_b_jet1_pt->Integral());
  hsig_b_jet1_pt->Draw("Ehist");
  hbkg_b_jet1_pt->SetLineColor(kRed);
  hbkg_b_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt->Scale(1./hbkg_b_jet1_pt->Integral());
  hbkg_b_jet1_pt->Draw("Ehist,sames");
  TCanvas *c_jets2_pt = new TCanvas("jets2_pt","jets2_pt",1000,1000);
  hsig_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hsig_jet2_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet2_pt->Scale(1./hsig_jet2_pt->Integral());
  hsig_jet2_pt->Draw("Ehist");
  hbkg_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt->Scale(1./hbkg_jet2_pt->Integral());
  hbkg_jet2_pt->Draw("Ehist,sames");
  hbkg_jet2_pt->SetLineColor(kRed);
  TCanvas *c_b_jets2_pt = new TCanvas("b-jets2_pt","b-jets2_pt",1000,1000);
  hsig_b_jet2_pt->GetXaxis()->SetTitle("BJet 2 Transverse Momentum (GeV/c)");
  hsig_b_jet2_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_pt->Scale(1./hsig_b_jet2_pt->Integral());
  hsig_b_jet2_pt->Draw("Ehist");
  hbkg_b_jet2_pt->GetXaxis()->SetTitle("BJet 2 Transverse Momentum (GeV/c)");
  hbkg_b_jet2_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_pt->Scale(1./hbkg_b_jet2_pt->Integral());
  hbkg_b_jet2_pt->Draw("Ehist,sames");
  hbkg_b_jet2_pt->SetLineColor(kRed);
  TCanvas *c_jets3_pt = new TCanvas("jets3_pt","jets3_pt",1000,1000);
  hsig_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hsig_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet3_pt->Scale(1./hsig_jet3_pt->Integral());
  hsig_jet3_pt->Draw("Ehist");
  hbkg_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt->Scale(1./hbkg_jet3_pt->Integral());
  hbkg_jet3_pt->Draw("Ehist,sames");
  hbkg_jet3_pt->SetLineColor(kRed);
  TCanvas *c_b_jets3_pt = new TCanvas("b-jets_pt","b-jets_pt",1000,1000);
  hsig_b_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hsig_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_pt->Scale(1./hsig_b_jet3_pt->Integral());
  hsig_b_jet3_pt->Draw("Ehist");
  hbkg_b_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt->Scale(1./hbkg_b_jet3_pt->Integral());
  hbkg_b_jet3_pt->Draw("Ehist,sames");
  hbkg_b_jet3_pt->SetLineColor(kRed);
  TCanvas *c_jets4_pt = new TCanvas("jets4_pt","jets4_pt",1000,1000);
  hsig_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet4_pt->Scale(1./hsig_jet4_pt->Integral());
  hsig_jet4_pt->Draw("Ehist");
  hbkg_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt->Scale(1./hbkg_jet4_pt->Integral());
  hbkg_jet4_pt->Draw("Ehist,sames");
  hbkg_jet4_pt->SetLineColor(kRed);
  TCanvas *c_b_jets4_pt = new TCanvas("b-jets4_pt","b-jets_pt",1000,1000);
  hsig_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_pt->Scale(1./hsig_b_jet4_pt->Integral());
  hsig_b_jet4_pt->Draw("Ehist");
  hbkg_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt->Scale(1./hbkg_b_jet4_pt->Integral());
  hbkg_b_jet4_pt->Draw("Ehist,sames");
  hbkg_b_jet4_pt->SetLineColor(kRed);



  //eta
  TCanvas *c_jets_eta= new TCanvas("jet pseudorapidity","jet pseudorapidity",1000,1000);
  hsig_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hsig_jet1_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet1_eta->Scale(1./hsig_jet1_eta->Integral());
  hsig_jet1_eta->Draw("Ehist");
  hbkg_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hbkg_jet1_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_eta->Scale(1./hbkg_jet1_eta->Integral());
  hbkg_jet1_eta->Draw("Ehist,sames");
  hbkg_jet1_eta->SetLineColor(kRed);
  TCanvas *c_b_jets_eta= new TCanvas("b-jet pseudorapidity","b-jet pseudorapidity",1000,1000);
  hsig_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hsig_b_jet1_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_eta->Scale(1./hsig_b_jet1_eta->Integral());
  hsig_b_jet1_eta->Draw("Ehist");
  hbkg_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta->GetYaxis()->SetTitle("Entries,sames");
  hbkg_b_jet1_eta->SetLineColor(kRed);
  hbkg_b_jet1_eta->Scale(1./hbkg_b_jet1_eta->Integral());
  hbkg_b_jet1_eta->Draw("Ehist,sames");
  TCanvas *c_jets2_eta= new TCanvas("jet2 pseudorapidity","jet2 pseudorapidity",1000,1000);
  hsig_jet2_eta->Draw("Ehist");
  hsig_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hsig_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet2_eta->Scale(1./hsig_jet2_eta->Integral());
  hbkg_jet2_eta->Draw("Ehist,sames");
  hbkg_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta->Scale(1./hbkg_jet2_eta->Integral());
  hbkg_jet2_eta->SetLineColor(kRed);
  TCanvas *c_b_jets2_eta= new TCanvas("b-jet2 pseudorapidity","b-jet2 pseudorapidity",1000,1000);
  hsig_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hsig_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_eta->Scale(1./hsig_b_jet2_eta->Integral());
  hsig_b_jet2_eta->Draw("Ehist");
  hbkg_b_jet2_eta->SetLineColor(kRed);
  hbkg_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta->Scale(1./hbkg_b_jet2_eta->Integral());
  hbkg_b_jet2_eta->Draw("Ehist,sames");
  TCanvas *c_jets3_eta= new TCanvas("jet3 pseudorapidity","jet3 pseudorapidity",1000,1000);
  hsig_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hsig_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet3_eta->Scale(1./hsig_jet3_eta->Integral());
  hsig_jet3_eta->Draw("Ehist");
  hbkg_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta->Scale(1./hbkg_jet3_eta->Integral());
  hbkg_jet3_eta->Draw("Ehist,sames");
  hbkg_jet3_eta->SetLineColor(kRed);
  TCanvas *c_b_jets3_eta= new TCanvas("b-jet3 pseudorapidity","b-jet3 pseudorapidity",1000,1000);
  hsig_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hsig_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_eta->Scale(1./hsig_b_jet3_eta->Integral());
  hsig_b_jet3_eta->Draw("Ehist");
  hbkg_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hbkg_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_eta->SetLineColor(kRed);
  hbkg_b_jet3_eta->Scale(1./hbkg_b_jet3_eta->Integral());
  hbkg_b_jet3_eta->Draw("Ehist,sames");
  TCanvas *c_jets4_eta= new TCanvas("jet4 pseudorapidity","jet4 pseudorapidity",1000,1000);
  hsig_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hsig_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet4_eta->Draw("Ehist");
  hbkg_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta->Draw("Ehist,sames");
  hbkg_jet4_eta->SetLineColor(kRed);
  TCanvas *c_b_jets4_eta= new TCanvas("b-jet4 pseudorapidity","b-jet4 pseudorapidity",1000,1000);
  hsig_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hsig_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_eta->Draw("Ehist");
  hbkg_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_eta->SetLineColor(kRed);
  hbkg_b_jet4_eta->Draw("Ehist,sames");



  //phi
  TCanvas *c_jets_phi= new TCanvas("jets_phi","jets_phi",1000,1000);
  hsig_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hsig_jet1_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet1_phi->Draw("Ehist");
  hbkg_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi->Draw("Ehist,sames");
  hbkg_jet1_phi->SetLineColor(kRed);
  TCanvas *c_b_jets_phi= new TCanvas("b-jets_phi","b-jets_phi",1000,1000);
  hsig_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hsig_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi->SetLineColor(kRed);
  hsig_b_jet1_phi->Draw("Ehist");
  hbkg_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi->Draw("Ehist,sames");
  TCanvas *c_jets2_phi= new TCanvas("jets2_phi","jets2_phi",1000,1000);  
  hsig_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hsig_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet2_phi->Draw("Ehist");
  hbkg_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_phi->SetLineColor(kRed);
  hbkg_jet2_phi->Draw("Ehist,sames");
  TCanvas *c_b_jets2_phi= new TCanvas("b-jets2_phi","b-jets2_phi",1000,1000);
  hsig_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hsig_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_phi->Draw("Ehist");
  hbkg_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi->SetLineColor(kRed);
  hbkg_b_jet2_phi->Draw("Ehist,sames");
  TCanvas *c_jets3_phi= new TCanvas("jets3_phi","jets3_phi",1000,1000);
  hsig_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hsig_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet3_phi->Draw("Ehist");
  hbkg_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi->Draw("Ehist,sames");
  hbkg_jet3_phi->SetLineColor(kRed);
  TCanvas *c_b_jets3_phi= new TCanvas("b-jets3_phi","b-jets3_phi",1000,1000);
  hsig_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hsig_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_phi->Draw("Ehist");
  hbkg_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_phi->SetLineColor(kRed);
  hbkg_b_jet3_phi->Draw("Ehist,sames");
  TCanvas *c_jets4_phi= new TCanvas("jets4_phi","jets4_phi",1000,1000);
  hsig_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hsig_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet4_phi->Draw("Ehist");
  hbkg_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi->Draw("Ehist,sames");
  hbkg_jet4_phi->SetLineColor(kRed);
  TCanvas *c_b_jets4_phi= new TCanvas("b-jets4_phi","b-jets4_phi",1000,1000);
  hsig_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hsig_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_phi->Draw("Ehist");
  hbkg_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_phi->SetLineColor(kRed);
  hbkg_b_jet4_phi->Draw("Ehist,sames");



  //mass
  TCanvas *c_jets_m= new TCanvas("jets_mass","jets_mass",1000,1000);
  hsig_jet1_m->GetXaxis()->SetTitle("Jet 1 Mass");
  hsig_jet1_m->GetYaxis()->SetTitle("Entries");
  hsig_jet1_m->Draw("Ehist");
  hbkg_jet1_m->GetXaxis()->SetTitle("Jet 1 Mass");
  hbkg_jet1_m->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_m->Draw("Ehist,sames");
  hbkg_jet1_m->SetLineColor(kRed);
  TCanvas *c_b_jets_m= new TCanvas("b-jets_mass","b-jets_mass",1000,1000);
  hsig_b_jet1_m->GetXaxis()->SetTitle("bJet 1 Mass");
  hsig_b_jet1_m->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_m->Draw("Ehist");
  hbkg_b_jet1_m->GetXaxis()->SetTitle("bJet 1 Mass");
  hbkg_b_jet1_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_m->SetLineColor(kRed);
  hbkg_b_jet1_m->Draw("Ehist,sames");
  TCanvas *c_jets2_m= new TCanvas("jets2_mass","jets2_mass",1000,1000);
  hsig_jet2_m->Draw("Ehist");
  hsig_jet2_m->GetXaxis()->SetTitle("Jet 2 Mass");
  hsig_jet2_m->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_m->Draw("Ehist,sames");
  hbkg_jet2_m->SetLineColor(kRed);
  hbkg_jet2_m->GetXaxis()->SetTitle("Jet 2 Mass");
  hbkg_jet2_m->GetYaxis()->SetTitle("Entries");
  TCanvas *c_b_jets2_m= new TCanvas("b-jets2_mass","b-jets2_mass",1000,1000);
  hsig_b_jet2_m->GetXaxis()->SetTitle("bJet 2 Mass");
  hsig_b_jet2_m->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_m->Draw("Ehist,same");
  hbkg_b_jet2_m->GetXaxis()->SetTitle("bJet 2 Mass");
  hbkg_b_jet2_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_m->SetLineColor(kRed);
  hbkg_b_jet2_m->Draw("Ehist,sames");
  TCanvas *c_jets3_m= new TCanvas("jets3_mass","jets3_mass",1000,1000);
  hsig_jet3_m->GetXaxis()->SetTitle("Jet 3 Mass");
  hsig_jet3_m->GetYaxis()->SetTitle("Entries");
  hsig_jet3_m->Draw("Ehist");
  hbkg_jet3_m->GetXaxis()->SetTitle("Jet 3 Mass");
  hbkg_jet3_m->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_m->Draw("Ehist,sames");
  hbkg_jet3_m->SetLineColor(kRed);
  TCanvas *c_b_jets3_m= new TCanvas("b-jets3_mass","b-jets3_mass",1000,1000);
  hsig_b_jet3_m->GetXaxis()->SetTitle("bJet 3 Mass");
  hsig_b_jet3_m->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_m->Draw("Ehist");
  hbkg_b_jet3_m->GetXaxis()->SetTitle("bJet 3 Mass");
  hbkg_b_jet3_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_m->SetLineColor(kRed);
  hbkg_b_jet3_m->Draw("Ehist,sames");
  TCanvas *c_jets4_m= new TCanvas("jets4_mass","jets4_mass",1000,1000);
  hsig_jet4_m->GetXaxis()->SetTitle("Jet 4 Mass");
  hsig_jet4_m->GetYaxis()->SetTitle("Entries");
  hsig_jet4_m->Draw("Ehist");
  hbkg_jet4_m->GetXaxis()->SetTitle("Jet 4 Mass");
  hbkg_jet4_m->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_m->Draw("Ehist,sames");
  hbkg_jet4_m->SetLineColor(kRed);
  TCanvas *c_b_jets4_m= new TCanvas("b-jets4_mass","b-jets4_mass",1000,1000);
  hsig_b_jet4_m->GetXaxis()->SetTitle("bJet 4 Mass");
  hsig_b_jet4_m->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_m->Draw("Ehist");
  hbkg_b_jet4_m->GetXaxis()->SetTitle("bJet 4 Mass");
  hbkg_b_jet4_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_m->SetLineColor(kRed);
  hbkg_b_jet4_m->Draw("Ehist,sames");
  


  //MET
  TCanvas *c_MET = new TCanvas("MET","MET",1000,1000);
  hsig_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hsig_met_pt->GetYaxis()->SetTitle("Entries");
  hsig_met_pt->Draw("Ehist");
  hbkg_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt->Draw("Ehist,sames");
  hbkg_met_pt->SetLineColor(kRed);
  //Mt
  TCanvas *c_Mt = new TCanvas("MT","MT",1000,1000);
  hsig_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hsig_mt->GetYaxis()->SetTitle("Entries");
  hsig_mt->Draw("Ehist");
  hbkg_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt->GetYaxis()->SetTitle("Entries");
  hbkg_mt->Draw("Ehist,sames");
  hbkg_mt->SetLineColor(kRed);



  //d_phi W and H bosons 
  TCanvas *c_w_h = new TCanvas("w_h","w_h",1000,1000);
  hsig_d_phi_w_h->SetStats(11111);
  hsig_d_phi_w_h->Draw("Ehist");
  hbkg_d_phi_w_h->SetLineColor(kRed);
  hbkg_d_phi_w_h->Draw("Ehist,sames");
  TCanvas *c_w_b_h = new TCanvas("w_b_h","w_b_h",1000,1000);
  hsig_d_phi_w_b_h->Draw("Ehist");
  hbkg_d_phi_w_b_h->SetLineColor(kRed);
  hbkg_d_phi_w_b_h->Draw("Ehist,sames");



  //Higgs
  TCanvas *c_h_pt = new TCanvas("higgs_pt","higgs_pt",1000,1000);
  //pt
  hsig_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hsig_h_pt->GetYaxis()->SetTitle("Entries");
  hsig_h_pt->Draw("Ehist");
  hbkg_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt->Draw("Ehist,sames");
  hbkg_h_pt->SetLineColor(kRed);
  //phi
  TCanvas *c_h_phi = new TCanvas("higgs_phi","higgs_phi",1000,1000);
  hsig_h_phi->GetXaxis()->SetTitle("Higgs phi");
  hsig_h_phi->GetYaxis()->SetTitle("Entries");
  hsig_h_phi->Draw("Ehist");
  hbkg_h_phi->GetXaxis()->SetTitle("Higgs phi");
  hbkg_h_phi->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi->Draw("Ehist,sames");
  hbkg_h_phi->SetLineColor(kRed);
  //eta
  TCanvas *c_h_eta = new TCanvas("higgs_eta","higgs_eta",1000,1000);
  hsig_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hsig_h_eta->GetYaxis()->SetTitle("Entries");
  hsig_h_eta->Draw("Ehist");
  hbkg_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta->Draw("Ehist,sames");
  hbkg_h_eta->SetLineColor(kRed);
  //mass
  TCanvas *c_h_inv_mass = new TCanvas("higgs","higgs",1000,1000);
  hsig_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hsig_inv_m->GetYaxis()->SetTitle("Entries");
  hsig_inv_m->Draw("Ehist");
  hbkg_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m->Draw("Ehist,sames");
  hbkg_inv_m->SetLineColor(kRed);
  TCanvas *c_b_h_inv_mass = new TCanvas("b-higgs","b-higgs",1000,1000);
  hsig_b_inv_m->GetXaxis()->SetTitle("Higgs mass (after b-tag)");
  hsig_b_inv_m->GetYaxis()->SetTitle("Entries");
  hsig_b_inv_m->Draw("Ehist");
  hbkg_b_inv_m->GetXaxis()->SetTitle("Higgs mass (after b-tag)");
  hbkg_b_inv_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_inv_m->Draw("Ehist,sames");
  hbkg_b_inv_m->SetLineColor(kRed);



  //W boson
  TCanvas *c_W = new TCanvas("W","W",1000,1000);
  //pt
  c_W->Divide(2,2);
  c_W->cd(1);
  hsig_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hsig_w_pt->GetYaxis()->SetTitle("Entries");
  hsig_w_pt->Draw("Ehist");
  hbkg_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt->Draw("Ehist,sames");
  hbkg_w_pt->SetLineColor(kRed);
  //eta
  c_W->cd(2);
  hsig_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hsig_w_eta->GetYaxis()->SetTitle("Entries");
  hsig_w_eta->Draw("Ehist");
  hbkg_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta->Draw("Ehist,sames");
  hbkg_w_eta->SetLineColor(kRed);
  //phi
  c_W->cd(3);
  hsig_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  hsig_w_phi->GetYaxis()->SetTitle("Entries");
  hsig_w_phi->Draw("Ehist");
  hbkg_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  hbkg_w_phi->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi->Draw("Ehist,sames");
  hbkg_w_phi->SetLineColor(kRed);
  //mass
  c_W->cd(4);
  hsig_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  hsig_w_m->GetYaxis()->SetTitle("Entries");
  hsig_w_m->Draw("Ehist");
  hbkg_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  hbkg_w_m->GetYaxis()->SetTitle("Entries");
  hbkg_w_m->Draw("Ehistsames");
  hbkg_w_m->SetLineColor(kRed);



  //jet_mult
  TCanvas *c_jet_mult = new TCanvas ("jet_mult","jet_mult",1500,1500);
  hsig_jet_mult->GetXaxis()->SetTitle("jet multiplicity");
  hsig_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_jet_mult->Draw("Ehist");
  hbkg_jet_mult->GetXaxis()->SetTitle("jet multiplicity");
  hbkg_jet_mult->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult->Draw("Ehist,sames");
  hbkg_jet_mult->SetLineColor(kRed);
  TCanvas *c_b_jet_mult = new TCanvas ("b-jet_mult","b-jet_mult",1500,1500);
  hbkg_b_jet_mult->GetXaxis()->SetTitle("bjet multiplicity");
  hbkg_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet_mult->SetLineColor(kRed);
  hbkg_b_jet_mult->Draw("Ehist");
  hsig_b_jet_mult->GetXaxis()->SetTitle("bjet multiplicity");
  hsig_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_b_jet_mult->Draw("Ehist,sames");



  //delta R before cross-cleaning
  TCanvas *c_dR_mn_jet = new TCanvas("dR_mn_jet","dR_mn_jet",1000,1000);
  //muon-jet
  hbkg_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hbkg_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon->Draw("Ehist");
  hbkg_dR_jet_muon->SetLineColor(kRed);
  hsig_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hsig_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon->Draw("Ehist,sames");
  
  //electron-jet
  TCanvas *c_dR_en_jet = new TCanvas("dR_en_jet","dR_en_jet",1000,1000);
  hbkg_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  hbkg_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron->Draw("Ehist");
  hbkg_dR_jet_electron->SetLineColor(kRed);
  hsig_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  hsig_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron->Draw("Ehist,sames");
  
  //delta R after cross-cleaning
  //muon-jet
  TCanvas *c_dR_mn_jet_after = new TCanvas("dR_mn_jet_after","dR_mn_jet_after",1000,1000);
  hbkg_dR_jet_muon_after->GetXaxis()->SetTitle("delta R between jets and muons after cross cleaning");
  hbkg_dR_jet_muon_after->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_after->SetLineColor(kRed);
  hbkg_dR_jet_muon_after->Draw("Ehist");
  hsig_dR_jet_muon_after->GetXaxis()->SetTitle("delta R between jets and muons after cross cleaning");
  hsig_dR_jet_muon_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon_after->Draw("Ehist,sames");
  
  //electron-jet
  TCanvas *c_dR_en_jet_after = new TCanvas("dR_en_jet_after","dR_en_jet_after",1000,1000);
  hbkg_dR_jet_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_after->SetLineColor(kRed);
  hbkg_dR_jet_electron_after->Draw("Ehist");
  hsig_dR_jet_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons after cross cleaning");
  hsig_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron_after->Draw("Ehist,sames");
}
