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
  TH1F *hsig_b_h_pt = (TH1F*)inputfile->Get("h_b_h_pt");
  TH1F *hsig_b_h_phi = (TH1F*)inputfile->Get("h_b_h_phi");
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
  TH1F *hbkg_b_h_pt = (TH1F*)inputfile_back->Get("h_b_h_pt");
  TH1F *hbkg_b_h_phi = (TH1F*)inputfile_back->Get("h_b_h_phi");
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



  TH1F *hsig_dR_av =(TH1F*)inputfile->Get("h_dR_av");
  TH1F *hbkg_dR_av =(TH1F*)inputfile_back->Get("h_dR_av");



  TH1F *hsig_minDelta_m=(TH1F*)inputfile->Get("h_minDelta_m");
  TH1F *hbkg_minDelta_m=(TH1F*)inputfile_back->Get("h_minDelta_m");



  TH1F *hsig_delta_phi=(TH1F*)inputfile->Get("h_delta_phi");
  TH1F *hbkg_delta_phi=(TH1F*)inputfile_back->Get("h_delta_phi");


  TH1F *hsig_Nbjets_after=(TH1F*)inputfile->Get("h_Nbjets_after");
  TH1F *hbkg_Nbjets_after=(TH1F*)inputfile_back->Get("h_Nbjets_after");


  TH1F *hsig_btag_0=(TH1F*)inputfile->Get("h_btag_0");
  TH1F *hbkg_btag_0=(TH1F*)inputfile_back->Get("h_btag_0");

  TH1F *hsig_btag_1=(TH1F*)inputfile->Get("h_btag_1");
  TH1F *hbkg_btag_1=(TH1F*)inputfile_back->Get("h_btag_1");

  TH1F *hsig_btag_2=(TH1F*)inputfile->Get("h_btag_2");
  TH1F *hbkg_btag_2=(TH1F*)inputfile_back->Get("h_btag_2");

  TH1F *hsig_btag_3=(TH1F*)inputfile->Get("h_btag_3");
  TH1F *hbkg_btag_3=(TH1F*)inputfile_back->Get("h_btag_3");


  //muons
  //pt
  TCanvas *c_muons_pt = new TCanvas ("muons_pt","muons_pt",1000,1000);
  hsig_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hsig_mn_pt->GetYaxis()->SetTitle("Entries");
  hsig_mn_pt->Draw("Ehist");
  hsig_mn_pt->Scale(1./hsig_mn_pt->Integral());
  hsig_mn_pt->SetLineColor(kRed);
  hbkg_mn_pt->SetLineColor(kBlack);
  hbkg_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt->Draw("Ehist,sames");
  hbkg_mn_pt->Scale(1./hbkg_mn_pt->Integral());
  TLegend *leg_mn_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_mn_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_mn_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_mn_pt->Draw();
  //eta
  TCanvas *c_muons_eta = new TCanvas ("muons_eta","muons_eta",1000,1000);
  hsig_mn_eta->SetLineColor(kRed);
  hbkg_mn_eta->SetLineColor(kBlack);
  hbkg_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta->Scale(1./hbkg_mn_eta->Integral());
  hbkg_mn_eta->Draw("Ehist");
  hsig_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hsig_mn_eta->GetYaxis()->SetTitle("Entries");
  hsig_mn_eta->Scale(1./hsig_mn_eta->Integral());
  hsig_mn_eta->Draw("Ehist,sames");
  TLegend *leg_mn_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_mn_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_mn_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_mn_eta->Draw();
  //phi
  TCanvas *c_muons_phi = new TCanvas ("muons_phi","muons_phi",1000,1000);
  hsig_mn_phi->SetLineColor(kRed);
  hbkg_mn_phi->SetLineColor(kBlack);
  hbkg_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi->Scale(1./hbkg_mn_phi->Integral());
  hbkg_mn_phi->Draw("Ehist"); 
  hsig_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hsig_mn_phi->GetYaxis()->SetTitle("Entries");
  hsig_mn_phi->Scale(1./hsig_mn_phi->Integral());
  hsig_mn_phi->Draw("Ehist,sames"); 
  TLegend *leg_mn_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_mn_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_mn_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_mn_phi->Draw();
  



  //electrons
  //pt
  TCanvas *c_electrons_pt = new TCanvas ("electrons_pt","electrons_pt",1000,1000);
  hsig_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hsig_en_pt->GetYaxis()->SetTitle("Entries");
  hsig_en_pt->Scale(1./hsig_en_pt->Integral());
  hsig_en_pt->Draw("Ehist");
  hbkg_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt->Scale(1./hbkg_en_pt->Integral());
  hbkg_en_pt->Draw("Ehist,sames");
  hsig_en_pt->SetLineColor(kRed);
  hbkg_en_pt->SetLineColor(kBlack);
  TLegend *leg_en_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_en_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_en_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_en_pt->Draw();
  //eta
  TCanvas *c_electrons_eta = new TCanvas ("electrons_eta","electrons_eta",1000,1000);
  hsig_en_eta->SetLineColor(kRed);
  hbkg_en_eta->SetLineColor(kBlack);
  hbkg_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta->Scale(1./hbkg_en_eta->Integral());
  hbkg_en_eta->Draw("Ehist");
  hsig_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hsig_en_eta->GetYaxis()->SetTitle("Entries");
  hsig_en_eta->Scale(1./hsig_en_eta->Integral());
  hsig_en_eta->Draw("Ehist,sames");
  TLegend *leg_en_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_en_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_en_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_en_eta->Draw();
  //phi
  TCanvas *c_electrons_phi = new TCanvas ("electrons_phi","electrons_phi",1000,1000);
  hsig_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hsig_en_phi->GetYaxis()->SetTitle("Entries");
  hsig_en_phi->Scale(1./hsig_en_phi->Integral());
  hsig_en_phi->Draw("Ehist");
  hsig_en_phi->SetLineColor(kRed);
  hbkg_en_phi->SetLineColor(kBlack);
  hbkg_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi->Scale(1./hbkg_en_phi->Integral());
  hbkg_en_phi->Draw("Ehist,sames");  
  TLegend *leg_en_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_en_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_en_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_en_phi->Draw();



  //leptons
  //pt
  TCanvas *c_leptons_pt = new TCanvas ("leptons_pt","leptons_pt",1000,1000);
  hsig_lep_pt->SetLineColor(kRed);
  hbkg_lep_pt->SetLineColor(kBlack);
  hbkg_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt->Scale(1./hbkg_lep_pt->Integral());
  hbkg_lep_pt->Draw("Ehist");
  hsig_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hsig_lep_pt->GetYaxis()->SetTitle("Entries");
  hsig_lep_pt->Scale(1./hsig_lep_pt->Integral());
  hsig_lep_pt->Draw("Ehist,sames");
  TLegend *leg_lep_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_lep_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_lep_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_lep_pt->Draw();
  //eta
  TCanvas *c_leptons_eta = new TCanvas ("leptons_eta","leptons_eta",1000,1000);
  hsig_lep_eta->SetLineColor(kRed);
  hbkg_lep_eta->SetLineColor(kBlack);
  hbkg_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta->GetYaxis()->SetTitle("Entries");
  hbkg_lep_eta->Scale(1./hbkg_lep_eta->Integral());
  hbkg_lep_eta->Draw("Ehist");
  hsig_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hsig_lep_eta->GetYaxis()->SetTitle("Entries");
  hsig_lep_eta->Scale(1./hsig_lep_eta->Integral());
  hsig_lep_eta->Draw("Ehist,sames");
  TLegend *leg_lep_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_lep_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_lep_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_lep_eta->Draw();
  //phi
  TCanvas *c_leptons_phi = new TCanvas ("leptons_phi","leptons_phi",1000,1000);
  hsig_lep_phi->SetLineColor(kRed);
  hbkg_lep_phi->SetLineColor(kBlack);
  hbkg_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi->Scale(1./hbkg_lep_phi->Integral());
  hbkg_lep_phi->Draw("Ehist");
  hsig_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hsig_lep_phi->GetYaxis()->SetTitle("Entries");
  hsig_lep_phi->Scale(1./hsig_lep_phi->Integral());
  hsig_lep_phi->Draw("Ehist,sames");
  TLegend *leg_leptons_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_leptons_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_leptons_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_leptons_phi->Draw();
      


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
  hsig_jet1_pt->SetLineColor(kRed);
  hbkg_jet1_pt->SetLineColor(kBlack);
  TLegend *leg_jet1_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet1_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet1_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet1_pt->Draw();
  TCanvas *c_b_jets_pt = new TCanvas("b-jets1_pt","b-jets1_pt",1000,1000);
  hsig_b_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hsig_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_pt->Scale(1./hsig_b_jet1_pt->Integral());
  hsig_b_jet1_pt->Draw("Ehist");
  hsig_b_jet1_pt->SetLineColor(kRed);
  hbkg_b_jet1_pt->SetLineColor(kBlack);
  hbkg_b_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt->Scale(1./hbkg_b_jet1_pt->Integral());
  hbkg_b_jet1_pt->Draw("Ehist,sames");
  TLegend *leg_b_jet1_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet1_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet1_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet1_pt->Draw();
  TCanvas *c_jets2_pt = new TCanvas("jets2_pt","jets2_pt",1000,1000);
  hsig_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hsig_jet2_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet2_pt->Scale(1./hsig_jet2_pt->Integral());
  hsig_jet2_pt->Draw("Ehist");
  hbkg_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt->Scale(1./hbkg_jet2_pt->Integral());
  hbkg_jet2_pt->Draw("Ehist,sames");
  hsig_jet2_pt->SetLineColor(kRed);
  hbkg_jet2_pt->SetLineColor(kBlack);
  TLegend *leg_jet2_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet2_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet2_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet2_pt->Draw();
  TCanvas *c_b_jets2_pt = new TCanvas("b-jets2_pt","b-jets2_pt",1000,1000);
  hsig_b_jet2_pt->GetXaxis()->SetTitle("BJet 2 Transverse Momentum (GeV/c)");
  hsig_b_jet2_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_pt->Scale(1./hsig_b_jet2_pt->Integral());
  hsig_b_jet2_pt->Draw("Ehist");
  hbkg_b_jet2_pt->GetXaxis()->SetTitle("BJet 2 Transverse Momentum (GeV/c)");
  hbkg_b_jet2_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_pt->Scale(1./hbkg_b_jet2_pt->Integral());
  hbkg_b_jet2_pt->Draw("Ehist,sames");
  hsig_b_jet2_pt->SetLineColor(kRed);
  hbkg_b_jet2_pt->SetLineColor(kBlack);
  TLegend *leg_b_jet2_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet2_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet2_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet2_pt->Draw();
  TCanvas *c_jets3_pt = new TCanvas("jets3_pt","jets3_pt",1000,1000);
  hsig_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hsig_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet3_pt->Scale(1./hsig_jet3_pt->Integral());
  hsig_jet3_pt->Draw("Ehist");
  hbkg_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt->Scale(1./hbkg_jet3_pt->Integral());
  hbkg_jet3_pt->Draw("Ehist,sames");
  hsig_jet3_pt->SetLineColor(kRed);
  hbkg_jet3_pt->SetLineColor(kBlack);
  TLegend *leg_jet3_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet3_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet3_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet3_pt->Draw();
  TCanvas *c_b_jets3_pt = new TCanvas("b-jets_pt","b-jets_pt",1000,1000);
  hsig_b_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hsig_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_pt->Scale(1./hsig_b_jet3_pt->Integral());
  hsig_b_jet3_pt->Draw("Ehist");
  hbkg_b_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt->Scale(1./hbkg_b_jet3_pt->Integral());
  hbkg_b_jet3_pt->Draw("Ehist,sames");
  hsig_b_jet3_pt->SetLineColor(kRed);
  hbkg_b_jet3_pt->SetLineColor(kBlack);
  TLegend *leg_b_jet3_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet3_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet3_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet3_pt->Draw();
  TCanvas *c_jets4_pt = new TCanvas("jets4_pt","jets4_pt",1000,1000);
  hsig_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet4_pt->Scale(1./hsig_jet4_pt->Integral());
  hsig_jet4_pt->Draw("Ehist");
  hbkg_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt->Scale(1./hbkg_jet4_pt->Integral());
  hbkg_jet4_pt->Draw("Ehist,sames");
  hsig_jet4_pt->SetLineColor(kRed);
  hbkg_jet4_pt->SetLineColor(kBlack);
  TLegend *leg_jet4_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet4_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet4_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet4_pt->Draw();
  TCanvas *c_b_jets4_pt = new TCanvas("b-jets4_pt","b-jets_pt",1000,1000);
  hsig_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_pt->Scale(1./hsig_b_jet4_pt->Integral());
  hsig_b_jet4_pt->Draw("Ehist");
  hbkg_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt->Scale(1./hbkg_b_jet4_pt->Integral());
  hbkg_b_jet4_pt->Draw("Ehist,sames");
  hsig_b_jet4_pt->SetLineColor(kRed);
  hbkg_b_jet4_pt->SetLineColor(kBlack);
  TLegend *leg_b_jet4_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet4_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet4_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet4_pt->Draw();
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
  hsig_jet1_eta->SetLineColor(kRed);
  hbkg_jet1_eta->SetLineColor(kBlack);
  TLegend *leg_jet1_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet1_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet1_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet1_eta->Draw();
  TCanvas *c_b_jets_eta= new TCanvas("b-jet pseudorapidity","b-jet pseudorapidity",1000,1000);
  hsig_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hsig_b_jet1_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_eta->Scale(1./hsig_b_jet1_eta->Integral());
  hsig_b_jet1_eta->Draw("Ehist");
  hbkg_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta->GetYaxis()->SetTitle("Entries,sames");
  hsig_b_jet1_eta->SetLineColor(kRed);
  hbkg_b_jet1_eta->SetLineColor(kBlack);
  hbkg_b_jet1_eta->Scale(1./hbkg_b_jet1_eta->Integral());
  hbkg_b_jet1_eta->Draw("Ehist,sames");
  TLegend *leg_b_jet1_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet1_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet1_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet1_eta->Draw();
  TCanvas *c_jets2_eta= new TCanvas("jet2 pseudorapidity","jet2 pseudorapidity",1000,1000);
  hsig_jet2_eta->Draw("Ehist");
  hsig_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hsig_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet2_eta->Scale(1./hsig_jet2_eta->Integral());
  hbkg_jet2_eta->Draw("Ehist,sames");
  hbkg_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta->Scale(1./hbkg_jet2_eta->Integral());
  hsig_jet2_eta->SetLineColor(kRed);
  hbkg_jet2_eta->SetLineColor(kBlack);
  TLegend *leg_jet2_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet2_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet2_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet2_eta->Draw();
  TCanvas *c_b_jets2_eta= new TCanvas("b-jet2 pseudorapidity","b-jet2 pseudorapidity",1000,1000);
  hsig_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hsig_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_eta->Scale(1./hsig_b_jet2_eta->Integral());
  hsig_b_jet2_eta->Draw("Ehist");
  hsig_b_jet2_eta->SetLineColor(kRed);
  hbkg_b_jet2_eta->SetLineColor(kBlack);
  hbkg_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta->Scale(1./hbkg_b_jet2_eta->Integral());
  hbkg_b_jet2_eta->Draw("Ehist,sames");
  TLegend *leg_b_jet2_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet2_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet2_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet2_eta->Draw();
  TCanvas *c_jets3_eta= new TCanvas("jet3 pseudorapidity","jet3 pseudorapidity",1000,1000);
  hsig_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hsig_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet3_eta->Scale(1./hsig_jet3_eta->Integral());
  hsig_jet3_eta->Draw("Ehist");
  hbkg_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta->Scale(1./hbkg_jet3_eta->Integral());
  hbkg_jet3_eta->Draw("Ehist,sames");
  hsig_jet3_eta->SetLineColor(kRed);
  hbkg_jet3_eta->SetLineColor(kBlack);
  TLegend *leg_jet3_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet3_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet3_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet3_eta->Draw();
  TCanvas *c_b_jets3_eta= new TCanvas("b-jet3 pseudorapidity","b-jet3 pseudorapidity",1000,1000);
  hsig_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hsig_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_eta->Scale(1./hsig_b_jet3_eta->Integral());
  hsig_b_jet3_eta->Draw("Ehist");
  hbkg_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hbkg_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_eta->SetLineColor(kRed);
  hbkg_b_jet3_eta->SetLineColor(kBlack);
  hbkg_b_jet3_eta->Scale(1./hbkg_b_jet3_eta->Integral());
  hbkg_b_jet3_eta->Draw("Ehist,sames");
  TLegend *leg_b_jet3_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet3_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet3_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet3_eta->Draw();
  TCanvas *c_jets4_eta= new TCanvas("jet4 pseudorapidity","jet4 pseudorapidity",1000,1000);
  hsig_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hsig_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet4_eta->Scale(1./hsig_jet4_eta->Integral());
  hsig_jet4_eta->Draw("Ehist");
  hbkg_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta->Scale(1./hbkg_jet4_eta->Integral());
  hbkg_jet4_eta->Draw("Ehist,sames");
  hsig_jet4_eta->SetLineColor(kRed);
  hbkg_jet4_eta->SetLineColor(kBlack);
  TLegend *leg_jet4_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet4_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet4_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet4_eta->Draw();
  TCanvas *c_b_jets4_eta= new TCanvas("b-jet4 pseudorapidity","b-jet4 pseudorapidity",1000,1000);
  hsig_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hsig_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_eta->Scale(1./hsig_b_jet4_eta->Integral());
  hsig_b_jet4_eta->Draw("Ehist");
  hbkg_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_eta->SetLineColor(kRed);
  hbkg_b_jet4_eta->SetLineColor(kBlack);
  hbkg_b_jet4_eta->Scale(1./hbkg_b_jet4_eta->Integral());
  hbkg_b_jet4_eta->Draw("Ehist,sames");
  TLegend *leg_b_jet4_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet4_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet4_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet4_eta->Draw();
  //phi
  TCanvas *c_jets_phi= new TCanvas("jets_phi","jets_phi",1000,1000);
  hsig_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hsig_jet1_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet1_phi->Scale(1./hsig_jet1_phi->Integral());
  hsig_jet1_phi->Draw("Ehist");
  hbkg_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi->Scale(1./hbkg_jet1_phi->Integral());
  hbkg_jet1_phi->Draw("Ehist,sames");
  hsig_jet1_phi->SetLineColor(kRed);
  hbkg_jet1_phi->SetLineColor(kBlack);
  TLegend *leg_jet1_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet1_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet1_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet1_phi->Draw();
  TCanvas *c_b_jets_phi= new TCanvas("b-jets_phi","b-jets_phi",1000,1000);
  hsig_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hsig_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_phi->SetLineColor(kRed);
  hbkg_b_jet1_phi->SetLineColor(kBlack);
  hbkg_b_jet1_phi->Scale(1./hbkg_b_jet1_phi->Integral());
  hsig_b_jet1_phi->Draw("Ehist");
  hbkg_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi->Scale(1./hbkg_b_jet1_phi->Integral());
  hbkg_b_jet1_phi->Draw("Ehist,sames");
  TLegend *leg_b_jet1_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet1_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet1_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet1_phi->Draw();
  TCanvas *c_jets2_phi= new TCanvas("jets2_phi","jets2_phi",1000,1000);  
  hsig_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hsig_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet2_phi->Scale(1./hsig_jet2_phi->Integral());
  hsig_jet2_phi->Draw("Ehist");
  hbkg_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet2_phi->SetLineColor(kRed);
  hbkg_jet2_phi->SetLineColor(kBlack);
  hbkg_jet2_phi->Scale(1./hbkg_jet2_phi->Integral());
  hbkg_jet2_phi->Draw("Ehist,sames");
  TLegend *leg_jet2_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet2_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet2_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet2_phi->Draw();
  TCanvas *c_b_jets2_phi= new TCanvas("b-jets2_phi","b-jets2_phi",1000,1000);
  hsig_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hsig_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_phi->Scale(1./hsig_b_jet2_phi->Integral());
  hsig_b_jet2_phi->Draw("Ehist");
  hbkg_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi->SetLineColor(kRed);
  hsig_b_jet2_phi->SetLineColor(kBlack);
  hbkg_b_jet2_phi->Scale(1./hbkg_b_jet2_phi->Integral());
  hbkg_b_jet2_phi->Draw("Ehist,sames");
  TLegend *leg_b_jet2_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet2_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet2_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet2_phi->Draw();
  TCanvas *c_jets3_phi= new TCanvas("jets3_phi","jets3_phi",1000,1000);
  hsig_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hsig_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet3_phi->Scale(1./hsig_jet3_phi->Integral());
  hsig_jet3_phi->Draw("Ehist");
  hbkg_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi->Scale(1./hbkg_jet3_phi->Integral());
  hbkg_jet3_phi->Draw("Ehist,sames");
  hsig_jet3_phi->SetLineColor(kRed);
  hbkg_jet3_phi->SetLineColor(kBlack);
  TLegend *leg_jet3_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet3_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet3_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet3_phi->Draw();
  TCanvas *c_b_jets3_phi= new TCanvas("b-jets3_phi","b-jets3_phi",1000,1000);
  hsig_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hsig_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_phi->Scale(1./hsig_b_jet3_phi->Integral());
  hsig_b_jet3_phi->Draw("Ehist");
  hbkg_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_phi->SetLineColor(kRed);
  hbkg_b_jet3_phi->SetLineColor(kBlack);
  hbkg_b_jet2_phi->Scale(1./hbkg_b_jet2_phi->Integral());
  hbkg_b_jet3_phi->Draw("Ehist,sames");
  TLegend *leg_b_jet3_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet3_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet3_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet3_phi->Draw();
  TCanvas *c_jets4_phi= new TCanvas("jets4_phi","jets4_phi",1000,1000);
  hsig_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hsig_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet4_phi->Scale(1./hsig_jet4_phi->Integral());
  hsig_jet4_phi->Draw("Ehist");
  hbkg_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi->Scale(1./hbkg_jet4_phi->Integral());
  hbkg_jet4_phi->Draw("Ehist,sames");
  hsig_jet4_phi->SetLineColor(kRed);
  hbkg_jet4_phi->SetLineColor(kBlack);
  TLegend *leg_jet4_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet4_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet4_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet4_phi->Draw();
  TCanvas *c_b_jets4_phi= new TCanvas("b-jets4_phi","b-jets4_phi",1000,1000);
  hsig_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hsig_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_phi->Scale(1./hsig_b_jet4_phi->Integral());
  hsig_b_jet4_phi->Draw("Ehist");
  hbkg_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_phi->SetLineColor(kRed);
  hbkg_b_jet4_phi->SetLineColor(kBlack);
  hbkg_b_jet4_phi->Scale(1./hbkg_b_jet4_phi->Integral());
  hbkg_b_jet4_phi->Draw("Ehist,sames");
  TLegend *leg_b_jet4_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet4_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet4_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet4_phi->Draw();

  

  //MET
  TCanvas *c_MET = new TCanvas("MET","MET",1000,1000);
  hsig_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hsig_met_pt->GetYaxis()->SetTitle("Entries");
  hsig_met_pt->Scale(1./hsig_met_pt->Integral());
  hsig_met_pt->Draw("Ehist");
  hbkg_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt->Scale(1./hbkg_met_pt->Integral());
  hbkg_met_pt->Draw("Ehist,sames");
  hsig_met_pt->SetLineColor(kRed);
  hbkg_met_pt->SetLineColor(kBlack);
  TLegend *leg_MET = new TLegend(0.4,0.4,0.5,0.5);
  leg_MET->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_MET->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_MET->Draw();
  //Mt
  TCanvas *c_Mt = new TCanvas("MT","MT",1000,1000);
  hsig_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hsig_mt->GetYaxis()->SetTitle("Entries");
  hsig_mt->Scale(1./hsig_mt->Integral());
  hsig_mt->Draw("Ehist");
  hbkg_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt->GetYaxis()->SetTitle("Entries");
  hbkg_mt->Scale(1./hbkg_mt->Integral());
  hbkg_mt->Draw("Ehist,sames");
  hsig_mt->SetLineColor(kRed);
  hbkg_mt->SetLineColor(kBlack);
  TLegend *leg_mt = new TLegend(0.4,0.4,0.5,0.5);
  leg_mt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_mt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_mt->Draw();



  //d_phi W and H bosons 
  TCanvas *c_w_h = new TCanvas("w_h","w_h",1000,1000);
  hsig_d_phi_w_h->SetStats(11111);
  hsig_d_phi_w_h->Scale(1./hsig_d_phi_w_h->Integral());
  hsig_d_phi_w_h->Draw("Ehist");
  hsig_d_phi_w_h->SetLineColor(kRed);
  hbkg_d_phi_w_h->SetLineColor(kBlack);
  hbkg_d_phi_w_h->Scale(1./hbkg_d_phi_w_h->Integral());
  hbkg_d_phi_w_h->Draw("Ehist,sames");
  TLegend *leg_w_h = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_h->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_h->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_h->Draw();
  TCanvas *c_w_b_h = new TCanvas("w_b_h","w_b_h",1000,1000);
  hsig_d_phi_w_b_h->Scale(1./hsig_d_phi_w_b_h->Integral());
  hsig_d_phi_w_b_h->Draw("Ehist");
  hsig_d_phi_w_b_h->SetLineColor(kRed);
  hbkg_d_phi_w_b_h->SetLineColor(kBlack);
  hbkg_d_phi_w_b_h->Scale(1./hbkg_d_phi_w_b_h->Integral());
  hbkg_d_phi_w_b_h->Draw("Ehist,sames");
  TLegend *leg_w_b_h = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_b_h->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_b_h->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_b_h->Draw();



  //Higgs
  TCanvas *c_h_pt = new TCanvas("higgs_pt","higgs_pt",1000,1000);
  //pt
  hsig_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hsig_h_pt->GetYaxis()->SetTitle("Entries");
  hsig_h_pt->Scale(1./hsig_h_pt->Integral());
  hsig_h_pt->Draw("Ehist");
  hbkg_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt->Scale(1./hbkg_h_pt->Integral());
  hbkg_h_pt->Draw("Ehist,sames");
  hsig_h_pt->SetLineColor(kRed);
  hbkg_h_pt->SetLineColor(kBlack);
  TLegend *leg_h_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_h_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_h_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_h_pt->Draw();
  TCanvas *c_b_h_pt = new TCanvas("b-higgs_pt","b-higgs_pt",1000,1000);
  //pt
  hsig_b_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hsig_b_h_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_h_pt->Scale(1./hsig_b_h_pt->Integral());
  hsig_b_h_pt->Draw("Ehist");
  hbkg_b_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_b_h_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_h_pt->Scale(1./hbkg_b_h_pt->Integral());
  hbkg_b_h_pt->Draw("Ehist,sames");
  hsig_b_h_pt->SetLineColor(kRed);
  hbkg_b_h_pt->SetLineColor(kBlack);
  TLegend *leg_b_h_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_h_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_h_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_h_pt->Draw();
  //phi
  TCanvas *c_h_phi = new TCanvas("higgs_phi","higgs_phi",1000,1000);
  hsig_h_phi->GetXaxis()->SetTitle("Higgs phi");
  hsig_h_phi->GetYaxis()->SetTitle("Entries");
  hsig_h_phi->Scale(1./hsig_h_phi->Integral());
  hsig_h_phi->Draw("Ehist");
  hbkg_h_phi->GetXaxis()->SetTitle("Higgs phi");
  hbkg_h_phi->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi->Scale(1./hbkg_h_phi->Integral());
  hbkg_h_phi->Draw("Ehist,sames");
  hsig_h_phi->SetLineColor(kRed);
  hbkg_h_phi->SetLineColor(kBlack);
  TLegend *leg_h_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_h_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_h_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_h_phi->Draw();
  //eta
  TCanvas *c_h_eta = new TCanvas("higgs_eta","higgs_eta",1000,1000);
  hsig_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hsig_h_eta->GetYaxis()->SetTitle("Entries");
  hsig_h_eta->Scale(1./hsig_h_eta->Integral());
  hsig_h_eta->Draw("Ehist");
  hbkg_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta->Scale(1./hbkg_h_eta->Integral());
  hbkg_h_eta->Draw("Ehist,sames");
  hsig_h_eta->SetLineColor(kRed);
  hbkg_h_eta->SetLineColor(kBlack);
  TLegend *leg_h_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_h_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_h_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_h_eta->Draw();
  //mass
  TCanvas *c_h_inv_mass = new TCanvas("higgs","higgs",1000,1000);
  hsig_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hsig_inv_m->GetYaxis()->SetTitle("Entries");
  hsig_inv_m->Scale(1./hsig_inv_m->Integral());
  hsig_inv_m->Draw("Ehist");
  hbkg_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m->Scale(1./hbkg_inv_m->Integral());
  hbkg_inv_m->Draw("Ehist,sames");
  hsig_inv_m->SetLineColor(kRed);
  hbkg_inv_m->SetLineColor(kBlack);
  TLegend *leg_inv_m = new TLegend(0.4,0.4,0.5,0.5);
  leg_inv_m->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_inv_m->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_inv_m->Draw();
  TCanvas *c_b_h_inv_mass = new TCanvas("b-higgs","b-higgs",1000,1000);
  hsig_b_inv_m->GetXaxis()->SetTitle("Higgs mass (after b-tag)");
  hsig_b_inv_m->GetYaxis()->SetTitle("Entries");
  hsig_b_inv_m->Scale(1./hsig_b_inv_m->Integral());
  hsig_b_inv_m->Draw("Ehist");
  hbkg_b_inv_m->GetXaxis()->SetTitle("Higgs mass (after b-tag)");
  hbkg_b_inv_m->GetYaxis()->SetTitle("Entries");
  hbkg_b_inv_m->Scale(1./hbkg_b_inv_m->Integral());
  hbkg_b_inv_m->Draw("Ehist,sames");
  hsig_b_inv_m->SetLineColor(kRed);
  hbkg_b_inv_m->SetLineColor(kBlack);
  TLegend *leg_b_inv_m = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_inv_m->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_inv_m->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_inv_m->Draw();



  //W boson
  TCanvas *c_W_pt = new TCanvas("W_pt","W_pt",1000,1000);
  //pt
  hbkg_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt->Scale(1./hbkg_w_pt->Integral());
  hbkg_w_pt->Draw("Ehist");
  hsig_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hsig_w_pt->GetYaxis()->SetTitle("Entries");
  hsig_w_pt->Scale(1./hsig_w_pt->Integral());
  hsig_w_pt->Draw("Ehist,sames");
  hsig_w_pt->SetLineColor(kRed);
  hbkg_w_pt->SetLineColor(kBlack);
  TLegend *leg_w_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_pt->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_pt->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_pt->Draw();
  //eta
  TCanvas *c_W_eta = new TCanvas("W_eta","W_eta",1000,1000);
  hsig_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hsig_w_eta->GetYaxis()->SetTitle("Entries");
  hsig_w_eta->Scale(1./hsig_w_eta->Integral());
  hsig_w_eta->Draw("Ehist");
  hbkg_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta->Scale(1./hbkg_w_eta->Integral());
  hbkg_w_eta->Draw("Ehist,sames");
  hsig_w_eta->SetLineColor(kRed);
  hbkg_w_eta->SetLineColor(kBlack);
  TLegend *leg_w_eta = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_eta->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_eta->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_eta->Draw();
  //phi
  TCanvas *c_W_phi = new TCanvas("W_phi","W_phi",1000,1000);
  hsig_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  hsig_w_phi->GetYaxis()->SetTitle("Entries");
  hsig_w_phi->Scale(1./hsig_w_phi->Integral());
  hsig_w_phi->Draw("Ehist");
  hbkg_w_phi->GetXaxis()->SetTitle("W phi (rad)");
  hbkg_w_phi->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi->Scale(1./hbkg_w_phi->Integral());
  hbkg_w_phi->Draw("Ehist,sames");
  hsig_w_phi->SetLineColor(kRed);
  hbkg_w_phi->SetLineColor(kBlack);
  TLegend *leg_w_phi = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_phi->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_phi->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_phi->Draw();
  //mass
  TCanvas *c_W_m = new TCanvas("W_m","W_m",1000,1000);
  hsig_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  hsig_w_m->GetYaxis()->SetTitle("Entries");
  hsig_w_m->Scale(1./hsig_w_m->Integral());
  hsig_w_m->Draw("Ehist");
  hbkg_w_m->GetXaxis()->SetTitle("W mass (GeV)");
  hbkg_w_m->GetYaxis()->SetTitle("Entries");
  hbkg_w_m->Scale(1./hbkg_w_m->Integral());
  hbkg_w_m->Draw("Ehistsames");
  hsig_w_m->SetLineColor(kRed);
  hbkg_w_m->SetLineColor(kBlack);
  TLegend *leg_w_m = new TLegend(0.4,0.4,0.5,0.5);
  leg_w_m->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_w_m->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_w_m->Draw();
  



  //jet_mult
  TCanvas *c_jet_mult = new TCanvas ("jet_mult","jet_mult",1000,1000);
  hsig_jet_mult->GetXaxis()->SetTitle("jet multiplicity");
  hsig_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_jet_mult->Scale(1./hsig_jet_mult->Integral());
  hsig_jet_mult->Draw("Ehist");
  hbkg_jet_mult->GetXaxis()->SetTitle("jet multiplicity");
  hbkg_jet_mult->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult->Scale(1./hbkg_jet_mult->Integral());
  hbkg_jet_mult->Draw("Ehist,sames");
  hsig_jet_mult->SetLineColor(kRed);
  hbkg_jet_mult->SetLineColor(kBlack);
  TLegend *leg_jet_mult = new TLegend(0.4,0.4,0.5,0.5);
  leg_jet_mult->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_jet_mult->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_jet_mult->Draw();
  TCanvas *c_b_jet_mult = new TCanvas ("b-jet_mult","b-jet_mult",1000,1000);
  hbkg_b_jet_mult->GetXaxis()->SetTitle("bjet multiplicity");
  hbkg_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_b_jet_mult->SetLineColor(kRed);
  hbkg_b_jet_mult->SetLineColor(kBlack);
  hbkg_b_jet_mult->Scale(1./hbkg_b_jet_mult->Integral());
  hbkg_b_jet_mult->Draw("Ehist");
  hsig_b_jet_mult->GetXaxis()->SetTitle("bjet multiplicity");
  hsig_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_b_jet_mult->Scale(1./hsig_b_jet_mult->Integral());
  hsig_b_jet_mult->Draw("Ehist,sames");
  TLegend *leg_b_jet_mult = new TLegend(0.4,0.4,0.5,0.5);
  leg_b_jet_mult->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_b_jet_mult->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_b_jet_mult->Draw();
  


  //delta R before cross-cleaning
  TCanvas *c_dR_mn_jet = new TCanvas("dR_mn_jet","dR_mn_jet",1000,1000);
  //muon-jet
  hbkg_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hbkg_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon->Scale(1./hbkg_dR_jet_muon->Integral());
  hbkg_dR_jet_muon->Draw("Ehist");
  hsig_dR_jet_muon->SetLineColor(kRed);
  hbkg_dR_jet_muon->SetLineColor(kBlack);
  hsig_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hsig_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon->Scale(1./hsig_dR_jet_muon->Integral());
  hsig_dR_jet_muon->Draw("Ehist,sames");
  TLegend *leg_dR_mn_jet = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_mn_jet->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_dR_mn_jet->AddEntry(hbkg_dR_jet_muon,"Backround","l");
  leg_dR_mn_jet->Draw();
  

  
  //electron-jet
  TCanvas *c_dR_en_jet = new TCanvas("dR_en_jet","dR_en_jet",1000,1000);
  hbkg_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  hbkg_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron->Scale(1./hbkg_dR_jet_electron->Integral());
  hbkg_dR_jet_electron->Draw("Ehist");
  hsig_dR_jet_electron->SetLineColor(kRed);
  hbkg_dR_jet_electron->SetLineColor(kBlack);
  hsig_dR_jet_electron->GetXaxis()->SetTitle("delta R between jets and electrons");
  hsig_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron->Scale(1./hsig_dR_jet_electron->Integral());
  hsig_dR_jet_electron->Draw("Ehist,sames");
  TLegend *leg_dR_en_jet = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_en_jet->AddEntry(hsig_dR_jet_electron,"Signal","l");
  leg_dR_en_jet->AddEntry(hbkg_dR_jet_electron,"Backround","l");
  leg_dR_en_jet->Draw();
  


  //delta R after cross-cleaning
  //muon-jet
  TCanvas *c_dR_mn_jet_after = new TCanvas("dR_mn_jet_after","dR_mn_jet_after",1000,1000);
  hsig_dR_jet_muon_after->GetXaxis()->SetTitle("delta R between jets and muons after cross cleaning");
  hsig_dR_jet_muon_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon_after->Scale(1./hsig_dR_jet_muon_after->Integral());
  hsig_dR_jet_muon_after->Draw("Ehist");
  hbkg_dR_jet_muon_after->GetXaxis()->SetTitle("delta R between jets and muons after cross cleaning");
  hbkg_dR_jet_muon_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon_after->SetLineColor(kRed);
  hbkg_dR_jet_muon_after->SetLineColor(kBlack);
  hbkg_dR_jet_muon_after->Scale(1./hbkg_dR_jet_muon_after->Integral());
  hbkg_dR_jet_muon_after->Draw("Ehist,sames");
  TLegend *leg_dR_jet_mn_after = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_jet_mn_after->AddEntry(hsig_dR_jet_muon_after,"Signal","l");
  leg_dR_jet_mn_after->AddEntry(hbkg_dR_jet_muon_after,"Backround","l");
  leg_dR_jet_mn_after->Draw();
  
  


  //electron-jet
  TCanvas *c_dR_en_jet_after = new TCanvas("dR_en_jet_after","dR_en_jet_after",1000,1000);
  hsig_dR_jet_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons after cross cleaning");
  hsig_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron_after->Scale(1./hsig_dR_jet_electron_after->Integral());
  hsig_dR_jet_electron_after->Draw("Ehist");
  hbkg_dR_jet_electron_after->GetXaxis()->SetTitle("delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron_after->SetLineColor(kRed);
  hbkg_dR_jet_electron_after->SetLineColor(kBlack);
  hbkg_dR_jet_electron_after->Scale(1./hbkg_dR_jet_electron_after->Integral());
  hbkg_dR_jet_electron_after->Draw("Ehist,sames");
  TLegend *leg_dR_jet_en_after = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_jet_en_after->AddEntry(hsig_dR_jet_electron_after,"Signal","l");
  leg_dR_jet_en_after->AddEntry(hbkg_dR_jet_electron_after,"Backround","l");
  leg_dR_jet_en_after->Draw();
  



  //dR_av
  TCanvas *c_dR_av = new TCanvas("dR_av","dR_av",1000,1000);
  hbkg_dR_av->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hbkg_dR_av->GetYaxis()->SetTitle("Entries");
  hsig_dR_av->SetLineColor(kRed);
  hbkg_dR_av->SetLineColor(kBlack);
  hbkg_dR_av->Scale(1./hbkg_dR_av->Integral());
  hbkg_dR_av->Draw("Ehist");
  hsig_dR_av->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hsig_dR_av->GetYaxis()->SetTitle("Entries");
  hsig_dR_av->Scale(1./hsig_dR_av->Integral());
  hsig_dR_av->Draw("Ehist,sames");
  TLegend *leg_dR_av = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_av->AddEntry(hsig_dR_av,"Signal","l");
  leg_dR_av->AddEntry(hbkg_dR_av,"Backround","l");
  leg_dR_av->Draw();



  //minDelta_m
  TCanvas *c_minDelta_m = new TCanvas("minDelta_m","minDelta_m",1000,1000);
  hbkg_minDelta_m->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hbkg_minDelta_m->GetYaxis()->SetTitle("Entries");
  hsig_minDelta_m->SetLineColor(kRed);
  hbkg_minDelta_m->SetLineColor(kBlack);
  hbkg_minDelta_m->Scale(1./hbkg_minDelta_m->Integral());
  hbkg_minDelta_m->Draw("Ehist");
  hsig_minDelta_m->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hsig_minDelta_m->GetYaxis()->SetTitle("Entries");
  hsig_minDelta_m->Scale(1./hsig_minDelta_m->Integral());
  hsig_minDelta_m->Draw("Ehist,sames");
  TLegend *leg_minDelta_m = new TLegend(0.4,0.4,0.5,0.5);
  leg_minDelta_m->AddEntry(hsig_minDelta_m,"Signal","l");
  leg_minDelta_m->AddEntry(hbkg_minDelta_m,"Backround","l");
  leg_minDelta_m->Draw();



  //delta_phi
  TCanvas *c_delta_phi = new TCanvas("delta_phi","delta_phi",1000,1000);
  hbkg_delta_phi->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hbkg_delta_phi->GetYaxis()->SetTitle("Entries");
  hsig_delta_phi->SetLineColor(kRed);
  hbkg_delta_phi->SetLineColor(kBlack);
  hbkg_delta_phi->Scale(1./hbkg_delta_phi->Integral());
  hbkg_delta_phi->Draw("Ehist");
  hsig_delta_phi->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hsig_delta_phi->GetYaxis()->SetTitle("Entries");
  hsig_delta_phi->Scale(1./hsig_delta_phi->Integral());
  hsig_delta_phi->Draw("Ehist,sames");
  TLegend *leg_delta_phi= new TLegend(0.4,0.4,0.5,0.5);
  leg_delta_phi->AddEntry(hsig_delta_phi,"Signal","l");
  leg_delta_phi->AddEntry(hbkg_delta_phi,"Backround","l");
  leg_delta_phi->Draw();



  //Njets
  TCanvas *c_Njets = new TCanvas("Njets","Njets",1000,1000);
  hbkg_Nbjets_after->GetXaxis()->SetTitle("Njets");
  hbkg_Nbjets_after->GetYaxis()->SetTitle("Entries");
  hsig_Nbjets_after->SetLineColor(kRed);
  hbkg_Nbjets_after->SetLineColor(kBlack);
  hbkg_Nbjets_after->Scale(1./hbkg_Nbjets_after->Integral());
  hbkg_Nbjets_after->Draw("Ehist");
  hsig_Nbjets_after->GetXaxis()->SetTitle("Njets");
  hsig_Nbjets_after->GetYaxis()->SetTitle("Entries");
  hsig_Nbjets_after->Scale(1./hsig_Nbjets_after->Integral());
  hsig_Nbjets_after->Draw("Ehist,sames");
  TLegend *leg_Njets = new TLegend(0.4,0.4,0.5,0.5);
  leg_Njets->AddEntry(hsig_Nbjets_after,"Signal","l");
  leg_Njets->AddEntry(hbkg_Nbjets_after,"Backround","l");
  leg_Njets->Draw();


  //bjet1
  TCanvas *c_btag0 = new TCanvas("btag0","btag0",1000,1000);
  hbkg_btag_0->GetXaxis()->SetTitle("btag0");
  hbkg_btag_0->GetYaxis()->SetTitle("Entries");
  hsig_btag_0->SetLineColor(kRed);
  hbkg_btag_0->SetLineColor(kBlack);
  hbkg_btag_0->Scale(1./hbkg_btag_0->Integral());
  hbkg_btag_0->Draw("Ehist");
  hsig_btag_0->GetXaxis()->SetTitle("btag0");
  hsig_btag_0->GetYaxis()->SetTitle("Entries");
  hsig_btag_0->Scale(1./hsig_btag_0->Integral());
  hsig_btag_0->Draw("Ehist,sames");
  TLegend *leg_btag_0 = new TLegend(0.4,0.4,0.5,0.5);
  leg_btag_0->AddEntry(hsig_btag_0,"Signal","l");
  leg_btag_0->AddEntry(hbkg_btag_0,"Backround","l");
  leg_btag_0->Draw();
  TCanvas *c_btag1 = new TCanvas("btag1","btag1",1000,1000);
  hbkg_btag_1->GetXaxis()->SetTitle("btag1");
  hbkg_btag_1->GetYaxis()->SetTitle("Entries");
  hsig_btag_1->SetLineColor(kRed);
  hbkg_btag_1->SetLineColor(kBlack);
  hbkg_btag_1->Scale(1./hbkg_btag_1->Integral());
  hbkg_btag_1->Draw("Ehist");
  hsig_btag_1->GetXaxis()->SetTitle("btag1");
  hsig_btag_1->GetYaxis()->SetTitle("Entries");
  hsig_btag_1->Scale(1./hsig_btag_1->Integral());
  hsig_btag_1->Draw("Ehist,sames");
  TLegend *leg_btag_1 = new TLegend(0.4,0.4,0.5,0.5);
  leg_btag_1->AddEntry(hsig_btag_1,"Signal","l");
  leg_btag_1->AddEntry(hbkg_btag_1,"Backround","l");
  leg_btag_1->Draw();
  TCanvas *c_btag2 = new TCanvas("btag2","btag2",1000,1000);
  hbkg_btag_2->GetXaxis()->SetTitle("btag2");
  hbkg_btag_2->GetYaxis()->SetTitle("Entries");
  hbkg_btag_2->SetLineColor(kBlack);
  hsig_btag_2->SetLineColor(kRed);
  hbkg_btag_2->Scale(1./hbkg_btag_2->Integral());
  hbkg_btag_2->Draw("Ehist");
  hsig_btag_2->GetXaxis()->SetTitle("btag2");
  hsig_btag_2->GetYaxis()->SetTitle("Entries");
  hsig_btag_2->Scale(1./hsig_btag_2->Integral());
  hsig_btag_2->Draw("Ehist,sames");
  TLegend *leg_btag_2 = new TLegend(0.4,0.4,0.5,0.5);
  leg_btag_2->AddEntry(hsig_btag_2,"Signal","l");
  leg_btag_2->AddEntry(hbkg_btag_2,"Backround","l");
  leg_btag_2->Draw();
  TCanvas *c_btag3 = new TCanvas("btag3","btag3",1000,1000);
  hbkg_btag_3->GetXaxis()->SetTitle("btag3");
  hbkg_btag_3->GetYaxis()->SetTitle("Entries");
  hsig_btag_3->SetLineColor(kRed);
  hbkg_btag_3->SetLineColor(kBlack);
  hbkg_btag_3->Scale(1./hbkg_btag_3->Integral());
  hbkg_btag_3->Draw("Ehist");
  hsig_btag_3->GetXaxis()->SetTitle("btag3");
  hsig_btag_3->GetYaxis()->SetTitle("Entries");
  hsig_btag_3->Scale(1./hsig_btag_3->Integral());
  hsig_btag_3->Draw("Ehist,sames");
  TLegend *leg_btag_3 = new TLegend(0.4,0.4,0.5,0.5);
  leg_btag_3->AddEntry(hsig_btag_3,"Signal","l");
  leg_btag_3->AddEntry(hbkg_btag_3,"Backround","l");
  leg_btag_3->Draw();
}
