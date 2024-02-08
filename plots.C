#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void plots(){
  TFile *inputfile=TFile::Open("histos_signal.root");
  TFile *inputfile_back=TFile::Open("histos_back_TTbarSemileptonic.root");
  TFile *inputfile_back_d=TFile::Open("histos_back_TTbarDileptonic.root");
  TFile *inputfile_back_h=TFile::Open("histos_back_TTbarHadronic.root");
  TFile *inputfile_back_w=TFile::Open("histos_back_WJetsToLNu.root");
  
  

  TH1F *hsig_mn_pt = (TH1F*)inputfile->Get("h_mn_pt");
  TH1F *hsig_mn_eta = (TH1F*)inputfile->Get("h_mn_eta");
  TH1F *hsig_mn_phi = (TH1F*)inputfile->Get("h_mn_phi");



  TH1F *hbkg_mn_pt = (TH1F*)inputfile_back->Get("h_mn_pt");
  TH1F *hbkg_mn_eta = (TH1F*)inputfile_back->Get("h_mn_eta");
  TH1F *hbkg_mn_phi = (TH1F*)inputfile_back->Get("h_mn_phi");



  TH1F *hbkg_mn_pt_d = (TH1F*)inputfile_back_d->Get("h_mn_pt");
  TH1F *hbkg_mn_eta_d = (TH1F*)inputfile_back_d->Get("h_mn_eta");
  TH1F *hbkg_mn_phi_d = (TH1F*)inputfile_back_d->Get("h_mn_phi");
  


  TH1F *hbkg_mn_pt_h = (TH1F*)inputfile_back_h->Get("h_mn_pt");
  TH1F *hbkg_mn_eta_h = (TH1F*)inputfile_back_h->Get("h_mn_eta");
  TH1F *hbkg_mn_phi_h = (TH1F*)inputfile_back_h->Get("h_mn_phi");



  TH1F *hbkg_mn_pt_w = (TH1F*)inputfile_back_w->Get("h_mn_pt");
  TH1F *hbkg_mn_eta_w = (TH1F*)inputfile_back_w->Get("h_mn_eta");
  TH1F *hbkg_mn_phi_w = (TH1F*)inputfile_back_w->Get("h_mn_phi");


  TH1F *hsig_en_pt = (TH1F*)inputfile->Get("h_en_pt");
  TH1F *hsig_en_eta = (TH1F*)inputfile->Get("h_en_eta");
  TH1F *hsig_en_phi = (TH1F*)inputfile->Get("h_en_phi");



  TH1F *hbkg_en_pt = (TH1F*)inputfile_back->Get("h_en_pt");
  TH1F *hbkg_en_eta = (TH1F*)inputfile_back->Get("h_en_eta");
  TH1F *hbkg_en_phi = (TH1F*)inputfile_back->Get("h_en_phi");


  TH1F *hbkg_en_pt_d = (TH1F*)inputfile_back_d->Get("h_en_pt");
  TH1F *hbkg_en_eta_d = (TH1F*)inputfile_back_d->Get("h_en_eta");
  TH1F *hbkg_en_phi_d = (TH1F*)inputfile_back_d->Get("h_en_phi");



  TH1F *hbkg_en_pt_h = (TH1F*)inputfile_back_h->Get("h_en_pt");
  TH1F *hbkg_en_eta_h = (TH1F*)inputfile_back_h->Get("h_en_eta");
  TH1F *hbkg_en_phi_h = (TH1F*)inputfile_back_h->Get("h_en_phi");



  TH1F *hbkg_en_pt_w = (TH1F*)inputfile_back_w->Get("h_en_pt");
  TH1F *hbkg_en_eta_w = (TH1F*)inputfile_back_w->Get("h_en_eta");
  TH1F *hbkg_en_phi_w = (TH1F*)inputfile_back_w->Get("h_en_phi");
  


  TH1F *hsig_jet1_pt = (TH1F*)inputfile->Get("h_jet1_pt");
  TH1F *hsig_jet1_eta = (TH1F*)inputfile->Get("h_jet1_eta");
  TH1F *hsig_jet1_phi = (TH1F*)inputfile->Get("h_jet1_phi");
  TH1F *hsig_jet2_pt = (TH1F*)inputfile->Get("h_jet2_pt");
  TH1F *hsig_jet2_eta = (TH1F*)inputfile->Get("h_jet2_eta");
  TH1F *hsig_jet2_phi = (TH1F*)inputfile->Get("h_jet2_phi");
  TH1F *hsig_jet3_pt = (TH1F*)inputfile->Get("h_jet3_pt");
  TH1F *hsig_jet3_eta = (TH1F*)inputfile->Get("h_jet3_eta");
  TH1F *hsig_jet3_phi = (TH1F*)inputfile->Get("h_jet3_phi");
  TH1F *hsig_jet4_pt = (TH1F*)inputfile->Get("h_jet4_pt");
  TH1F *hsig_jet4_eta = (TH1F*)inputfile->Get("h_jet4_eta");
  TH1F *hsig_jet4_phi = (TH1F*)inputfile->Get("h_jet4_phi");



  TH1F *hbkg_jet1_pt = (TH1F*)inputfile_back->Get("h_jet1_pt");
  TH1F *hbkg_jet1_eta = (TH1F*)inputfile_back->Get("h_jet1_eta");
  TH1F *hbkg_jet1_phi = (TH1F*)inputfile_back->Get("h_jet1_phi");
  TH1F *hbkg_jet2_pt = (TH1F*)inputfile_back->Get("h_jet2_pt");
  TH1F *hbkg_jet2_eta = (TH1F*)inputfile_back->Get("h_jet2_eta");
  TH1F *hbkg_jet2_phi = (TH1F*)inputfile_back->Get("h_jet2_phi");
  TH1F *hbkg_jet3_pt = (TH1F*)inputfile_back->Get("h_jet3_pt");
  TH1F *hbkg_jet3_eta = (TH1F*)inputfile_back->Get("h_jet3_eta");
  TH1F *hbkg_jet3_phi = (TH1F*)inputfile_back->Get("h_jet3_phi");
  TH1F *hbkg_jet4_pt = (TH1F*)inputfile_back->Get("h_jet4_pt");
  TH1F *hbkg_jet4_eta = (TH1F*)inputfile_back->Get("h_jet4_eta");
  TH1F *hbkg_jet4_phi = (TH1F*)inputfile_back->Get("h_jet4_phi");



  TH1F *hbkg_jet1_pt_d = (TH1F*)inputfile_back_d->Get("h_jet1_pt");
  TH1F *hbkg_jet1_eta_d = (TH1F*)inputfile_back_d->Get("h_jet1_eta");
  TH1F *hbkg_jet1_phi_d = (TH1F*)inputfile_back_d->Get("h_jet1_phi");
  TH1F *hbkg_jet2_pt_d= (TH1F*)inputfile_back_d->Get("h_jet2_pt");
  TH1F *hbkg_jet2_eta_d = (TH1F*)inputfile_back_d->Get("h_jet2_eta");
  TH1F *hbkg_jet2_phi_d = (TH1F*)inputfile_back_d->Get("h_jet2_phi");
  TH1F *hbkg_jet3_pt_d = (TH1F*)inputfile_back_d->Get("h_jet3_pt");
  TH1F *hbkg_jet3_eta_d = (TH1F*)inputfile_back_d->Get("h_jet3_eta");
  TH1F *hbkg_jet3_phi_d = (TH1F*)inputfile_back_d->Get("h_jet3_phi");
  TH1F *hbkg_jet4_pt_d = (TH1F*)inputfile_back_d->Get("h_jet4_pt");
  TH1F *hbkg_jet4_eta_d = (TH1F*)inputfile_back_d->Get("h_jet4_eta");
  TH1F *hbkg_jet4_phi_d = (TH1F*)inputfile_back_d->Get("h_jet4_phi");



  TH1F *hbkg_jet1_pt_h = (TH1F*)inputfile_back_h->Get("h_jet1_pt");
  TH1F *hbkg_jet1_eta_h = (TH1F*)inputfile_back_h->Get("h_jet1_eta");
  TH1F *hbkg_jet1_phi_h = (TH1F*)inputfile_back_h->Get("h_jet1_phi");
  TH1F *hbkg_jet2_pt_h = (TH1F*)inputfile_back_h->Get("h_jet2_pt");
  TH1F *hbkg_jet2_eta_h = (TH1F*)inputfile_back_h->Get("h_jet2_eta");
  TH1F *hbkg_jet2_phi_h = (TH1F*)inputfile_back_h->Get("h_jet2_phi");
  TH1F *hbkg_jet3_pt_h = (TH1F*)inputfile_back_h->Get("h_jet3_pt");
  TH1F *hbkg_jet3_eta_h = (TH1F*)inputfile_back_h->Get("h_jet3_eta");
  TH1F *hbkg_jet3_phi_h = (TH1F*)inputfile_back_h->Get("h_jet3_phi");
  TH1F *hbkg_jet4_pt_h = (TH1F*)inputfile_back_h->Get("h_jet4_pt");
  TH1F *hbkg_jet4_eta_h = (TH1F*)inputfile_back_h->Get("h_jet4_eta");
  TH1F *hbkg_jet4_phi_h = (TH1F*)inputfile_back_h->Get("h_jet4_phi");



  TH1F *hbkg_jet1_pt_w = (TH1F*)inputfile_back_w->Get("h_jet1_pt");
  TH1F *hbkg_jet1_eta_w = (TH1F*)inputfile_back_w->Get("h_jet1_eta");
  TH1F *hbkg_jet1_phi_w = (TH1F*)inputfile_back_w->Get("h_jet1_phi");
  TH1F *hbkg_jet2_pt_w = (TH1F*)inputfile_back_w->Get("h_jet2_pt");
  TH1F *hbkg_jet2_eta_w = (TH1F*)inputfile_back_w->Get("h_jet2_eta");
  TH1F *hbkg_jet2_phi_w = (TH1F*)inputfile_back_w->Get("h_jet2_phi");
  TH1F *hbkg_jet3_pt_w = (TH1F*)inputfile_back_w->Get("h_jet3_pt");
  TH1F *hbkg_jet3_eta_w = (TH1F*)inputfile_back_w->Get("h_jet3_eta");
  TH1F *hbkg_jet3_phi_w = (TH1F*)inputfile_back_w->Get("h_jet3_phi");
  TH1F *hbkg_jet4_pt_w = (TH1F*)inputfile_back_w->Get("h_jet4_pt");
  TH1F *hbkg_jet4_eta_w = (TH1F*)inputfile_back_w->Get("h_jet4_eta");
  TH1F *hbkg_jet4_phi_w = (TH1F*)inputfile_back_w->Get("h_jet4_phi");



  TH1F *hsig_lep_pt = (TH1F*)inputfile->Get("h_lep_pt");
  TH1F *hsig_lep_eta = (TH1F*)inputfile->Get("h_lep_eta");
  TH1F *hsig_lep_phi = (TH1F*)inputfile->Get("h_lep_phi");
  TH1F *hsig_lep_m = (TH1F*)inputfile->Get("h_lep_m");



  TH1F *hbkg_lep_pt = (TH1F*)inputfile_back->Get("h_lep_pt");
  TH1F *hbkg_lep_eta = (TH1F*)inputfile_back->Get("h_lep_eta");
  TH1F *hbkg_lep_phi = (TH1F*)inputfile_back->Get("h_lep_phi");
  TH1F *hbkg_lep_m = (TH1F*)inputfile_back->Get("h_lep_m");



  TH1F *hbkg_lep_pt_h = (TH1F*)inputfile_back_h->Get("h_lep_pt");
  TH1F *hbkg_lep_eta_h = (TH1F*)inputfile_back_h->Get("h_lep_eta");
  TH1F *hbkg_lep_phi_h = (TH1F*)inputfile_back_h->Get("h_lep_phi");
  TH1F *hbkg_lep_m_h = (TH1F*)inputfile_back_h->Get("h_lep_m");



  TH1F *hbkg_lep_pt_d = (TH1F*)inputfile_back_d->Get("h_lep_pt");
  TH1F *hbkg_lep_eta_d = (TH1F*)inputfile_back_d->Get("h_lep_eta");
  TH1F *hbkg_lep_phi_d = (TH1F*)inputfile_back_d->Get("h_lep_phi");
  TH1F *hbkg_lep_m_d = (TH1F*)inputfile_back_d->Get("h_lep_m");



  TH1F *hbkg_lep_pt_w = (TH1F*)inputfile_back_w->Get("h_lep_pt");
  TH1F *hbkg_lep_eta_w = (TH1F*)inputfile_back_w->Get("h_lep_eta");
  TH1F *hbkg_lep_phi_w = (TH1F*)inputfile_back_w->Get("h_lep_phi");
  TH1F *hbkg_lep_m_w = (TH1F*)inputfile_back_w->Get("h_lep_m");




  TH1F *hsig_b_jet1_pt = (TH1F*)inputfile->Get("h_b_jet1_pt");
  TH1F *hsig_b_jet1_eta = (TH1F*)inputfile->Get("h_b_jet1_eta");
  TH1F *hsig_b_jet1_phi = (TH1F*)inputfile->Get("h_b_jet1_phi");
  TH1F *hsig_b_jet2_pt = (TH1F*)inputfile->Get("h_b_jet2_pt");
  TH1F *hsig_b_jet2_eta = (TH1F*)inputfile->Get("h_b_jet2_eta");
  TH1F *hsig_b_jet2_phi = (TH1F*)inputfile->Get("h_b_jet2_phi");
  TH1F *hsig_b_jet3_pt = (TH1F*)inputfile->Get("h_b_jet3_pt");
  TH1F *hsig_b_jet3_eta = (TH1F*)inputfile->Get("h_b_jet3_eta");
  TH1F *hsig_b_jet3_phi = (TH1F*)inputfile->Get("h_b_jet3_phi");
  TH1F *hsig_b_jet4_pt = (TH1F*)inputfile->Get("h_b_jet4_pt");
  TH1F *hsig_b_jet4_eta = (TH1F*)inputfile->Get("h_b_jet4_eta");
  TH1F *hsig_b_jet4_phi = (TH1F*)inputfile->Get("h_b_jet4_phi");



  TH1F *hbkg_b_jet1_pt = (TH1F*)inputfile_back->Get("h_b_jet1_pt");
  TH1F *hbkg_b_jet1_eta = (TH1F*)inputfile_back->Get("h_b_jet1_eta");
  TH1F *hbkg_b_jet1_phi = (TH1F*)inputfile_back->Get("h_b_jet1_phi");
  TH1F *hbkg_b_jet2_pt = (TH1F*)inputfile_back->Get("h_b_jet2_pt");
  TH1F *hbkg_b_jet2_eta = (TH1F*)inputfile_back->Get("h_b_jet2_eta");
  TH1F *hbkg_b_jet2_phi = (TH1F*)inputfile_back->Get("h_b_jet2_phi");
  TH1F *hbkg_b_jet3_pt = (TH1F*)inputfile_back->Get("h_b_jet3_pt");
  TH1F *hbkg_b_jet3_eta = (TH1F*)inputfile_back->Get("h_b_jet3_eta");
  TH1F *hbkg_b_jet3_phi = (TH1F*)inputfile_back->Get("h_b_jet3_phi");
  TH1F *hbkg_b_jet4_pt = (TH1F*)inputfile_back->Get("h_b_jet4_pt");
  TH1F *hbkg_b_jet4_eta = (TH1F*)inputfile_back->Get("h_b_jet4_eta");
  TH1F *hbkg_b_jet4_phi = (TH1F*)inputfile_back->Get("h_b_jet4_phi");
  


  TH1F *hbkg_b_jet1_pt_h = (TH1F*)inputfile_back_h->Get("h_b_jet1_pt");
  TH1F *hbkg_b_jet1_eta_h = (TH1F*)inputfile_back_h->Get("h_b_jet1_eta");
  TH1F *hbkg_b_jet1_phi_h = (TH1F*)inputfile_back_h->Get("h_b_jet1_phi");
  TH1F *hbkg_b_jet2_pt_h = (TH1F*)inputfile_back_h->Get("h_b_jet2_pt"); 
  TH1F *hbkg_b_jet2_eta_h = (TH1F*)inputfile_back_h->Get("h_b_jet2_eta");
  TH1F *hbkg_b_jet2_phi_h = (TH1F*)inputfile_back_h->Get("h_b_jet2_phi");
  TH1F *hbkg_b_jet3_pt_h = (TH1F*)inputfile_back_h->Get("h_b_jet3_pt");
  TH1F *hbkg_b_jet3_eta_h = (TH1F*)inputfile_back_h->Get("h_b_jet3_eta");
  TH1F *hbkg_b_jet3_phi_h = (TH1F*)inputfile_back_h->Get("h_b_jet3_phi");
  TH1F *hbkg_b_jet4_pt_h = (TH1F*)inputfile_back_h->Get("h_b_jet4_pt");
  TH1F *hbkg_b_jet4_eta_h = (TH1F*)inputfile_back_h->Get("h_b_jet4_eta");
  TH1F *hbkg_b_jet4_phi_h = (TH1F*)inputfile_back_h->Get("h_b_jet4_phi");



  TH1F *hbkg_b_jet1_pt_d = (TH1F*)inputfile_back_d->Get("h_b_jet1_pt");
  TH1F *hbkg_b_jet1_eta_d = (TH1F*)inputfile_back_d->Get("h_b_jet1_eta");
  TH1F *hbkg_b_jet1_phi_d = (TH1F*)inputfile_back_d->Get("h_b_jet1_phi");
  TH1F *hbkg_b_jet2_pt_d = (TH1F*)inputfile_back_d->Get("h_b_jet2_pt");
  TH1F *hbkg_b_jet2_eta_d = (TH1F*)inputfile_back_d->Get("h_b_jet2_eta");
  TH1F *hbkg_b_jet2_phi_d = (TH1F*)inputfile_back_d->Get("h_b_jet2_phi");
  TH1F *hbkg_b_jet3_pt_d = (TH1F*)inputfile_back_d->Get("h_b_jet3_pt");
  TH1F *hbkg_b_jet3_eta_d = (TH1F*)inputfile_back_d->Get("h_b_jet3_eta");
  TH1F *hbkg_b_jet3_phi_d = (TH1F*)inputfile_back_d->Get("h_b_jet3_phi");
  TH1F *hbkg_b_jet4_pt_d = (TH1F*)inputfile_back_d->Get("h_b_jet4_pt");
  TH1F *hbkg_b_jet4_eta_d = (TH1F*)inputfile_back_d->Get("h_b_jet4_eta");
  TH1F *hbkg_b_jet4_phi_d = (TH1F*)inputfile_back_d->Get("h_b_jet4_phi");



  TH1F *hbkg_b_jet1_pt_w = (TH1F*)inputfile_back_w->Get("h_b_jet1_pt");
  TH1F *hbkg_b_jet1_eta_w = (TH1F*)inputfile_back_w->Get("h_b_jet1_eta");
  TH1F *hbkg_b_jet1_phi_w = (TH1F*)inputfile_back_w->Get("h_b_jet1_phi");
  TH1F *hbkg_b_jet2_pt_w = (TH1F*)inputfile_back_w->Get("h_b_jet2_pt");
  TH1F *hbkg_b_jet2_eta_w = (TH1F*)inputfile_back_w->Get("h_b_jet2_eta");
  TH1F *hbkg_b_jet2_phi_w = (TH1F*)inputfile_back_w->Get("h_b_jet2_phi");
  TH1F *hbkg_b_jet3_pt_w = (TH1F*)inputfile_back_w->Get("h_b_jet3_pt");
  TH1F *hbkg_b_jet3_eta_w = (TH1F*)inputfile_back_w->Get("h_b_jet3_eta");
  TH1F *hbkg_b_jet3_phi_w = (TH1F*)inputfile_back_w->Get("h_b_jet3_phi");
  TH1F *hbkg_b_jet4_pt_w = (TH1F*)inputfile_back_w->Get("h_b_jet4_pt");
  TH1F *hbkg_b_jet4_eta_w = (TH1F*)inputfile_back_w->Get("h_b_jet4_eta");
  TH1F *hbkg_b_jet4_phi_w = (TH1F*)inputfile_back_w->Get("h_b_jet4_phi");




  TH1F *hsig_met_pt = (TH1F*)inputfile->Get("h_met_pt");
  TH1F *hsig_mt = (TH1F*)inputfile->Get("h_mt");
  TH1F *hsig_d_phi_w_h = (TH1F*)inputfile->Get("h_d_phi_w_h");



  TH1F *hbkg_met_pt = (TH1F*)inputfile_back->Get("h_met_pt");
  TH1F *hbkg_mt = (TH1F*)inputfile_back->Get("h_mt");
  TH1F *hbkg_d_phi_w_h = (TH1F*)inputfile_back->Get("h_d_phi_w_h");



  TH1F *hbkg_met_pt_h = (TH1F*)inputfile_back_h->Get("h_met_pt");
  TH1F *hbkg_mt_h = (TH1F*)inputfile_back_h->Get("h_mt");
  TH1F *hbkg_d_phi_w_h_h = (TH1F*)inputfile_back_h->Get("h_d_phi_w_h");



  TH1F *hbkg_met_pt_d = (TH1F*)inputfile_back_d->Get("h_met_pt");
  TH1F *hbkg_mt_d = (TH1F*)inputfile_back_d->Get("h_mt");
  TH1F *hbkg_d_phi_w_h_d = (TH1F*)inputfile_back_d->Get("h_d_phi_w_h");


  TH1F *hbkg_met_pt_w = (TH1F*)inputfile_back_w->Get("h_met_pt");
  TH1F *hbkg_mt_w = (TH1F*)inputfile_back_w->Get("h_mt");
  TH1F *hbkg_d_phi_w_h_w = (TH1F*)inputfile_back_w->Get("h_d_phi_w_h");



  TH1F *hsig_h_pt = (TH1F*)inputfile->Get("h_h_pt");
  TH1F *hsig_h_phi = (TH1F*)inputfile->Get("h_h_phi");
  TH1F *hsig_h_eta = (TH1F*)inputfile->Get("h_h_eta");
  TH1F *hsig_inv_m = (TH1F*)inputfile->Get("h_inv_m");
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
  TH1F *hbkg_w_pt = (TH1F*)inputfile_back->Get("h_w_pt");
  TH1F *hbkg_w_phi = (TH1F*)inputfile_back->Get("h_w_phi");
  TH1F *hbkg_w_eta = (TH1F*)inputfile_back->Get("h_w_eta");
  TH1F *hbkg_w_m = (TH1F*)inputfile_back->Get("h_w_m");
  TH1F *hbkg_dR_jet_muon = (TH1F*)inputfile_back->Get("h_dR_jet_muon");
  TH1F *hbkg_dR_jet_electron = (TH1F*)inputfile_back->Get("h_dR_jet_electron");



  TH1F *hbkg_h_pt_h = (TH1F*)inputfile_back_h->Get("h_h_pt");
  TH1F *hbkg_h_phi_h = (TH1F*)inputfile_back_h->Get("h_h_phi");
  TH1F *hbkg_h_eta_h = (TH1F*)inputfile_back_h->Get("h_h_eta");
  TH1F *hbkg_inv_m_h = (TH1F*)inputfile_back_h->Get("h_inv_m");
  TH1F *hbkg_w_pt_h = (TH1F*)inputfile_back_h->Get("h_w_pt");
  TH1F *hbkg_w_phi_h = (TH1F*)inputfile_back_h->Get("h_w_phi");
  TH1F *hbkg_w_eta_h = (TH1F*)inputfile_back_h->Get("h_w_eta");
  TH1F *hbkg_w_m_h = (TH1F*)inputfile_back_h->Get("h_w_m");
  TH1F *hbkg_dR_jet_muon_h = (TH1F*)inputfile_back_h->Get("h_dR_jet_muon");
  TH1F *hbkg_dR_jet_electron_h = (TH1F*)inputfile_back_h->Get("h_dR_jet_electron");



  TH1F *hbkg_h_pt_d = (TH1F*)inputfile_back_d->Get("h_h_pt");
  TH1F *hbkg_h_phi_d = (TH1F*)inputfile_back_d->Get("h_h_phi");
  TH1F *hbkg_h_eta_d = (TH1F*)inputfile_back_d->Get("h_h_eta");
  TH1F *hbkg_inv_m_d = (TH1F*)inputfile_back_d->Get("h_inv_m");
  TH1F *hbkg_w_pt_d = (TH1F*)inputfile_back_d->Get("h_w_pt");
  TH1F *hbkg_w_phi_d = (TH1F*)inputfile_back_d->Get("h_w_phi");
  TH1F *hbkg_w_eta_d = (TH1F*)inputfile_back_d->Get("h_w_eta");
  TH1F *hbkg_w_m_d = (TH1F*)inputfile_back_d->Get("h_w_m");
  TH1F *hbkg_dR_jet_muon_d = (TH1F*)inputfile_back_d->Get("h_dR_jet_muon");
  TH1F *hbkg_dR_jet_electron_d = (TH1F*)inputfile_back_d->Get("h_dR_jet_electron");



  TH1F *hbkg_h_pt_w = (TH1F*)inputfile_back_w->Get("h_h_pt");
  TH1F *hbkg_h_phi_w = (TH1F*)inputfile_back_w->Get("h_h_phi");
  TH1F *hbkg_h_eta_w = (TH1F*)inputfile_back_w->Get("h_h_eta");
  TH1F *hbkg_inv_m_w = (TH1F*)inputfile_back_w->Get("h_inv_m");
  TH1F *hbkg_w_pt_w = (TH1F*)inputfile_back_w->Get("h_w_pt");
  TH1F *hbkg_w_phi_w = (TH1F*)inputfile_back_w->Get("h_w_phi");
  TH1F *hbkg_w_eta_w = (TH1F*)inputfile_back_w->Get("h_w_eta");
  TH1F *hbkg_w_m_w = (TH1F*)inputfile_back_w->Get("h_w_m");
  TH1F *hbkg_dR_jet_muon_w = (TH1F*)inputfile_back_w->Get("h_dR_jet_muon");
  TH1F *hbkg_dR_jet_electron_w = (TH1F*)inputfile_back_w->Get("h_dR_jet_electron");



  TH1F *hsig_dR_jet_muon_after =(TH1F*)inputfile->Get("h_dR_jet_muon_after");
  TH1F *hsig_dR_jet_electron_after =(TH1F*)inputfile->Get("h_dR_jet_electron_after");
  TH1F *hsig_jet_mult = (TH1F*)inputfile->Get("h_jet_mult");
  TH1F *hsig_b_jet_mult = (TH1F*)inputfile->Get("h_b_jet_mult");



  TH1F *hbkg_dR_jet_muon_after =(TH1F*)inputfile_back->Get("h_dR_jet_muon_after");
  TH1F *hbkg_dR_jet_electron_after =(TH1F*)inputfile_back->Get("h_dR_jet_electron_after");
  TH1F *hbkg_jet_mult = (TH1F*)inputfile_back->Get("h_jet_mult");
  TH1F *hbkg_b_jet_mult = (TH1F*)inputfile_back->Get("h_b_jet_mult");



  TH1F *hbkg_dR_jet_muon_after_h = (TH1F*)inputfile_back_h->Get("h_dR_jet_muon_after");
  TH1F *hbkg_dR_jet_electron_after_h = (TH1F*)inputfile_back_h->Get("h_dR_jet_electron_after");
  TH1F *hbkg_jet_mult_h = (TH1F*)inputfile_back_h->Get("h_jet_mult");
  TH1F *hbkg_b_jet_mult_h = (TH1F*)inputfile_back_h->Get("h_b_jet_mult");



  TH1F *hbkg_dR_jet_muon_after_d = (TH1F*)inputfile_back_d->Get("h_dR_jet_muon_after");
  TH1F *hbkg_dR_jet_electron_after_d = (TH1F*)inputfile_back_d->Get("h_dR_jet_electron_after");
  TH1F *hbkg_jet_mult_d = (TH1F*)inputfile_back_d->Get("h_jet_mult");
  TH1F *hbkg_b_jet_mult_d = (TH1F*)inputfile_back_d->Get("h_b_jet_mult");



  TH1F *hbkg_dR_jet_muon_after_w = (TH1F*)inputfile_back_w->Get("h_dR_jet_muon_after");
  TH1F *hbkg_dR_jet_electron_after_w = (TH1F*)inputfile_back_w->Get("h_dR_jet_electron_after");
  TH1F *hbkg_jet_mult_w = (TH1F*)inputfile_back_w->Get("h_jet_mult");
  TH1F *hbkg_b_jet_mult_w = (TH1F*)inputfile_back_w->Get("h_b_jet_mult");



  TH1F *hsig_dR_av =(TH1F*)inputfile->Get("h_dR_av");
  TH1F *hbkg_dR_av =(TH1F*)inputfile_back->Get("h_dR_av");
  TH1F *hbkg_dR_av_h = (TH1F*)inputfile_back_h->Get("h_dR_av");
  TH1F *hbkg_dR_av_d = (TH1F*)inputfile_back_d->Get("h_dR_av");
  TH1F *hbkg_dR_av_w = (TH1F*)inputfile_back_w->Get("h_dR_av");



  TH1F *hsig_minDelta_m=(TH1F*)inputfile->Get("h_minDelta_m");
  TH1F *hbkg_minDelta_m=(TH1F*)inputfile_back->Get("h_minDelta_m");
  TH1F *hbkg_minDelta_m_h = (TH1F*)inputfile_back_h->Get("h_minDelta_m");
  TH1F *hbkg_minDelta_m_d = (TH1F*)inputfile_back_d->Get("h_minDelta_m");
  TH1F *hbkg_minDelta_m_w = (TH1F*)inputfile_back_w->Get("h_minDelta_m");



  TH1F *hsig_d_phi_j_E=(TH1F*)inputfile->Get("h_d_phi_j_E");
  TH1F *hbkg_d_phi_j_E=(TH1F*)inputfile_back->Get("h_d_phi_j_E");
  TH1F *hbkg_d_phi_j_E_h = (TH1F*)inputfile_back_h->Get("h_d_phi_j_E");
  TH1F *hbkg_d_phi_j_E_d = (TH1F*)inputfile_back_d->Get("h_d_phi_j_E");
  TH1F *hbkg_d_phi_j_E_w = (TH1F*)inputfile_back_w->Get("h_d_phi_j_E");


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

  TH1F *hbkg_Nbjets_after_h = (TH1F*)inputfile_back_h->Get("h_Nbjets_after");
  TH1F *hbkg_btag_0_h = (TH1F*)inputfile_back_h->Get("h_btag_0");
  TH1F *hbkg_btag_1_h = (TH1F*)inputfile_back_h->Get("h_btag_1");
  TH1F *hbkg_btag_2_h = (TH1F*)inputfile_back_h->Get("h_btag_2");
  TH1F *hbkg_btag_3_h = (TH1F*)inputfile_back_h->Get("h_btag_3");

  TH1F *hbkg_Nbjets_after_d = (TH1F*)inputfile_back_d->Get("h_Nbjets_after");
  TH1F *hbkg_btag_0_d = (TH1F*)inputfile_back_d->Get("h_btag_0");
  TH1F *hbkg_btag_1_d = (TH1F*)inputfile_back_d->Get("h_btag_1");
  TH1F *hbkg_btag_2_d = (TH1F*)inputfile_back_d->Get("h_btag_2");
  TH1F *hbkg_btag_3_d = (TH1F*)inputfile_back_d->Get("h_btag_3");

  TH1F *hbkg_Nbjets_after_w = (TH1F*)inputfile_back_w->Get("h_Nbjets_after");
  TH1F *hbkg_btag_0_w = (TH1F*)inputfile_back_w->Get("h_btag_0");
  TH1F *hbkg_btag_1_w = (TH1F*)inputfile_back_w->Get("h_btag_1");
  TH1F *hbkg_btag_2_w = (TH1F*)inputfile_back_w->Get("h_btag_2");
  TH1F *hbkg_btag_3_w = (TH1F*)inputfile_back_w->Get("h_btag_3");

  TH1F *hsig_jet_pt = (TH1F*)inputfile->Get("h_jet_pt");
  TH1F *hbkg_jet_pt = (TH1F*)inputfile_back->Get("h_jet_pt");
  TH1F *hbkg_jet_pt_h = (TH1F*)inputfile_back_h->Get("h_jet_pt");
  TH1F *hbkg_jet_pt_d = (TH1F*)inputfile_back_h->Get("h_jet_pt");
  TH1F *hbkg_jet_pt_w = (TH1F*)inputfile_back_w->Get("h_jet_pt");



  //muons
  //pt
  TCanvas *c_muons_pt = new TCanvas ("muons_pt","muons_pt",1000,1000);
  hbkg_mn_pt_w->SetLineColor(kGreen);
  hbkg_mn_pt_w->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt_w->Scale(1./hbkg_mn_pt_w->Integral());
  //hbkg_mn_pt_w->Draw("Ehist");

  hsig_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hsig_mn_pt->GetYaxis()->SetTitle("Entries");
  hsig_mn_pt->Scale(1./hsig_mn_pt->Integral());
  hsig_mn_pt->SetLineColor(kBlack);
  hbkg_mn_pt_h->Draw("Ehist");
  hsig_mn_pt->Draw("Ehist,sames");

  hbkg_mn_pt->SetLineColor(kRed);
  hbkg_mn_pt->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt->Draw("Ehist,sames");
  hbkg_mn_pt->Scale(1./hbkg_mn_pt->Integral());

  hbkg_mn_pt_d->SetLineColor(kYellow);
  hbkg_mn_pt_d->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt_d->Draw("Ehist,sames");
  hbkg_mn_pt_d->Scale(1./hbkg_mn_pt_d->Integral());

  hbkg_mn_pt_h->SetLineColor(kBlue);
  hbkg_mn_pt_h->GetXaxis()->SetTitle("Transverse Momentum (GeV/c)");
  hbkg_mn_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_mn_pt_h->Scale(1./hbkg_mn_pt_h->Integral());
  
  TLegend *leg_mn_pt = new TLegend(0.4,0.4,0.5,0.5);
  leg_mn_pt->AddEntry(hsig_mn_pt,"Signal","l");
  leg_mn_pt->AddEntry(hbkg_mn_pt,"TTbar_Semileptonic","l");
  leg_mn_pt->AddEntry(hbkg_mn_pt_d,"TTbar_Dileptonic","l");
  leg_mn_pt->AddEntry(hbkg_mn_pt_h,"TTbar_Hadronic","l");
  //leg_mn_pt->AddEntry(hbkg_mn_pt_w,"WJets_to_LNu","l");
  leg_mn_pt->Draw();

  //eta
  TCanvas *c_muons_eta = new TCanvas ("muons_eta","muons_eta",1000,1000);
  hsig_mn_eta->SetLineColor(kBlack);
  hbkg_mn_eta->SetLineColor(kRed);
  hbkg_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta->Scale(1./hbkg_mn_eta->Integral());
  hbkg_mn_eta->Draw("Ehist");

  hsig_mn_eta->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hsig_mn_eta->GetYaxis()->SetTitle("Entries");
  hsig_mn_eta->Scale(1./hsig_mn_eta->Integral());
  hsig_mn_eta->Draw("Ehist,sames");

  hbkg_mn_eta_h->SetLineColor(kBlue);
  hbkg_mn_eta_h->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta_h->Scale(1. / hbkg_mn_eta_h->Integral());
  hbkg_mn_eta_h->Draw("Ehist, sames");

  hbkg_mn_eta_d->SetLineColor(kYellow);
  hbkg_mn_eta_d->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta_d->Scale(1. / hbkg_mn_eta_d->Integral());
  hbkg_mn_eta_d->Draw("Ehist, sames");

  hbkg_mn_eta_w->SetLineColor(kGreen);
  hbkg_mn_eta_w->GetXaxis()->SetTitle("Muon Pseudorapidity");
  hbkg_mn_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_mn_eta_w->Scale(1. / hbkg_mn_eta_w->Integral());
  //hbkg_mn_eta_w->Draw("Ehist, sames");

  TLegend *leg_mn_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_mn_eta->AddEntry(hsig_mn_eta,"Signal","l");
  leg_mn_eta->AddEntry(hbkg_mn_eta, "TTbar_Semileptonic", "l");
  leg_mn_eta->AddEntry(hbkg_mn_eta_h, "TTbar_Hadronic", "l");
  leg_mn_eta->AddEntry(hbkg_mn_eta_d, "TTbar_Dileptonic", "l");
  //leg_mn_eta->AddEntry(hbkg_mn_eta_w, "WJets_to_LNu", "l");
  leg_mn_eta->Draw();

  //phi
  TCanvas *c_muons_phi = new TCanvas ("muons_phi","muons_phi",1000,1000);
  hbkg_mn_phi_h->SetLineColor(kBlue);
  hbkg_mn_phi_h->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi_h->Scale(1. / hbkg_mn_phi_h->Integral());
  hbkg_mn_phi_h->Draw("Ehist");

  hsig_mn_phi->SetLineColor(kBlack);
  hbkg_mn_phi->SetLineColor(kRed);
  hbkg_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi->Scale(1./hbkg_mn_phi->Integral());
  hbkg_mn_phi->Draw("Ehist,sames"); 
  hsig_mn_phi->GetXaxis()->SetTitle("Muon Phi");
  hsig_mn_phi->GetYaxis()->SetTitle("Entries");
  hsig_mn_phi->Scale(1./hsig_mn_phi->Integral());
  hsig_mn_phi->Draw("Ehist,sames"); 
  
  hbkg_mn_phi_d->SetLineColor(kYellow);
  hbkg_mn_phi_d->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi_d->Scale(1. / hbkg_mn_phi_d->Integral());
  hbkg_mn_phi_d->Draw("Ehist, sames");
  hbkg_mn_phi_w->SetLineColor(kGreen);

  hbkg_mn_phi_w->GetXaxis()->SetTitle("Muon Phi");
  hbkg_mn_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_mn_phi_w->Scale(1. / hbkg_mn_phi_w->Integral());
  //hbkg_mn_phi_w->Draw("Ehist, sames");

  TLegend *leg_mn_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_mn_phi->AddEntry(hsig_mn_phi,"Signal","l");
  leg_mn_phi->AddEntry(hbkg_mn_phi, "TTbar_Semileptonic", "l");
  leg_mn_phi->AddEntry(hbkg_mn_phi_h, "TTbar_Hadronic", "l");
  leg_mn_phi->AddEntry(hbkg_mn_phi_d, "TTbar_Dileptonic", "l");
  //leg_mn_phi->AddEntry(hbkg_mn_phi_w, "WJets_to_LNu", "l");
  leg_mn_phi->Draw();
  


  //electrons
  //pt
  TCanvas *c_electrons_pt = new TCanvas ("electrons_pt","electrons_pt",1000,1000);
  hbkg_en_pt_w->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt_w->Scale(1. / hbkg_en_pt_w->Integral());
  //hbkg_en_pt_w->Draw("Ehist");

  hsig_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hsig_en_pt->GetYaxis()->SetTitle("Entries");
  hsig_en_pt->Scale(1./hsig_en_pt->Integral());
  hsig_en_pt->SetLineColor(kBlack);
  hbkg_en_pt_h->Draw("Ehist");
  hsig_en_pt->Draw("Ehist,sames");

  hbkg_en_pt->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt->Scale(1./hbkg_en_pt->Integral());
  hbkg_en_pt->Draw("Ehist,sames");
  hbkg_en_pt->SetLineColor(kRed);

  hbkg_en_pt_h->SetLineColor(kBlue);
  hbkg_en_pt_h->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt_h->Scale(1. / hbkg_en_pt_h->Integral());
  

  hbkg_en_pt_d->SetLineColor(kYellow);
  hbkg_en_pt_d->GetXaxis()->SetTitle("Electron Transverse Momentum (GeV/c)");
  hbkg_en_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_en_pt_d->Scale(1. / hbkg_en_pt_d->Integral());
  hbkg_en_pt_d->Draw("Ehist, sames");
  hbkg_en_pt_w->SetLineColor(kGreen);

  TLegend *leg_en_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_en_pt->AddEntry(hsig_en_pt, "Signal", "l");
  leg_en_pt->AddEntry(hbkg_en_pt, "TTbar_Semileptonic", "l");
  leg_en_pt->AddEntry(hbkg_en_pt_h, "TTbar_Hadronic", "l");
  leg_en_pt->AddEntry(hbkg_en_pt_d, "TTbar_Dileptonic", "l");
  //leg_en_pt->AddEntry(hbkg_en_pt_w, "WJets_to_LNu", "l");
  leg_en_pt->Draw();

  //eta
  TCanvas *c_electrons_eta = new TCanvas ("electrons_eta","electrons_eta",1000,1000);
  hbkg_en_eta_h->SetLineColor(kBlue);
  hbkg_en_eta_h->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta_h->Scale(1. / hbkg_en_eta_h->Integral());
  hbkg_en_eta_h->Draw("Ehist");

  hsig_en_eta->SetLineColor(kBlack);
  hbkg_en_eta->SetLineColor(kRed);
  hbkg_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta->Scale(1./hbkg_en_eta->Integral());
  hbkg_en_eta->Draw("Ehist,sames");

  hsig_en_eta->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hsig_en_eta->GetYaxis()->SetTitle("Entries");
  hsig_en_eta->Scale(1./hsig_en_eta->Integral());
  hsig_en_eta->Draw("Ehist,sames");

  hbkg_en_eta_d->SetLineColor(kYellow);
  hbkg_en_eta_d->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta_d->Scale(1. / hbkg_en_eta_d->Integral());
  hbkg_en_eta_d->Draw("Ehist, sames");

  hbkg_en_eta_w->SetLineColor(kGreen);
  hbkg_en_eta_w->GetXaxis()->SetTitle("Electron Pseudorapidity");
  hbkg_en_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_en_eta_w->Scale(1. / hbkg_en_eta_w->Integral());
  //hbkg_en_eta_w->Draw("Ehist, sames");

  TLegend *leg_en_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_en_eta->AddEntry(hsig_en_eta, "Signal", "l");
  leg_en_eta->AddEntry(hbkg_en_eta, "TTbar_Semileptonic", "l");
  leg_en_eta->AddEntry(hbkg_en_eta_h, "TTbar_Hadronic", "l");
  leg_en_eta->AddEntry(hbkg_en_eta_d, "TTbar_Dileptonic", "l");
  //leg_en_eta->AddEntry(hbkg_en_eta_w, "WJets_to_LNu", "l");
  leg_en_eta->Draw();

  //phi
  TCanvas *c_electrons_phi = new TCanvas ("electrons_phi","electrons_phi",1000,1000);
  hsig_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hsig_en_phi->GetYaxis()->SetTitle("Entries");
  hsig_en_phi->Scale(1./hsig_en_phi->Integral());
  hsig_en_phi->Draw("Ehist");
  hsig_en_phi->SetLineColor(kBlack);

  hbkg_en_phi->SetLineColor(kRed);
  hbkg_en_phi->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi->Scale(1./hbkg_en_phi->Integral());
  hbkg_en_phi->Draw("Ehist,sames");  

  hbkg_en_phi_h->SetLineColor(kBlue);
  hbkg_en_phi_h->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi_h->Scale(1. / hbkg_en_phi_h->Integral());
  hbkg_en_phi_h->Draw("Ehist, sames");

  hbkg_en_phi_d->SetLineColor(kYellow);
  hbkg_en_phi_d->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi_d->Scale(1. / hbkg_en_phi_d->Integral());
  hbkg_en_phi_d->Draw("Ehist, sames");

  hbkg_en_phi_w->SetLineColor(kGreen);
  hbkg_en_phi_w->GetXaxis()->SetTitle("Electron Phi");
  hbkg_en_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_en_phi_w->Scale(1. / hbkg_en_phi_w->Integral());
  //hbkg_en_phi_w->Draw("Ehist, sames");

  TLegend *leg_en_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_en_phi->AddEntry(hsig_en_phi, "Signal", "l");
  leg_en_phi->AddEntry(hbkg_en_phi, "TTbar_Semileptonic", "l");
  leg_en_phi->AddEntry(hbkg_en_phi_h, "TTbar_Hadronic", "l");
  leg_en_phi->AddEntry(hbkg_en_phi_d, "TTbar_Dileptonic", "l");
  //leg_en_phi->AddEntry(hbkg_en_phi_w, "WJets_to_LNu", "l");
  leg_en_phi->Draw();



  //leptons
  //pt
  TCanvas *c_leptons_pt = new TCanvas ("leptons_pt","leptons_pt",1000,1000);
  hbkg_lep_pt->SetLineColor(kRed);
  hbkg_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt->Scale(1./hbkg_lep_pt->Integral());
  hbkg_lep_pt->Draw("Ehist");

  hsig_lep_pt->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hsig_lep_pt->GetYaxis()->SetTitle("Entries");
  hsig_lep_pt->Scale(1./hsig_lep_pt->Integral());
  hsig_lep_pt->SetLineColor(kBlack);
  hsig_lep_pt->Draw("Ehist,sames");

  hbkg_lep_pt_h->SetLineColor(kBlue);
  hbkg_lep_pt_h->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt_h->Scale(1. / hbkg_lep_pt_h->Integral());
  hbkg_lep_pt_h->Draw("Ehist, sames");

  hbkg_lep_pt_d->SetLineColor(kYellow);
  hbkg_lep_pt_d->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt_d->Scale(1. / hbkg_lep_pt_d->Integral());
  hbkg_lep_pt_d->Draw("Ehist, sames");

  hbkg_lep_pt_w->SetLineColor(kGreen);
  hbkg_lep_pt_w->GetXaxis()->SetTitle("Lepton Transverse Momentum (GeV/c)");
  hbkg_lep_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_lep_pt_w->Scale(1. / hbkg_lep_pt_w->Integral());
  //hbkg_lep_pt_w->Draw("Ehist, sames");

  TLegend *leg_lep_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_lep_pt->AddEntry(hsig_lep_pt, "Signal", "l");
  leg_lep_pt->AddEntry(hbkg_lep_pt, "TTbar_Semileptonic", "l");
  leg_lep_pt->AddEntry(hbkg_lep_pt_h, "TTbar_Hadronic", "l");
  leg_lep_pt->AddEntry(hbkg_lep_pt_d, "TTbar_Dileptonic", "l");
  //leg_lep_pt->AddEntry(hbkg_lep_pt_w, "WJets_to_LNu", "l");
  leg_lep_pt->Draw();

  //eta
  TCanvas *c_leptons_eta = new TCanvas("leptons_eta", "leptons_eta", 1000, 1000);
  hsig_lep_eta->SetLineColor(kBlack);
  hsig_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hsig_lep_eta->GetYaxis()->SetTitle("Entries");
  hsig_lep_eta->Scale(1. / hsig_lep_eta->Integral());
  hsig_lep_eta->Draw("Ehist");

  hbkg_lep_eta->SetLineColor(kRed);
  hbkg_lep_eta->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta->GetYaxis()->SetTitle("Entries");
  hbkg_lep_eta->Scale(1. / hbkg_lep_eta->Integral());
  hbkg_lep_eta->Draw("Ehist, sames");

  hbkg_lep_eta_h->SetLineColor(kBlue);
  hbkg_lep_eta_h->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_lep_eta_h->Scale(1. / hbkg_lep_eta_h->Integral());
  hbkg_lep_eta_h->Draw("Ehist, sames");

  hbkg_lep_eta_d->SetLineColor(kYellow);
  hbkg_lep_eta_d->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_lep_eta_d->Scale(1. / hbkg_lep_eta_d->Integral());
  hbkg_lep_eta_d->Draw("Ehist, sames");

  hbkg_lep_eta_w->SetLineColor(kGreen);
  hbkg_lep_eta_w->GetXaxis()->SetTitle("Lepton Pseudorapidity");
  hbkg_lep_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_lep_eta_w->Scale(1. / hbkg_lep_eta_w->Integral());
  //hbkg_lep_eta_w->Draw("Ehist, sames");

  TLegend *leg_lep_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_lep_eta->AddEntry(hsig_lep_eta, "Signal", "l");
  leg_lep_eta->AddEntry(hbkg_lep_eta, "TTbar_Semileptonic", "l");
  leg_lep_eta->AddEntry(hbkg_lep_eta_h, "TTbar_Hadronic", "l");
  leg_lep_eta->AddEntry(hbkg_lep_eta_d, "TTbar_Dileptonic", "l");
  //leg_lep_eta->AddEntry(hbkg_lep_eta_w, "WJets_to_LNu", "l");
  leg_lep_eta->Draw();

  //phi
  TCanvas *c_leptons_phi = new TCanvas("leptons_phi", "leptons_phi", 1000, 1000);
  hsig_lep_phi->SetLineColor(kBlack);
  hsig_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hsig_lep_phi->GetYaxis()->SetTitle("Entries");
  hsig_lep_phi->Scale(1. / hsig_lep_phi->Integral());
  hsig_lep_phi->Draw("Ehist");

  hbkg_lep_phi->SetLineColor(kRed);
  hbkg_lep_phi->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi->Scale(1. / hbkg_lep_phi->Integral());
  hbkg_lep_phi->Draw("Ehist, sames");

  hbkg_lep_phi_h->SetLineColor(kBlue);
  hbkg_lep_phi_h->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi_h->Scale(1. / hbkg_lep_phi_h->Integral());
  hbkg_lep_phi_h->Draw("Ehist, sames");

  hbkg_lep_phi_d->SetLineColor(kYellow);
  hbkg_lep_phi_d->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi_d->Scale(1. / hbkg_lep_phi_d->Integral());
  hbkg_lep_phi_d->Draw("Ehist, sames");

  hbkg_lep_phi_w->SetLineColor(kGreen);
  hbkg_lep_phi_w->GetXaxis()->SetTitle("Lepton Phi");
  hbkg_lep_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_lep_phi_w->Scale(1. / hbkg_lep_phi_w->Integral());
  //hbkg_lep_phi_w->Draw("Ehist, sames");

  TLegend *leg_lep_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_lep_phi->AddEntry(hsig_lep_phi, "Signal", "l");
  leg_lep_phi->AddEntry(hbkg_lep_phi, "TTbar_Semileptonic", "l");
  leg_lep_phi->AddEntry(hbkg_lep_phi_h, "TTbar_Hadronic", "l");
  leg_lep_phi->AddEntry(hbkg_lep_phi_d, "TTbar_Dileptonic", "l");
  //leg_lep_phi->AddEntry(hbkg_lep_phi_w, "WJets_to_LNu", "l");
  leg_lep_phi->Draw();
      


  //jets
  //pt
  TCanvas *c_jets_pt = new TCanvas("jets", "jets", 1000, 1000);
  hbkg_jet1_pt->SetLineColor(kRed);
  hbkg_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_jet1_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_pt->Scale(1. / hbkg_jet1_pt->Integral());
  hsig_jet1_pt->Draw("Ehist");
  hbkg_jet1_pt->Draw("Ehist, sames");

  
  hsig_jet1_pt->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hsig_jet1_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet1_pt->Scale(1. / hsig_jet1_pt->Integral());
  hsig_jet1_pt->SetLineColor(kBlack);

  hbkg_jet1_pt_h->SetLineColor(kBlue);
  hbkg_jet1_pt_h->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_jet1_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_pt_h->Scale(1. / hbkg_jet1_pt_h->Integral());
  hbkg_jet1_pt_h->Draw("Ehist, sames");

  hbkg_jet1_pt_d->SetLineColor(kYellow);
  hbkg_jet1_pt_d->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_jet1_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_pt_d->Scale(1. / hbkg_jet1_pt_d->Integral());
  hbkg_jet1_pt_d->Draw("Ehist, sames");

  hbkg_jet1_pt_w->SetLineColor(kGreen);
  hbkg_jet1_pt_w->GetXaxis()->SetTitle("Jet 1 Transverse Momentum (GeV/c)");
  hbkg_jet1_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_pt_w->Scale(1. / hbkg_jet1_pt_w->Integral());
  //hbkg_jet1_pt_w->Draw("Ehist, sames");

  TLegend *leg_jet1_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet1_pt->AddEntry(hsig_jet1_pt, "Signal", "l");
  leg_jet1_pt->AddEntry(hbkg_jet1_pt, "TTbar_Semileptonic", "l");
  leg_jet1_pt->AddEntry(hbkg_jet1_pt_h, "TTbar_Hadronic", "l");
  leg_jet1_pt->AddEntry(hbkg_jet1_pt_d, "TTbar_Dileptonic", "l");
  //leg_jet1_pt->AddEntry(hbkg_jet1_pt_w, "WJets_to_LNu", "l");
  leg_jet1_pt->Draw();
  
  
  TCanvas *c_b_jets_pt = new TCanvas("b-jets1_pt", "b-jets1_pt", 1000, 1000);
  hsig_b_jet1_pt->GetXaxis()->SetTitle("B-Jet 1 Transverse Momentum (GeV/c)");
  hsig_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_pt->Scale(1. / hsig_b_jet1_pt->Integral());
  hsig_b_jet1_pt->SetLineColor(kBlack);
  hsig_b_jet1_pt->Draw("Ehist");

  hbkg_b_jet1_pt->GetXaxis()->SetTitle("B-Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt->Scale(1. / hbkg_b_jet1_pt->Integral());
  hbkg_b_jet1_pt->SetLineColor(kRed);
  hbkg_b_jet1_pt->Draw("Ehist,sames");

  hbkg_b_jet1_pt_h->SetLineColor(kBlue);
  hbkg_b_jet1_pt_h->GetXaxis()->SetTitle("B-Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt_h->Scale(1. / hbkg_b_jet1_pt_h->Integral());
  hbkg_b_jet1_pt_h->Draw("Ehist, sames");

  hbkg_b_jet1_pt_d->SetLineColor(kYellow);
  hbkg_b_jet1_pt_d->GetXaxis()->SetTitle("B-Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt_d->Scale(1. / hbkg_b_jet1_pt_d->Integral());
  hbkg_b_jet1_pt_d->Draw("Ehist, sames");

  hbkg_b_jet1_pt_w->SetLineColor(kGreen);
  hbkg_b_jet1_pt_w->GetXaxis()->SetTitle("B-Jet 1 Transverse Momentum (GeV/c)");
  hbkg_b_jet1_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_pt_w->Scale(1. / hbkg_b_jet1_pt_w->Integral());
  //hbkg_b_jet1_pt_w->Draw("Ehist, sames");

  TLegend *leg_b_jet1_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet1_pt->AddEntry(hsig_b_jet1_pt, "Signal", "l");
  leg_b_jet1_pt->AddEntry(hbkg_b_jet1_pt, "TTbar_Semileptonic", "l");
  leg_b_jet1_pt->AddEntry(hbkg_b_jet1_pt_h, "TTbar_Hadronic", "l");
  leg_b_jet1_pt->AddEntry(hbkg_b_jet1_pt_d, "TTbar_Dileptonic", "l");
  //leg_b_jet1_pt->AddEntry(hbkg_b_jet1_pt_w, "WJets_to_LNu", "l");
  leg_b_jet1_pt->Draw();

  TCanvas *c_jets2_pt = new TCanvas("jets2_pt", "jets2_pt", 1000, 1000);
  hsig_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hsig_jet2_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet2_pt->Scale(1. / hsig_jet2_pt->Integral());
  hsig_jet2_pt->Draw("Ehist");
  hsig_jet2_pt->SetLineColor(kBlack);

  hbkg_jet2_pt->SetLineColor(kRed);
  hbkg_jet2_pt->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt->Scale(1. / hbkg_jet2_pt->Integral());
  hbkg_jet2_pt->SetLineColor(kRed);
  hbkg_jet2_pt->Draw("Ehist,sames");

  hbkg_jet2_pt_h->SetLineColor(kBlue);
  hbkg_jet2_pt_h->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt_h->Scale(1. / hbkg_jet2_pt_h->Integral());
  hbkg_jet2_pt_h->Draw("Ehist, sames");

  hbkg_jet2_pt_d->SetLineColor(kYellow);
  hbkg_jet2_pt_d->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt_d->Scale(1. / hbkg_jet2_pt_d->Integral());
  hbkg_jet2_pt_d->Draw("Ehist, sames");

  hbkg_jet2_pt_w->SetLineColor(kGreen);
  hbkg_jet2_pt_w->GetXaxis()->SetTitle("Jet 2 Transverse Momentum (GeV/c)");
  hbkg_jet2_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_pt_w->Scale(1. / hbkg_jet2_pt_w->Integral());
  //hbkg_jet2_pt_w->Draw("Ehist, sames");

  TLegend *leg_jet2_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet2_pt->AddEntry(hsig_jet2_pt, "Signal", "l");
  leg_jet2_pt->AddEntry(hbkg_jet2_pt, "TTbar_Semileptonic", "l");
  leg_jet2_pt->AddEntry(hbkg_jet2_pt_h, "TTbar_Hadronic", "l");
  leg_jet2_pt->AddEntry(hbkg_jet2_pt_d, "TTbar_Dileptonic", "l");
  //leg_jet2_pt->AddEntry(hbkg_jet2_pt_w, "WJets_to_LNu", "l");
  leg_jet2_pt->Draw();

  TCanvas *c_jets3_pt = new TCanvas("jets3_pt", "jets3_pt", 1000, 1000);
  hsig_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hsig_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet3_pt->Scale(1. / hsig_jet3_pt->Integral());
  hsig_jet3_pt->SetLineColor(kBlack);
  hsig_jet3_pt->Draw("Ehist");

  hbkg_jet3_pt->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt->Scale(1. / hbkg_jet3_pt->Integral());
  hbkg_jet3_pt->SetLineColor(kRed);
  hbkg_jet3_pt->Draw("Ehist,sames");

  hbkg_jet3_pt_h->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt_h->Scale(1. / hbkg_jet3_pt_h->Integral());
  hbkg_jet3_pt_h->SetLineColor(kBlue);
  hbkg_jet3_pt_h->Draw("Ehist,sames");

  hbkg_jet3_pt_d->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt_d->Scale(1. / hbkg_jet3_pt_d->Integral());
  hbkg_jet3_pt_d->SetLineColor(kYellow);
  hbkg_jet3_pt_d->Draw("Ehist,sames");

  hbkg_jet3_pt_w->GetXaxis()->SetTitle("Jet 3 Transverse Momentum (GeV/c)");
  hbkg_jet3_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_pt_w->Scale(1. / hbkg_jet3_pt_w->Integral());
  hbkg_jet3_pt_w->SetLineColor(kGreen);
  //hbkg_jet3_pt_w->Draw("Ehist,sames");

  TLegend *leg_jet3_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet3_pt->AddEntry(hsig_jet3_pt, "Signal", "l");
  leg_jet3_pt->AddEntry(hbkg_jet3_pt, "TTbar_Semileptonic", "l");
  leg_jet3_pt->AddEntry(hbkg_jet3_pt_h, "TTbar_Hadronic", "l");
  leg_jet3_pt->AddEntry(hbkg_jet3_pt_d, "TTbar_Dileptonic", "l");
  //leg_jet3_pt->AddEntry(hbkg_jet3_pt_w, "WJets_to_LNu", "l");
  leg_jet3_pt->Draw();

  TCanvas *c_b_jets3_pt = new TCanvas("b-jets3_pt", "b-jets3_pt", 1000, 1000);
  hsig_b_jet3_pt->GetXaxis()->SetTitle("BJet 3 Transverse Momentum (GeV/c)");
  hsig_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_pt->Scale(1. / hsig_b_jet3_pt->Integral());
  hsig_b_jet3_pt->SetLineColor(kBlack);
  hsig_b_jet3_pt->Draw("Ehist");

  hbkg_b_jet3_pt->GetXaxis()->SetTitle("BJet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt->Scale(1. / hbkg_b_jet3_pt->Integral());
  hbkg_b_jet3_pt->SetLineColor(kRed);
  hbkg_b_jet3_pt->Draw("Ehist,sames");

  hbkg_b_jet3_pt_h->GetXaxis()->SetTitle("BJet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt_h->Scale(1. / hbkg_b_jet3_pt_h->Integral());
  hbkg_b_jet3_pt_h->SetLineColor(kBlue);
  hbkg_b_jet3_pt_h->Draw("Ehist,sames");

  hbkg_b_jet3_pt_d->GetXaxis()->SetTitle("BJet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt_d->Scale(1. / hbkg_b_jet3_pt_d->Integral());
  hbkg_b_jet3_pt_d->SetLineColor(kYellow);
  hbkg_b_jet3_pt_d->Draw("Ehist,sames");

  hbkg_b_jet3_pt_w->GetXaxis()->SetTitle("BJet 3 Transverse Momentum (GeV/c)");
  hbkg_b_jet3_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_pt_w->Scale(1. / hbkg_b_jet3_pt_w->Integral());
  hbkg_b_jet3_pt_w->SetLineColor(kGreen);
  //hbkg_b_jet3_pt_w->Draw("Ehist,sames");

  TLegend *leg_b_jet3_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet3_pt->AddEntry(hsig_b_jet3_pt, "Signal", "l");
  leg_b_jet3_pt->AddEntry(hbkg_b_jet3_pt, "TTbar_Semileptonic", "l");
  leg_b_jet3_pt->AddEntry(hbkg_b_jet3_pt_h, "TTbar_Hadronic", "l");
  leg_b_jet3_pt->AddEntry(hbkg_b_jet3_pt_d, "TTbar_Dileptonic", "l");
  //leg_b_jet3_pt->AddEntry(hbkg_b_jet3_pt_w, "WJets_to_LNu", "l");
  leg_b_jet3_pt->Draw();

  TCanvas *c_jets4_pt = new TCanvas("jets4_pt", "jets4_pt", 1000, 1000);
  hsig_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet4_pt->Scale(1. / hsig_jet4_pt->Integral());
  hsig_jet4_pt->SetLineColor(kBlack);
  hsig_jet4_pt->Draw("Ehist");

  hbkg_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt->Scale(1. / hbkg_jet4_pt->Integral());
  hbkg_jet4_pt->SetLineColor(kRed);
  hbkg_jet4_pt->Draw("Ehist,sames");

  hbkg_jet4_pt_h->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt_h->Scale(1. / hbkg_jet4_pt_h->Integral());
  hbkg_jet4_pt_h->SetLineColor(kBlue);
  hbkg_jet4_pt_h->Draw("Ehist,sames");

  hbkg_jet4_pt_d->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt_d->Scale(1. / hbkg_jet4_pt_d->Integral());
  hbkg_jet4_pt_d->SetLineColor(kYellow);
  hbkg_jet4_pt_d->Draw("Ehist,sames");

  hbkg_jet4_pt_w->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_jet4_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_pt_w->Scale(1. / hbkg_jet4_pt_w->Integral());
  hbkg_jet4_pt_w->SetLineColor(kGreen);
  //hbkg_jet4_pt_w->Draw("Ehist,sames");

  TLegend *leg_jet4_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet4_pt->AddEntry(hsig_jet4_pt, "Signal", "l");
  leg_jet4_pt->AddEntry(hbkg_jet4_pt, "TTbar_Semileptonic", "l");
  leg_jet4_pt->AddEntry(hbkg_jet4_pt_h, "TTbar_Hadronic", "l");
  leg_jet4_pt->AddEntry(hbkg_jet4_pt_d, "TTbar_Dileptonic", "l");
  //leg_jet4_pt->AddEntry(hbkg_jet4_pt_w, "WJets_to_LNu", "l");
  leg_jet4_pt->Draw();

  TCanvas *c_b_jets4_pt = new TCanvas("b-jets4_pt", "b-jets_pt", 1000, 1000);
  hsig_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hsig_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_pt->Scale(1. / hsig_b_jet4_pt->Integral());
  hsig_b_jet4_pt->SetLineColor(kBlack);
  hsig_b_jet4_pt->Draw("Ehist");

  hbkg_b_jet4_pt->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt->Scale(1. / hbkg_b_jet4_pt->Integral());
  hbkg_b_jet4_pt->SetLineColor(kRed);
  hbkg_b_jet4_pt->Draw("Ehist,sames");

  hbkg_b_jet4_pt_h->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt_h->Scale(1. / hbkg_b_jet4_pt_h->Integral());
  hbkg_b_jet4_pt_h->SetLineColor(kBlue);
  hbkg_b_jet4_pt_h->Draw("Ehist,sames");

  hbkg_b_jet4_pt_d->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt_d->Scale(1. / hbkg_b_jet4_pt_d->Integral());
  hbkg_b_jet4_pt_d->SetLineColor(kYellow);
  hbkg_b_jet4_pt_d->Draw("Ehist,sames");

  hbkg_b_jet4_pt_w->GetXaxis()->SetTitle("Jet 4 Transverse Momentum (GeV/c)");
  hbkg_b_jet4_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_pt_w->Scale(1. / hbkg_b_jet4_pt_w->Integral());
  hbkg_b_jet4_pt_w->SetLineColor(kGreen);
  //hbkg_b_jet4_pt_w->Draw("Ehist,sames");

  TLegend *leg_b_jet4_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet4_pt->AddEntry(hsig_b_jet4_pt, "Signal", "l");
  leg_b_jet4_pt->AddEntry(hbkg_b_jet4_pt, "TTbar_Semileptonic", "l");
  leg_b_jet4_pt->AddEntry(hbkg_b_jet4_pt_h, "TTbar_Hadronic", "l");
  leg_b_jet4_pt->AddEntry(hbkg_b_jet4_pt_d, "TTbar_Dileptonic", "l");
  //leg_b_jet4_pt->AddEntry(hbkg_b_jet4_pt_w, "WJets_to_LNu", "l");
  leg_b_jet4_pt->Draw();

  //eta
  TCanvas *c_jets_eta = new TCanvas("jet pseudorapidity", "jet pseudorapidity", 1000, 1000);
  hsig_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hsig_jet1_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet1_eta->Scale(1. / hsig_jet1_eta->Integral());
  hsig_jet1_eta->SetLineColor(kBlack);
  hsig_jet1_eta->Draw("Ehist");

  hbkg_jet1_eta->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hbkg_jet1_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_eta->Scale(1. / hbkg_jet1_eta->Integral());
  hbkg_jet1_eta->SetLineColor(kRed);
  hbkg_jet1_eta->Draw("Ehist,sames");

  hbkg_jet1_eta_h->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hbkg_jet1_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_eta_h->Scale(1. / hbkg_jet1_eta_h->Integral());
  hbkg_jet1_eta_h->SetLineColor(kBlue);
  hbkg_jet1_eta_h->Draw("Ehist,sames");

  hbkg_jet1_eta_d->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hbkg_jet1_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_eta_d->Scale(1. / hbkg_jet1_eta_d->Integral());
  hbkg_jet1_eta_d->SetLineColor(kYellow);
  hbkg_jet1_eta_d->Draw("Ehist,sames");

  hbkg_jet1_eta_w->GetXaxis()->SetTitle("Jet 1 Pseudorapidity");
  hbkg_jet1_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_eta_w->Scale(1. / hbkg_jet1_eta_w->Integral());
  hbkg_jet1_eta_w->SetLineColor(kGreen);
  //hbkg_jet1_eta_w->Draw("Ehist,sames");

  TLegend *leg_jet1_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet1_eta->AddEntry(hsig_jet1_eta, "Signal", "l");
  leg_jet1_eta->AddEntry(hbkg_jet1_eta, "TTbar_Semileptonic", "l");
  leg_jet1_eta->AddEntry(hbkg_jet1_eta_h, "TTbar_Hadronic", "l");
  leg_jet1_eta->AddEntry(hbkg_jet1_eta_d, "TTbar_Dileptonic", "l");
  //leg_jet1_eta->AddEntry(hbkg_jet1_eta_w, "WJets_to_LNu", "l");
  leg_jet1_eta->Draw();

  TCanvas *c_b_jets_eta = new TCanvas("b-jet pseudorapidity", "b-jet pseudorapidity", 1000, 1000);
  hsig_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hsig_b_jet1_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_eta->Scale(1. / hsig_b_jet1_eta->Integral());
  hsig_b_jet1_eta->SetLineColor(kBlack);
  hsig_b_jet1_eta->Draw("Ehist");

  hbkg_b_jet1_eta->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_eta->Scale(1. / hbkg_b_jet1_eta->Integral());
  hbkg_b_jet1_eta->SetLineColor(kRed);
  hbkg_b_jet1_eta->Draw("Ehist,sames");

  hbkg_b_jet1_eta_h->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_eta_h->Scale(1. / hbkg_b_jet1_eta_h->Integral());
  hbkg_b_jet1_eta_h->SetLineColor(kBlue);
  hbkg_b_jet1_eta_h->Draw("Ehist,sames");

  hbkg_b_jet1_eta_d->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_eta_d->Scale(1. / hbkg_b_jet1_eta_d->Integral());
  hbkg_b_jet1_eta_d->SetLineColor(kYellow);
  hbkg_b_jet1_eta_d->Draw("Ehist,sames");

  hbkg_b_jet1_eta_w->GetXaxis()->SetTitle("bJet 1 Pseudorapidity");
  hbkg_b_jet1_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_eta_w->Scale(1. / hbkg_b_jet1_eta_w->Integral());
  hbkg_b_jet1_eta_w->SetLineColor(kGreen);
  //hbkg_b_jet1_eta_w->Draw("Ehist,sames");

  TLegend *leg_b_jet1_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet1_eta->AddEntry(hsig_b_jet1_eta, "Signal", "l");
  leg_b_jet1_eta->AddEntry(hbkg_b_jet1_eta, "TTbar_Semileptonic", "l");
  leg_b_jet1_eta->AddEntry(hbkg_b_jet1_eta_h, "TTbar_Hadronic", "l");
  leg_b_jet1_eta->AddEntry(hbkg_b_jet1_eta_d, "TTbar_Dileptonic", "l");
  //leg_b_jet1_eta->AddEntry(hbkg_b_jet1_eta_w, "WJets_to_LNu", "l");
  leg_b_jet1_eta->Draw();

  TCanvas *c_jets2_eta = new TCanvas("jet2 pseudorapidity", "jet2 pseudorapidity", 1000, 1000);
  hsig_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hsig_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet2_eta->Scale(1. / hsig_jet2_eta->Integral());
  hsig_jet2_eta->SetLineColor(kBlack);
  hsig_jet2_eta->Draw("Ehist");

  hbkg_jet2_eta->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta->Scale(1. / hbkg_jet2_eta->Integral());
  hbkg_jet2_eta->SetLineColor(kRed);
  hbkg_jet2_eta->Draw("Ehist,sames");

  hbkg_jet2_eta_h->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta_h->Scale(1. / hbkg_jet2_eta_h->Integral());
  hbkg_jet2_eta_h->SetLineColor(kBlue);
  hbkg_jet2_eta_h->Draw("Ehist,sames");

  hbkg_jet2_eta_d->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta_d->Scale(1. / hbkg_jet2_eta_d->Integral());
  hbkg_jet2_eta_d->SetLineColor(kYellow);
  hbkg_jet2_eta_d->Draw("Ehist,sames");

  hbkg_jet2_eta_w->GetXaxis()->SetTitle("Jet 2 Pseudorapidity");
  hbkg_jet2_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_eta_w->Scale(1. / hbkg_jet2_eta_w->Integral());
  hbkg_jet2_eta_w->SetLineColor(kGreen);
  //hbkg_jet2_eta_w->Draw("Ehist,sames");

  TLegend *leg_jet2_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet2_eta->AddEntry(hsig_jet2_eta, "Signal", "l");
  leg_jet2_eta->AddEntry(hbkg_jet2_eta, "TTbar_Semileptonic", "l");
  leg_jet2_eta->AddEntry(hbkg_jet2_eta_h, "TTbar_Hadronic", "l");
  leg_jet2_eta->AddEntry(hbkg_jet2_eta_d, "TTbar_Dileptonic", "l");
  //leg_jet2_eta->AddEntry(hbkg_jet2_eta_w, "WJets_to_LNu", "l");
  leg_jet2_eta->Draw();

  TCanvas *c_b_jets2_eta = new TCanvas("bjet2 pseudorapidity", "jet2 pseudorapidity", 1000, 1000);
  hsig_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hsig_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_eta->Scale(1. / hsig_jet2_eta->Integral());
  hsig_b_jet2_eta->SetLineColor(kBlack);
  hsig_b_jet2_eta->Draw("Ehist");

  hbkg_b_jet2_eta->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta->Scale(1. / hbkg_b_jet2_eta->Integral());
  hbkg_b_jet2_eta->SetLineColor(kRed);
  hbkg_b_jet2_eta->Draw("Ehist,sames");

  hbkg_b_jet2_eta_h->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta_h->Scale(1. / hbkg_b_jet2_eta_h->Integral());
  hbkg_b_jet2_eta_h->SetLineColor(kBlue);
  hbkg_b_jet2_eta_h->Draw("Ehist,sames");

  hbkg_b_jet2_eta_d->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta_d->Scale(1. / hbkg_b_jet2_eta_d->Integral());
  hbkg_b_jet2_eta_d->SetLineColor(kYellow);
  hbkg_b_jet2_eta_d->Draw("Ehist,sames");

  hbkg_b_jet2_eta_w->GetXaxis()->SetTitle("bJet 2 Pseudorapidity");
  hbkg_b_jet2_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_eta_w->Scale(1. / hbkg_b_jet2_eta_w->Integral());
  hbkg_b_jet2_eta_w->SetLineColor(kGreen);
  //hbkg_b_jet2_eta_w->Draw("Ehist,sames");

  TLegend *leg_b_jet2_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet2_eta->AddEntry(hsig_jet2_eta, "Signal", "l");
  leg_b_jet2_eta->AddEntry(hbkg_jet2_eta, "TTbar_Semileptonic", "l");
  leg_b_jet2_eta->AddEntry(hbkg_jet2_eta_h, "TTbar_Hadronic", "l");
  leg_b_jet2_eta->AddEntry(hbkg_jet2_eta_d, "TTbar_Dileptonic", "l");
  //leg_b_jet2_eta->AddEntry(hbkg_jet2_eta_w, "WJets_to_LNu", "l");
  leg_b_jet2_eta->Draw();

  TCanvas *c_jets3_eta = new TCanvas("jet3 pseudorapidity", "jet3 pseudorapidity", 1000, 1000);
  hsig_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hsig_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet3_eta->Scale(1. / hsig_jet3_eta->Integral());
  hsig_jet3_eta->SetLineColor(kBlack);
  hsig_jet3_eta->Draw("Ehist");

  hbkg_jet3_eta->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta->Scale(1. / hbkg_jet3_eta->Integral());
  hbkg_jet3_eta->SetLineColor(kRed);
  hbkg_jet3_eta->Draw("Ehist,sames");

  hbkg_jet3_eta_h->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta_h->Scale(1. / hbkg_jet3_eta_h->Integral());
  hbkg_jet3_eta_h->SetLineColor(kBlue);
  hbkg_jet3_eta_h->Draw("Ehist,sames");

  hbkg_jet3_eta_d->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta_d->Scale(1. / hbkg_jet3_eta_d->Integral());
  hbkg_jet3_eta_d->SetLineColor(kYellow);
  hbkg_jet3_eta_d->Draw("Ehist,sames");

  hbkg_jet3_eta_w->GetXaxis()->SetTitle("Jet 3 Pseudorapidity");
  hbkg_jet3_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_eta_w->Scale(1. / hbkg_jet3_eta_w->Integral());
  hbkg_jet3_eta_w->SetLineColor(kGreen);
  //hbkg_jet3_eta_w->Draw("Ehist,sames");

  TLegend *leg_jet3_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet3_eta->AddEntry(hsig_jet3_eta, "Signal", "l");
  leg_jet3_eta->AddEntry(hbkg_jet3_eta, "TTbar_Semileptonic", "l");
  leg_jet3_eta->AddEntry(hbkg_jet3_eta_h, "TTbar_Hadronic", "l");
  leg_jet3_eta->AddEntry(hbkg_jet3_eta_d, "TTbar_Dileptonic", "l");
  //leg_jet3_eta->AddEntry(hbkg_jet3_eta_w, "WJets_to_LNu", "l");
  leg_jet3_eta->Draw();

  TCanvas *c_b_jets3_eta = new TCanvas("bjet3 pseudorapidity", "jet3 pseudorapidity", 1000, 1000);
  hsig_b_jet3_eta->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hsig_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_eta->Scale(1. / hsig_jet3_eta->Integral());
  hsig_b_jet3_eta->SetLineColor(kBlack);
  hbkg_b_jet3_eta_d->Draw("Ehist");
  hsig_b_jet3_eta->Draw("Ehist,sames");

  hbkg_b_jet3_eta->GetXaxis()->SetTitle("Jbet 3 Pseudorapidity");
  hbkg_b_jet3_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_eta->Scale(1. / hbkg_jet3_eta->Integral());
  hbkg_b_jet3_eta->SetLineColor(kRed);
  hbkg_b_jet3_eta->Draw("Ehist,sames");

  hbkg_b_jet3_eta_h->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hbkg_b_jet3_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_eta_h->Scale(1. / hbkg_jet3_eta_h->Integral());
  hbkg_b_jet3_eta_h->SetLineColor(kBlue);
  hbkg_b_jet3_eta_h->Draw("Ehist,sames");

  hbkg_b_jet3_eta_d->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hbkg_b_jet3_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_eta_d->Scale(1. / hbkg_jet3_eta_d->Integral());
  hbkg_b_jet3_eta_d->SetLineColor(kYellow);
  

  hbkg_b_jet3_eta_w->GetXaxis()->SetTitle("bJet 3 Pseudorapidity");
  hbkg_b_jet3_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_eta_w->Scale(1. / hbkg_jet3_eta_w->Integral());
  hbkg_b_jet3_eta_w->SetLineColor(kGreen);
  //hbkg_b_jet3_eta_w->Draw("Ehist,sames");

  TLegend *leg_b_jet3_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet3_eta->AddEntry(hsig_jet3_eta, "Signal", "l");
  leg_b_jet3_eta->AddEntry(hbkg_jet3_eta, "TTbar_Semileptonic", "l");
  leg_b_jet3_eta->AddEntry(hbkg_jet3_eta_h, "TTbar_Hadronic", "l");
  leg_b_jet3_eta->AddEntry(hbkg_jet3_eta_d, "TTbar_Dileptonic", "l");
  //leg_b_jet3_eta->AddEntry(hbkg_jet3_eta_w, "WJets_to_LNu", "l");
  leg_b_jet3_eta->Draw();

  TCanvas *c_jets4_eta = new TCanvas("jet4 pseudorapidity", "jet4 pseudorapidity", 1000, 1000);
  hsig_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hsig_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_jet4_eta->Scale(1. / hsig_jet4_eta->Integral());
  hsig_jet4_eta->SetLineColor(kBlack);
  hsig_jet4_eta->Draw("Ehist");

  hbkg_jet4_eta->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta->Scale(1. / hbkg_jet4_eta->Integral());
  hbkg_jet4_eta->SetLineColor(kRed);
  hbkg_jet4_eta->Draw("Ehist,sames");

  hbkg_jet4_eta_h->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta_h->Scale(1. / hbkg_jet4_eta_h->Integral());
  hbkg_jet4_eta_h->SetLineColor(kBlue);
  hbkg_jet4_eta_h->Draw("Ehist,sames");

  hbkg_jet4_eta_d->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta_d->Scale(1. / hbkg_jet4_eta_d->Integral());
  hbkg_jet4_eta_d->SetLineColor(kYellow);
  hbkg_jet4_eta_d->Draw("Ehist,sames");

  hbkg_jet4_eta_w->GetXaxis()->SetTitle("Jet 4 Pseudorapidity");
  hbkg_jet4_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_eta_w->Scale(1. / hbkg_jet4_eta_w->Integral());
  hbkg_jet4_eta_w->SetLineColor(kGreen);
  //hbkg_jet4_eta_w->Draw("Ehist,sames");

  TLegend *leg_jet4_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet4_eta->AddEntry(hsig_jet4_eta, "Signal", "l");
  leg_jet4_eta->AddEntry(hbkg_jet4_eta, "TTbarSemileptonic", "l");
  leg_jet4_eta->AddEntry(hbkg_jet4_eta_h, "TTbar_Hadronic", "l");
  leg_jet4_eta->AddEntry(hbkg_jet4_eta_d, "TTbar_Dileptonic", "l");
  //leg_jet4_eta->AddEntry(hbkg_jet4_eta_w, "WJets_to_LNu", "l");
  leg_jet4_eta->Draw();

  TCanvas *c_b_jets4_eta = new TCanvas("b-jet4 pseudorapidity", "b-jet4 pseudorapidity", 1000, 1000);
  hsig_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hsig_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_eta->Scale(1. / hsig_b_jet4_eta->Integral());
  hsig_b_jet4_eta->SetLineColor(kBlack);
  hsig_b_jet4_eta->Draw("Ehist");

  hbkg_b_jet4_eta->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_eta->Scale(1. / hbkg_b_jet4_eta->Integral());
  hbkg_b_jet4_eta->SetLineColor(kRed);
  hbkg_b_jet4_eta->Draw("Ehist,sames");

  hbkg_b_jet4_eta_h->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_eta_h->Scale(1. / hbkg_b_jet4_eta_h->Integral());
  hbkg_b_jet4_eta_h->SetLineColor(kBlue);
  hbkg_b_jet4_eta_h->Draw("Ehist,sames");

  hbkg_b_jet4_eta_d->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_eta_d->Scale(1. / hbkg_b_jet4_eta_d->Integral());
  hbkg_b_jet4_eta_d->SetLineColor(kYellow);
  hbkg_b_jet4_eta_d->Draw("Ehist,sames");

  hbkg_b_jet4_eta_w->GetXaxis()->SetTitle("bJet 4 Pseudorapidity");
  hbkg_b_jet4_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_eta_w->Scale(1. / hbkg_b_jet4_eta_w->Integral());
  hbkg_b_jet4_eta_w->SetLineColor(kGreen);
  //hbkg_b_jet4_eta_w->Draw("Ehist,sames");

  TLegend *leg_b_jet4_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet4_eta->AddEntry(hsig_b_jet4_eta, "Signal", "l");
  leg_b_jet4_eta->AddEntry(hbkg_b_jet4_eta, "TTbarSemileptonic", "l");
  leg_b_jet4_eta->AddEntry(hbkg_b_jet4_eta_h, "TTbar_Hadronic", "l");
  leg_b_jet4_eta->AddEntry(hbkg_b_jet4_eta_d, "TTbar_Dileptonic", "l");
  //leg_b_jet4_eta->AddEntry(hbkg_b_jet4_eta_w, "WJets_to_LNu", "l");
  leg_b_jet4_eta->Draw();



  //phi
  TCanvas *c_jets_phi = new TCanvas("jets_phi", "jets_phi", 1000, 1000);
  hsig_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hsig_jet1_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet1_phi->Scale(1. / hsig_jet1_phi->Integral());
  hsig_jet1_phi->SetLineColor(kBlack);
  hsig_jet1_phi->Draw("Ehist");

  hbkg_jet1_phi->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi->Scale(1. / hbkg_jet1_phi->Integral());
  hbkg_jet1_phi->SetLineColor(kRed);
  hbkg_jet1_phi->Draw("Ehist,sames");

  hbkg_jet1_phi_h->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi_h->Scale(1. / hbkg_jet1_phi_h->Integral());
  hbkg_jet1_phi_h->SetLineColor(kBlue);
  hbkg_jet1_phi_h->Draw("Ehist,sames");

  hbkg_jet1_phi_d->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi_d->Scale(1. / hbkg_jet1_phi_d->Integral());
  hbkg_jet1_phi_d->SetLineColor(kYellow);
  hbkg_jet1_phi_d->Draw("Ehist,sames");

  hbkg_jet1_phi_w->GetXaxis()->SetTitle("Jet 1 Phi");
  hbkg_jet1_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet1_phi_w->Scale(1. / hbkg_jet1_phi_w->Integral());
  hbkg_jet1_phi_w->SetLineColor(kGreen);
  //hbkg_jet1_phi_w->Draw("Ehist,sames");

  TLegend *leg_jet1_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet1_phi->AddEntry(hsig_jet1_phi, "Signal", "l");
  leg_jet1_phi->AddEntry(hbkg_jet1_phi, "TTbarSemileptonic", "l");
  leg_jet1_phi->AddEntry(hbkg_jet1_phi_h, "TTbar_Hadronic", "l");
  leg_jet1_phi->AddEntry(hbkg_jet1_phi_d, "TTbar_Dileptonic", "l");
  //leg_jet1_phi->AddEntry(hbkg_jet1_phi_w, "WJets_to_LNu", "l");
  leg_jet1_phi->Draw();

  TCanvas *c_b_jets_phi = new TCanvas("b-jets_phi", "b-jets_phi", 1000, 1000);
  hsig_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hsig_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet1_phi->SetLineColor(kBlack);
  hsig_b_jet1_phi->Draw("Ehist");

  hbkg_b_jet1_phi->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi->SetLineColor(kRed);
  hbkg_b_jet1_phi->Scale(1. / hbkg_b_jet1_phi->Integral());
  hbkg_b_jet1_phi->Draw("Ehist,sames");

  hbkg_b_jet1_phi_h->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi_h->Scale(1. / hbkg_b_jet1_phi_h->Integral());
  hbkg_b_jet1_phi_h->SetLineColor(kBlue);
  hbkg_b_jet1_phi_h->Draw("Ehist,sames");

  hbkg_b_jet1_phi_d->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi_d->Scale(1. / hbkg_b_jet1_phi_d->Integral());
  hbkg_b_jet1_phi_d->SetLineColor(kYellow);
  hbkg_b_jet1_phi_d->Draw("Ehist,sames");

  hbkg_b_jet1_phi_w->GetXaxis()->SetTitle("bJet 1 Phi");
  hbkg_b_jet1_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet1_phi_w->Scale(1. / hbkg_b_jet1_phi_w->Integral());
  hbkg_b_jet1_phi_w->SetLineColor(kGreen);
  //hbkg_b_jet1_phi_w->Draw("Ehist,sames");

  TLegend *leg_b_jet1_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet1_phi->AddEntry(hsig_b_jet1_phi, "Signal", "l");
  leg_b_jet1_phi->AddEntry(hbkg_b_jet1_phi, "TTbarSemileptonic", "l");
  leg_b_jet1_phi->AddEntry(hbkg_b_jet1_phi_h, "TTbar_Hadronic", "l");
  leg_b_jet1_phi->AddEntry(hbkg_b_jet1_phi_d, "TTbar_Dileptonic", "l");
  //leg_b_jet1_phi->AddEntry(hbkg_b_jet1_phi_w, "WJets_to_LNu", "l");
  leg_b_jet1_phi->Draw();

  TCanvas *c_jets2_phi = new TCanvas("jets2_phi", "jets2_phi", 1000, 1000);
  hsig_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hsig_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet2_phi->Scale(1. / hsig_jet2_phi->Integral());
  hsig_jet2_phi->SetLineColor(kBlack);
  hsig_jet2_phi->Draw("Ehist");

  hbkg_jet2_phi->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_phi->SetLineColor(kRed);
  hbkg_jet2_phi->Scale(1. / hbkg_jet2_phi->Integral());
  hbkg_jet2_phi->Draw("Ehist,sames");

  hbkg_jet2_phi_h->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_phi_h->Scale(1. / hbkg_jet2_phi_h->Integral());
  hbkg_jet2_phi_h->SetLineColor(kBlue);
  hbkg_jet2_phi_h->Draw("Ehist,sames");

  hbkg_jet2_phi_d->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_phi_d->Scale(1. / hbkg_jet2_phi_d->Integral());
  hbkg_jet2_phi_d->SetLineColor(kYellow);
  hbkg_jet2_phi_d->Draw("Ehist,sames");

  hbkg_jet2_phi_w->GetXaxis()->SetTitle("Jet 2 Phi");
  hbkg_jet2_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet2_phi_w->Scale(1. / hbkg_jet2_phi_w->Integral());
  hbkg_jet2_phi_w->SetLineColor(kGreen);
  //hbkg_jet2_phi_w->Draw("Ehist,sames");

  TLegend *leg_jet2_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet2_phi->AddEntry(hsig_jet2_phi, "Signal", "l");
  leg_jet2_phi->AddEntry(hbkg_jet2_phi, "TTbarSemileptonic", "l");
  leg_jet2_phi->AddEntry(hbkg_jet2_phi_h, "TTbar_Hadronic", "l");
  leg_jet2_phi->AddEntry(hbkg_jet2_phi_d, "TTbar_Dileptonic", "l");
  //leg_jet2_phi->AddEntry(hbkg_jet2_phi_w, "WJets_to_LNu", "l");
  leg_jet2_phi->Draw();

  TCanvas *c_b_jets2_phi = new TCanvas("b-jets2_phi", "b-jets2_phi", 1000, 1000);
  hsig_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hsig_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet2_phi->Scale(1. / hsig_b_jet2_phi->Integral());
  hsig_b_jet2_phi->SetLineColor(kBlack);
  hsig_b_jet2_phi->Draw("Ehist");

  hbkg_b_jet2_phi->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi->SetLineColor(kRed);
  hbkg_b_jet2_phi->Scale(1. / hbkg_b_jet2_phi->Integral());
  hbkg_b_jet2_phi->Draw("Ehist,sames");

  hbkg_b_jet2_phi_h->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi_h->Scale(1. / hbkg_b_jet2_phi_h->Integral());
  hbkg_b_jet2_phi_h->SetLineColor(kBlue);
  hbkg_b_jet2_phi_h->Draw("Ehist,sames");

  hbkg_b_jet2_phi_d->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi_d->Scale(1. / hbkg_b_jet2_phi_d->Integral());
  hbkg_b_jet2_phi_d->SetLineColor(kYellow);
  hbkg_b_jet2_phi_d->Draw("Ehist,sames");

  hbkg_b_jet2_phi_w->GetXaxis()->SetTitle("bJet 2 Phi");
  hbkg_b_jet2_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet2_phi_w->Scale(1. / hbkg_b_jet2_phi_w->Integral());
  hbkg_b_jet2_phi_w->SetLineColor(kGreen);
  //hbkg_b_jet2_phi_w->Draw("Ehist,sames");

  TLegend *leg_b_jet2_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet2_phi->AddEntry(hsig_b_jet2_phi, "Signal", "l");
  leg_b_jet2_phi->AddEntry(hbkg_b_jet2_phi, "TTbarSemileptonic", "l");
  leg_b_jet2_phi->AddEntry(hbkg_b_jet2_phi_h, "TTbar_Hadronic", "l");
  leg_b_jet2_phi->AddEntry(hbkg_b_jet2_phi_d, "TTbar_Dileptonic", "l");
  //leg_b_jet2_phi->AddEntry(hbkg_b_jet2_phi_w, "WJets_to_LNu", "l");
  leg_b_jet2_phi->Draw();

  TCanvas *c_jets3_phi = new TCanvas("jets3_phi", "jets3_phi", 1000, 1000);
  hsig_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hsig_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet3_phi->Scale(1. / hsig_jet3_phi->Integral());
  hsig_jet3_phi->SetLineColor(kBlack);
  hsig_jet3_phi->Draw("Ehist");

  hbkg_jet3_phi->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi->SetLineColor(kRed);
  hbkg_jet3_phi->Scale(1. / hbkg_jet3_phi->Integral());
  hbkg_jet3_phi->Draw("Ehist,sames");

  hbkg_jet3_phi_h->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi_h->Scale(1. / hbkg_jet3_phi_h->Integral());
  hbkg_jet3_phi_h->SetLineColor(kBlue);
  hbkg_jet3_phi_h->Draw("Ehist,sames");

  hbkg_jet3_phi_d->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi_d->Scale(1. / hbkg_jet3_phi_d->Integral());
  hbkg_jet3_phi_d->SetLineColor(kYellow);
  hbkg_jet3_phi_d->Draw("Ehist,sames");

  hbkg_jet3_phi_w->GetXaxis()->SetTitle("Jet 3 Phi");
  hbkg_jet3_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet3_phi_w->Scale(1. / hbkg_jet3_phi_w->Integral());
  hbkg_jet3_phi_w->SetLineColor(kGreen);
  //hbkg_jet3_phi_w->Draw("Ehist,sames");

  TLegend *leg_jet3_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet3_phi->AddEntry(hsig_jet3_phi, "Signal", "l");
  leg_jet3_phi->AddEntry(hbkg_jet3_phi, "TTbarSemileptonic", "l");
  leg_jet3_phi->AddEntry(hbkg_jet3_phi_h, "TTbar_Hadronic", "l");
  leg_jet3_phi->AddEntry(hbkg_jet3_phi_d, "TTbar_Dileptonic", "l");
  //leg_jet3_phi->AddEntry(hbkg_jet3_phi_w, "WJets_to_LNu", "l");
  leg_jet3_phi->Draw();

  TCanvas *c_b_jets3_phi = new TCanvas("b-jets3_phi", "b-jets3_phi", 1000, 1000);
  hsig_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hsig_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet3_phi->Scale(1. / hsig_b_jet3_phi->Integral());
  hsig_b_jet3_phi->SetLineColor(kBlack);
  hsig_b_jet3_phi->Draw("Ehist");

  hbkg_b_jet3_phi->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_phi->SetLineColor(kRed);
  hbkg_b_jet3_phi->Scale(1. / hbkg_b_jet3_phi->Integral());
  hbkg_b_jet3_phi->Draw("Ehist,sames");

  hbkg_b_jet3_phi_h->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_phi_h->Scale(1. / hbkg_b_jet3_phi_h->Integral());
  hbkg_b_jet3_phi_h->SetLineColor(kBlue);
  hbkg_b_jet3_phi_h->Draw("Ehist,sames");

  hbkg_b_jet3_phi_d->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_phi_d->Scale(1. / hbkg_b_jet3_phi_d->Integral());
  hbkg_b_jet3_phi_d->SetLineColor(kYellow);
  hbkg_b_jet3_phi_d->Draw("Ehist,sames");

  hbkg_b_jet3_phi_w->GetXaxis()->SetTitle("bJet 3 Phi");
  hbkg_b_jet3_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet3_phi_w->Scale(1. / hbkg_b_jet3_phi_w->Integral());
  hbkg_b_jet3_phi_w->SetLineColor(kGreen);
  //hbkg_b_jet3_phi_w->Draw("Ehist,sames");

  TLegend *leg_b_jet3_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet3_phi->AddEntry(hsig_b_jet3_phi, "Signal", "l");
  leg_b_jet3_phi->AddEntry(hbkg_b_jet3_phi, "TTbarSemileptonic", "l");
  leg_b_jet3_phi->AddEntry(hbkg_b_jet3_phi_h, "TTbar_Hadronic", "l");
  leg_b_jet3_phi->AddEntry(hbkg_b_jet3_phi_d, "TTbar_Dileptonic", "l");
  //leg_b_jet3_phi->AddEntry(hbkg_b_jet3_phi_w, "WJets_to_LNu", "l");
  leg_b_jet3_phi->Draw();

  TCanvas *c_jets4_phi = new TCanvas("jets4_phi", "jets4_phi", 1000, 1000);
  hsig_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hsig_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_jet4_phi->Scale(1. / hsig_jet4_phi->Integral());
  hsig_jet4_phi->SetLineColor(kBlack);
  hsig_jet4_phi->Draw("Ehist");

  hbkg_jet4_phi->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi->SetLineColor(kRed);
  hbkg_jet4_phi->Scale(1. / hbkg_jet4_phi->Integral());
  hbkg_jet4_phi->Draw("Ehist,sames");

  hbkg_jet4_phi_h->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi_h->Scale(1. / hbkg_jet4_phi_h->Integral());
  hbkg_jet4_phi_h->SetLineColor(kBlue);
  hbkg_jet4_phi_h->Draw("Ehist,sames");

  hbkg_jet4_phi_d->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi_d->Scale(1. / hbkg_jet4_phi_d->Integral());
  hbkg_jet4_phi_d->SetLineColor(kYellow);
  hbkg_jet4_phi_d->Draw("Ehist,sames");

  hbkg_jet4_phi_w->GetXaxis()->SetTitle("Jet 4 Phi");
  hbkg_jet4_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet4_phi_w->Scale(1. / hbkg_jet4_phi_w->Integral());
  //hbkg_jet4_phi_w->SetLineColor(kGreen);
  hbkg_jet4_phi_w->Draw("Ehist,sames");

  TLegend *leg_jet4_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet4_phi->AddEntry(hsig_jet4_phi, "Signal", "l");
  leg_jet4_phi->AddEntry(hbkg_jet4_phi, "TTbarSemileptonic", "l");
  leg_jet4_phi->AddEntry(hbkg_jet4_phi_h, "TTbar_Hadronic", "l");
  leg_jet4_phi->AddEntry(hbkg_jet4_phi_d, "TTbar_Dileptonic", "l");
  //leg_jet4_phi->AddEntry(hbkg_jet4_phi_w, "WJets_to_LNu", "l");
  leg_jet4_phi->Draw();

  TCanvas *c_b_jets4_phi = new TCanvas("b-jets4_phi", "b-jets4_phi", 1000, 1000);
  hsig_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hsig_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hsig_b_jet4_phi->Scale(1. / hsig_b_jet4_phi->Integral());
  hsig_b_jet4_phi->SetLineColor(kBlack);
  hsig_b_jet4_phi->Draw("Ehist");

  hbkg_b_jet4_phi->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_phi->SetLineColor(kRed);
  hbkg_b_jet4_phi->Scale(1. / hbkg_b_jet4_phi->Integral());
  hbkg_b_jet4_phi->Draw("Ehist,sames");

  hbkg_b_jet4_phi_h->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_phi_h->Scale(1. / hbkg_b_jet4_phi_h->Integral());
  hbkg_b_jet4_phi_h->SetLineColor(kBlue);
  hbkg_b_jet4_phi_h->Draw("Ehist,sames");

  hbkg_b_jet4_phi_d->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_phi_d->Scale(1. / hbkg_b_jet4_phi_d->Integral());
  hbkg_b_jet4_phi_d->SetLineColor(kYellow);
  hbkg_b_jet4_phi_d->Draw("Ehist,sames");

  hbkg_b_jet4_phi_w->GetXaxis()->SetTitle("bJet 4 Phi");
  hbkg_b_jet4_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet4_phi_w->Scale(1. / hbkg_b_jet4_phi_w->Integral());
  hbkg_b_jet4_phi_w->SetLineColor(kGreen);
  //hbkg_b_jet4_phi_w->Draw("Ehist,sames");

  TLegend *leg_b_jet4_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet4_phi->AddEntry(hsig_b_jet4_phi, "Signal", "l");
  leg_b_jet4_phi->AddEntry(hbkg_b_jet4_phi, "TTbarSemileptonic", "l");
  leg_b_jet4_phi->AddEntry(hbkg_b_jet4_phi_h, "TTbar_Hadronic", "l");
  leg_b_jet4_phi->AddEntry(hbkg_b_jet4_phi_d, "TTbar_Dileptonic", "l");
  //leg_b_jet4_phi->AddEntry(hbkg_b_jet4_phi_w, "WJets_to_LNu", "l");
  leg_b_jet4_phi->Draw();

  

  // MET
  TCanvas *c_MET = new TCanvas("MET", "MET", 1000, 1000);
  hsig_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hsig_met_pt->GetYaxis()->SetTitle("Entries");
  hsig_met_pt->Scale(1. / hsig_met_pt->Integral());
  hsig_met_pt->SetLineColor(kBlack);
  hbkg_met_pt_h->Draw("Ehist");
  hsig_met_pt->Draw("Ehist,sames");

  hbkg_met_pt->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt->SetLineColor(kRed);
  hbkg_met_pt->Scale(1. / hbkg_met_pt->Integral());
  hbkg_met_pt->Draw("Ehist,sames");

  hbkg_met_pt_h->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt_h->SetLineColor(kBlue);
  hbkg_met_pt_h->Scale(1. / hbkg_met_pt_h->Integral());
  

  hbkg_met_pt_d->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt_d->SetLineColor(kYellow);
  hbkg_met_pt_d->Scale(1. / hbkg_met_pt_d->Integral());
  hbkg_met_pt_d->Draw("Ehist,sames");

  hbkg_met_pt_w->GetXaxis()->SetTitle("MET Transverse Momentum (GeV)");
  hbkg_met_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_met_pt_w->SetLineColor(kGreen);
  hbkg_met_pt_w->Scale(1. / hbkg_met_pt_w->Integral());
  //hbkg_met_pt_w->Draw("Ehist,sames");

  TLegend *leg_MET = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_MET->AddEntry(hsig_met_pt, "Signal", "l");
  leg_MET->AddEntry(hbkg_met_pt, "TTbarSemileptonic", "l");
  leg_MET->AddEntry(hbkg_met_pt_h, "TTbar_Hadronic", "l");
  leg_MET->AddEntry(hbkg_met_pt_d, "TTbar_Dileptonic", "l");
  //leg_MET->AddEntry(hbkg_met_pt_w, "WJets_to_LNu", "l");
  leg_MET->Draw();

  // MT
  TCanvas *c_Mt = new TCanvas("MT", "MT", 1000, 1000);
  hsig_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hsig_mt->GetYaxis()->SetTitle("Entries");
  hsig_mt->Scale(1. / hsig_mt->Integral());
  hsig_mt->SetLineColor(kBlack);
  hbkg_mt_h->Draw("Ehist");
  hsig_mt->Draw("Ehist,sames");

  hbkg_mt->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt->GetYaxis()->SetTitle("Entries");
  hbkg_mt->SetLineColor(kRed);
  hbkg_mt->Scale(1. / hbkg_mt->Integral());
  hbkg_mt->Draw("Ehist,sames");

  hbkg_mt_h->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt_h->GetYaxis()->SetTitle("Entries");
  hbkg_mt_h->SetLineColor(kBlue);
  hbkg_mt_h->Scale(1. / hbkg_mt_h->Integral());
  

  hbkg_mt_d->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt_d->GetYaxis()->SetTitle("Entries");
  hbkg_mt_d->SetLineColor(kYellow);
  hbkg_mt_d->Scale(1. / hbkg_mt_d->Integral());
  hbkg_mt_d->Draw("Ehist,sames");

  hbkg_mt_w->GetXaxis()->SetTitle("Transverse Mass (GeV)");
  hbkg_mt_w->GetYaxis()->SetTitle("Entries");
  hbkg_mt_w->SetLineColor(kGreen);
  hbkg_mt_w->Scale(1. / hbkg_mt_w->Integral());
  //hbkg_mt_w->Draw("Ehist,sames");

  TLegend *leg_mt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_mt->AddEntry(hsig_mt, "Signal", "l");
  leg_mt->AddEntry(hbkg_mt, "TTbarSemileptonic", "l");
  leg_mt->AddEntry(hbkg_mt_h, "TTbar_Hadronic", "l");
  leg_mt->AddEntry(hbkg_mt_d, "TTbar_Dileptonic", "l");
  //leg_mt->AddEntry(hbkg_mt_w, "WJets_to_LNu", "l");
  leg_mt->Draw();



  //d_phi W and H bosons 
  // W_H
  TCanvas *c_w_h = new TCanvas("w_h", "w_h", 1000, 1000);
  hsig_d_phi_w_h->GetXaxis()->SetTitle("W_H Delta Phi");
  hsig_d_phi_w_h->GetYaxis()->SetTitle("Entries");
  hsig_d_phi_w_h->Scale(1. / hsig_d_phi_w_h->Integral());
  hsig_d_phi_w_h->SetLineColor(kBlack);
  hsig_d_phi_w_h->Draw("Ehist");

  hbkg_d_phi_w_h->GetXaxis()->SetTitle("W_H Delta Phi");
  hbkg_d_phi_w_h->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_w_h->SetStats(11111);
  hbkg_d_phi_w_h->SetLineColor(kRed);
  hbkg_d_phi_w_h->Scale(1. / hbkg_d_phi_w_h->Integral());
  hbkg_d_phi_w_h->Draw("Ehist,sames");

  hbkg_d_phi_w_h_h->GetXaxis()->SetTitle("W_H Delta Phi");
  hbkg_d_phi_w_h_h->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_w_h_h->SetLineColor(kBlue);
  hbkg_d_phi_w_h_h->Scale(1. / hbkg_d_phi_w_h_h->Integral());
  hbkg_d_phi_w_h_h->Draw("Ehist,sames");

  hbkg_d_phi_w_h_d->GetXaxis()->SetTitle("W_H Delta Phi");
  hbkg_d_phi_w_h_d->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_w_h_d->SetLineColor(kYellow);
  hbkg_d_phi_w_h_d->Scale(1. / hbkg_d_phi_w_h_d->Integral());
  hbkg_d_phi_w_h_d->Draw("Ehist,sames");

  hbkg_d_phi_w_h_w->GetXaxis()->SetTitle("W_H Delta Phi");
  hbkg_d_phi_w_h_w->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_w_h_w->SetLineColor(kGreen);
  hbkg_d_phi_w_h_w->Scale(1. / hbkg_d_phi_w_h_w->Integral());
  //hbkg_d_phi_w_h_w->Draw("Ehist,sames");

  TLegend *leg_w_h = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_w_h->AddEntry(hsig_d_phi_w_h, "Signal", "l");
  leg_w_h->AddEntry(hbkg_d_phi_w_h, "TTbarSemileptonic", "l");
  leg_w_h->AddEntry(hbkg_d_phi_w_h_h, "TTbar_Hadronic", "l");
  leg_w_h->AddEntry(hbkg_d_phi_w_h_d, "TTbar_Dileptonic", "l");
  //leg_w_h->AddEntry(hbkg_d_phi_w_h_w, "WJets_to_LNu", "l");
  leg_w_h->Draw();



  //Higgs
  //pt
  // Higgs Pt
  TCanvas *c_h_pt = new TCanvas("higgs_pt", "higgs_pt", 1000, 1000);
  hsig_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hsig_h_pt->GetYaxis()->SetTitle("Entries");
  hsig_h_pt->Scale(1. / hsig_h_pt->Integral());
  hsig_h_pt->SetLineColor(kBlack);
  hsig_h_pt->Draw("Ehist");

  hbkg_h_pt->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt->SetLineColor(kRed);
  hbkg_h_pt->Scale(1. / hbkg_h_pt->Integral());
  hbkg_h_pt->Draw("Ehist,sames");

  hbkg_h_pt_h->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt_h->SetLineColor(kBlue);
  hbkg_h_pt_h->Scale(1. / hbkg_h_pt_h->Integral());
  hbkg_h_pt_h->Draw("Ehist,sames");

  hbkg_h_pt_d->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt_d->SetLineColor(kYellow);
  hbkg_h_pt_d->Scale(1. / hbkg_h_pt_d->Integral());
  hbkg_h_pt_d->Draw("Ehist,sames");

  hbkg_h_pt_w->GetXaxis()->SetTitle("Higgs Transverse Momentum (GeV)");
  hbkg_h_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_h_pt_w->SetLineColor(kGreen);
  hbkg_h_pt_w->Scale(1. / hbkg_h_pt_w->Integral());
  //hbkg_h_pt_w->Draw("Ehist,sames");

  TLegend *leg_h_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_h_pt->AddEntry(hsig_h_pt, "Signal", "l");
  leg_h_pt->AddEntry(hbkg_h_pt, "TTbarSemileptonic", "l");
  leg_h_pt->AddEntry(hbkg_h_pt_h, "TTbar_Hadronic", "l");
  leg_h_pt->AddEntry(hbkg_h_pt_d, "TTbar_Dileptonic", "l");
  //leg_h_pt->AddEntry(hbkg_h_pt_w, "WJets_to_LNu", "l");
  leg_h_pt->Draw();
 
  //phi
  // Higgs Phi
  TCanvas *c_h_phi = new TCanvas("higgs_phi", "higgs_phi", 1000, 1000);
  hsig_h_phi->GetXaxis()->SetTitle("Higgs Phi");
  hsig_h_phi->GetYaxis()->SetTitle("Entries");
  hsig_h_phi->Scale(1. / hsig_h_phi->Integral());
  hsig_h_phi->SetLineColor(kBlack);
  hsig_h_phi->Draw("Ehist");

  hbkg_h_phi->GetXaxis()->SetTitle("Higgs Phi");
  hbkg_h_phi->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi->SetLineColor(kRed);
  hbkg_h_phi->Scale(1. / hbkg_h_phi->Integral());
  hbkg_h_phi->Draw("Ehist,sames");

  hbkg_h_phi_h->GetXaxis()->SetTitle("Higgs Phi");
  hbkg_h_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi_h->SetLineColor(kBlue);
  hbkg_h_phi_h->Scale(1. / hbkg_h_phi_h->Integral());
  hbkg_h_phi_h->Draw("Ehist,sames");

  hbkg_h_phi_d->GetXaxis()->SetTitle("Higgs Phi");
  hbkg_h_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi_d->SetLineColor(kYellow);
  hbkg_h_phi_d->Scale(1. / hbkg_h_phi_d->Integral());
  hbkg_h_phi_d->Draw("Ehist,sames");

  hbkg_h_phi_w->GetXaxis()->SetTitle("Higgs Phi");
  hbkg_h_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_h_phi_w->SetLineColor(kGreen);
  hbkg_h_phi_w->Scale(1. / hbkg_h_phi_w->Integral());
  //hbkg_h_phi_w->Draw("Ehist,sames");

  TLegend *leg_h_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_h_phi->AddEntry(hsig_h_phi, "Signal", "l");
  leg_h_phi->AddEntry(hbkg_h_phi, "TTbarSemileptonic", "l");
  leg_h_phi->AddEntry(hbkg_h_phi_h, "TTbar_Hadronic", "l");
  leg_h_phi->AddEntry(hbkg_h_phi_d, "TTbar_Dileptonic", "l");
  //leg_h_phi->AddEntry(hbkg_h_phi_w, "WJets_to_LNu", "l");
  leg_h_phi->Draw();

  //eta
  // Higgs Eta
  TCanvas *c_h_eta = new TCanvas("higgs_eta", "higgs_eta", 1000, 1000);
  hsig_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hsig_h_eta->GetYaxis()->SetTitle("Entries");
  hsig_h_eta->Scale(1. / hsig_h_eta->Integral());
  hsig_h_eta->SetLineColor(kBlack);
  hsig_h_eta->Draw("Ehist");

  hbkg_h_eta->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta->SetLineColor(kRed);
  hbkg_h_eta->Scale(1. / hbkg_h_eta->Integral());
  hbkg_h_eta->Draw("Ehist,sames");

  hbkg_h_eta_h->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta_h->SetLineColor(kBlue);
  hbkg_h_eta_h->Scale(1. / hbkg_h_eta_h->Integral());
  hbkg_h_eta_h->Draw("Ehist,sames");

  hbkg_h_eta_d->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta_d->SetLineColor(kYellow);
  hbkg_h_eta_d->Scale(1. / hbkg_h_eta_d->Integral());
  hbkg_h_eta_d->Draw("Ehist,sames");

  hbkg_h_eta_w->GetXaxis()->SetTitle("Higgs pseudorapidity");
  hbkg_h_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_h_eta_w->SetLineColor(kGreen);
  hbkg_h_eta_w->Scale(1. / hbkg_h_eta_w->Integral());
  //hbkg_h_eta_w->Draw("Ehist,sames");

  TLegend *leg_h_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_h_eta->AddEntry(hsig_h_eta, "Signal", "l");
  leg_h_eta->AddEntry(hbkg_h_eta, "TTbarSemileptonic", "l");
  leg_h_eta->AddEntry(hbkg_h_eta_h, "TTbar_Hadronic", "l");
  leg_h_eta->AddEntry(hbkg_h_eta_d, "TTbar_Dileptonic", "l");
  //leg_h_eta->AddEntry(hbkg_h_eta_w, "WJets_to_LNu", "l");
  leg_h_eta->Draw();

  //mass
  // Higgs Invariant Mass
  TCanvas *c_h_inv_mass = new TCanvas("higgs", "higgs", 1000, 1000);
  hsig_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hsig_inv_m->GetYaxis()->SetTitle("Entries");
  hsig_inv_m->Scale(1. / hsig_inv_m->Integral());
  hsig_inv_m->SetLineColor(kBlack);
  hsig_inv_m->Draw("Ehist");

  hbkg_inv_m->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m->SetLineColor(kRed);
  hbkg_inv_m->Scale(1. / hbkg_inv_m->Integral());
  hbkg_inv_m->Draw("Ehist,sames");

  hbkg_inv_m_h->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m_h->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m_h->SetLineColor(kBlue);
  hbkg_inv_m_h->Scale(1. / hbkg_inv_m_h->Integral());
  hbkg_inv_m_h->Draw("Ehist,sames");

  hbkg_inv_m_d->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m_d->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m_d->SetLineColor(kYellow);
  hbkg_inv_m_d->Scale(1. / hbkg_inv_m_d->Integral());
  hbkg_inv_m_d->Draw("Ehist,sames");

  hbkg_inv_m_w->GetXaxis()->SetTitle("Higgs mass");
  hbkg_inv_m_w->GetYaxis()->SetTitle("Entries");
  hbkg_inv_m_w->SetLineColor(kGreen);
  hbkg_inv_m_w->Scale(1. / hbkg_inv_m_w->Integral());
  //hbkg_inv_m_w->Draw("Ehist,sames");

  TLegend *leg_inv_m = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_inv_m->AddEntry(hsig_inv_m, "Signal", "l");
  leg_inv_m->AddEntry(hbkg_inv_m, "TTbarSemileptonic", "l");
  leg_inv_m->AddEntry(hbkg_inv_m_h, "TTbar_Hadronic", "l");
  leg_inv_m->AddEntry(hbkg_inv_m_d, "TTbar_Dileptonic", "l");
  //leg_inv_m->AddEntry(hbkg_inv_m_w, "WJets_to_LNu", "l");
  leg_inv_m->Draw();


  //W boson
  // W Transverse Momentum
  TCanvas *c_W_pt = new TCanvas("W_pt", "W_pt", 1000, 1000);
  hbkg_w_pt_h->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt_h->SetLineColor(kBlue);
  hbkg_w_pt_h->Scale(1. / hbkg_w_pt_h->Integral());
  hbkg_w_pt_h->Draw("Ehist");

  hbkg_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt->SetLineColor(kRed);
  hbkg_w_pt->Scale(1. / hbkg_w_pt->Integral());
  hbkg_w_pt->Draw("Ehist,sames");

  hsig_w_pt->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hsig_w_pt->GetYaxis()->SetTitle("Entries");
  hsig_w_pt->SetLineColor(kBlack);
  hsig_w_pt->Scale(1. / hsig_w_pt->Integral());
  hsig_w_pt->Draw("Ehist,sames");

  hbkg_w_pt_d->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt_d->SetLineColor(kYellow);
  hbkg_w_pt_d->Scale(1. / hbkg_w_pt_d->Integral());
  hbkg_w_pt_d->Draw("Ehist,sames");

  hbkg_w_pt_w->GetXaxis()->SetTitle("W Transverse Momentum (GeV)");
  hbkg_w_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_w_pt_w->SetLineColor(kGreen);
  hbkg_w_pt_w->Scale(1. / hbkg_w_pt_w->Integral());
  //hbkg_w_pt_w->Draw("Ehist,sames");

  TLegend *leg_w_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_w_pt->AddEntry(hsig_w_pt, "Signal", "l");
  leg_w_pt->AddEntry(hbkg_w_pt, "TTbarSemileptonic", "l");
  leg_w_pt->AddEntry(hbkg_w_pt_h, "TTbar_Hadronic", "l");
  leg_w_pt->AddEntry(hbkg_w_pt_d, "TTbar_Dileptonic", "l");
  //leg_w_pt->AddEntry(hbkg_w_pt_w, "WJets_to_LNu", "l");
  leg_w_pt->Draw();

  //eta
  // W Pseudorapidity
  TCanvas *c_W_eta = new TCanvas("W_eta", "W_eta", 1000, 1000);
  hbkg_w_eta_w->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta_w->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta_w->SetLineColor(kGreen);
  hbkg_w_eta_w->Scale(1. / hbkg_w_eta_w->Integral());
  hbkg_w_eta_w->Draw("Ehist");

  hsig_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hsig_w_eta->GetYaxis()->SetTitle("Entries");
  hsig_w_eta->SetLineColor(kBlack);
  hsig_w_eta->Scale(1. / hsig_w_eta->Integral());
  hsig_w_eta->Draw("Ehist,sames");

  hbkg_w_eta->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta->SetLineColor(kRed);
  hbkg_w_eta->Scale(1. / hbkg_w_eta->Integral());
  hbkg_w_eta->Draw("Ehist,sames");

  hbkg_w_eta_h->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta_h->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta_h->SetLineColor(kBlue);
  hbkg_w_eta_h->Scale(1. / hbkg_w_eta_h->Integral());
  hbkg_w_eta_h->Draw("Ehist,sames");

  hbkg_w_eta_d->GetXaxis()->SetTitle("W Pseudorapidity");
  hbkg_w_eta_d->GetYaxis()->SetTitle("Entries");
  hbkg_w_eta_d->SetLineColor(kYellow);
  hbkg_w_eta_d->Scale(1. / hbkg_w_eta_d->Integral());
  hbkg_w_eta_d->Draw("Ehist,sames");

  TLegend *leg_w_eta = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_w_eta->AddEntry(hsig_w_eta, "Signal", "l");
  leg_w_eta->AddEntry(hbkg_w_eta, "TTbarSemileptonic", "l");
  leg_w_eta->AddEntry(hbkg_w_eta_h, "TTbar_Hadronic", "l");
  leg_w_eta->AddEntry(hbkg_w_eta_d, "TTbar_Dileptonic", "l");
  leg_w_eta->AddEntry(hbkg_w_eta_w, "WJets_to_LNu", "l");
  leg_w_eta->Draw();

  //phi
  // W Phi
  TCanvas *c_W_phi = new TCanvas("W_phi", "W_phi", 1000, 1000);
  hbkg_w_phi_w->GetXaxis()->SetTitle("W Phi (rad)");
  hbkg_w_phi_w->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi_w->SetLineColor(kGreen);
  hbkg_w_phi_w->Scale(1. / hbkg_w_phi_w->Integral());
  hbkg_w_phi_w->Draw("Ehist");

  hsig_w_phi->GetXaxis()->SetTitle("W Phi (rad)");
  hsig_w_phi->GetYaxis()->SetTitle("Entries");
  hsig_w_phi->SetLineColor(kBlack);
  hsig_w_phi->Scale(1. / hsig_w_phi->Integral());
  hsig_w_phi->Draw("Ehist,sames");

  hbkg_w_phi->GetXaxis()->SetTitle("W Phi (rad)");
  hbkg_w_phi->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi->SetLineColor(kRed);
  hbkg_w_phi->Scale(1. / hbkg_w_phi->Integral());
  hbkg_w_phi->Draw("Ehist,sames");

  hbkg_w_phi_h->GetXaxis()->SetTitle("W Phi (rad)");
  hbkg_w_phi_h->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi_h->SetLineColor(kBlue);
  hbkg_w_phi_h->Scale(1. / hbkg_w_phi_h->Integral());
  hbkg_w_phi_h->Draw("Ehist,sames");

  hbkg_w_phi_d->GetXaxis()->SetTitle("W Phi (rad)");
  hbkg_w_phi_d->GetYaxis()->SetTitle("Entries");
  hbkg_w_phi_d->SetLineColor(kYellow);
  hbkg_w_phi_d->Scale(1. / hbkg_w_phi_d->Integral());
  hbkg_w_phi_d->Draw("Ehist,sames");

  TLegend *leg_w_phi = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_w_phi->AddEntry(hsig_w_phi, "Signal", "l");
  leg_w_phi->AddEntry(hbkg_w_phi, "TTbarSemileptonic", "l");
  leg_w_phi->AddEntry(hbkg_w_phi_h, "TTbar_Hadronic", "l");
  leg_w_phi->AddEntry(hbkg_w_phi_d, "TTbar_Dileptonic", "l");
  leg_w_phi->AddEntry(hbkg_w_phi_w, "WJets_to_LNu", "l");
  leg_w_phi->Draw();

  //mass
  // W Mass
  TCanvas *c_W_m = new TCanvas("W_m", "W_m", 1000, 1000);
  hbkg_w_m_w->GetXaxis()->SetTitle("W Mass (GeV)");
  hbkg_w_m_w->GetYaxis()->SetTitle("Entries");
  hbkg_w_m_w->SetLineColor(kGreen);
  hbkg_w_m_w->Scale(1. / hbkg_w_m_w->Integral());
  hbkg_w_m_w->Draw("Ehist");

  hsig_w_m->GetXaxis()->SetTitle("W Mass (GeV)");
  hsig_w_m->GetYaxis()->SetTitle("Entries");
  hsig_w_m->SetLineColor(kBlack);
  hsig_w_m->Scale(1. / hsig_w_m->Integral());
  hsig_w_m->Draw("Ehist,sames");

  hbkg_w_m->GetXaxis()->SetTitle("W Mass (GeV)");
  hbkg_w_m->GetYaxis()->SetTitle("Entries");
  hbkg_w_m->SetLineColor(kRed);
  hbkg_w_m->Scale(1. / hbkg_w_m->Integral());
  hbkg_w_m->Draw("Ehist,sames");

  hbkg_w_m_h->GetXaxis()->SetTitle("W Mass (GeV)");
  hbkg_w_m_h->GetYaxis()->SetTitle("Entries");
  hbkg_w_m_h->SetLineColor(kBlue);
  hbkg_w_m_h->Scale(1. / hbkg_w_m_h->Integral());
  hbkg_w_m_h->Draw("Ehist,sames");

  hbkg_w_m_d->GetXaxis()->SetTitle("W Mass (GeV)");
  hbkg_w_m_d->GetYaxis()->SetTitle("Entries");
  hbkg_w_m_d->SetLineColor(kYellow);
  hbkg_w_m_d->Scale(1. / hbkg_w_m_d->Integral());
  hbkg_w_m_d->Draw("Ehist,sames");

  TLegend *leg_w_m = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_w_m->AddEntry(hsig_w_m, "Signal", "l");
  leg_w_m->AddEntry(hbkg_w_m, "TTbarSemileptonic", "l");
  leg_w_m->AddEntry(hbkg_w_m_h, "TTbar_Hadronic", "l");
  leg_w_m->AddEntry(hbkg_w_m_d, "TTbar_Dileptonic", "l");
  leg_w_m->AddEntry(hbkg_w_m_w, "WJets_to_LNu", "l");
  leg_w_m->Draw();




  //jet_mult
  // Jet Multiplicity
  TCanvas *c_jet_mult = new TCanvas("jet_mult", "jet_mult", 1000, 1000);
  hbkg_jet_mult_w->GetXaxis()->SetTitle("Jet Multiplicity");
  hbkg_jet_mult_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult_w->SetLineColor(kGreen);
  hbkg_jet_mult_w->Scale(1. / hbkg_jet_mult_w->Integral());
  //hbkg_jet_mult_w->Draw("Ehist");

  hsig_jet_mult->GetXaxis()->SetTitle("Jet Multiplicity");
  hsig_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_jet_mult->SetLineColor(kBlack);
  hsig_jet_mult->Scale(1. / hsig_jet_mult->Integral());
  hsig_jet_mult->Draw("Ehist");
  hbkg_jet_mult_h->Draw("Ehist,sames");
  

  hbkg_jet_mult->GetXaxis()->SetTitle("Jet Multiplicity");
  hbkg_jet_mult->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult->SetLineColor(kRed);
  hbkg_jet_mult->Scale(1. / hbkg_jet_mult->Integral());
  hbkg_jet_mult->Draw("Ehist,sames");

  hbkg_jet_mult_h->GetXaxis()->SetTitle("Jet Multiplicity");
  hbkg_jet_mult_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult_h->SetLineColor(kBlue);
  hbkg_jet_mult_h->Scale(1. / hbkg_jet_mult_h->Integral());
  

  hbkg_jet_mult_d->GetXaxis()->SetTitle("Jet Multiplicity");
  hbkg_jet_mult_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet_mult_d->SetLineColor(kYellow);
  hbkg_jet_mult_d->Scale(1. / hbkg_jet_mult_d->Integral());
  hbkg_jet_mult_d->Draw("Ehist,sames");

  TLegend *leg_jet_mult = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet_mult->AddEntry(hsig_jet_mult, "Signal", "l");
  leg_jet_mult->AddEntry(hbkg_jet_mult, "TTbarSemileptonic", "l");
  leg_jet_mult->AddEntry(hbkg_jet_mult_h, "TTbar_Hadronic", "l");
  leg_jet_mult->AddEntry(hbkg_jet_mult_d, "TTbar_Dileptonic", "l");
  //leg_jet_mult->AddEntry(hbkg_jet_mult_w, "WJets_to_LNu", "l");
  leg_jet_mult->Draw();

  TCanvas *c_b_jet_mult = new TCanvas("b-jet_mult", "b-jet_mult", 1000, 1000);
  hbkg_b_jet_mult_w->GetXaxis()->SetTitle("bJet Multiplicity");
  hbkg_b_jet_mult_w->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet_mult_w->SetLineColor(kGreen);
  hbkg_b_jet_mult_w->Scale(1. / hbkg_b_jet_mult_w->Integral());
  //hbkg_b_jet_mult_w->Draw("Ehist");

  hbkg_b_jet_mult->GetXaxis()->SetTitle("bJet Multiplicity");
  hbkg_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet_mult->SetLineColor(kRed);
  hbkg_b_jet_mult->Scale(1. / hbkg_b_jet_mult->Integral());
  hbkg_b_jet_mult_d->Draw("Ehist");
  hsig_b_jet_mult->Draw("Ehist,sames");
  hbkg_b_jet_mult->Draw("Ehist,sames");

  hsig_b_jet_mult->GetXaxis()->SetTitle("bJet Multiplicity");
  hsig_b_jet_mult->GetYaxis()->SetTitle("Entries");
  hsig_b_jet_mult->SetLineColor(kBlack);
  hsig_b_jet_mult->Scale(1. / hsig_b_jet_mult->Integral());
  

  hbkg_b_jet_mult_h->GetXaxis()->SetTitle("bJet Multiplicity");
  hbkg_b_jet_mult_h->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet_mult_h->SetLineColor(kBlue);
  hbkg_b_jet_mult_h->Scale(1. / hbkg_b_jet_mult_h->Integral());
  hbkg_b_jet_mult_h->Draw("Ehist,sames");

  hbkg_b_jet_mult_d->GetXaxis()->SetTitle("bJet Multiplicity");
  hbkg_b_jet_mult_d->GetYaxis()->SetTitle("Entries");
  hbkg_b_jet_mult_d->SetLineColor(kYellow);
  hbkg_b_jet_mult_d->Scale(1. / hbkg_b_jet_mult_d->Integral());
  
  TLegend *leg_b_jet_mult = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_b_jet_mult->AddEntry(hsig_b_jet_mult, "Signal", "l");
  leg_b_jet_mult->AddEntry(hbkg_b_jet_mult, "TTbarSemileptonic", "l");
  leg_b_jet_mult->AddEntry(hbkg_b_jet_mult_h, "TTbar_Hadronic", "l");
  leg_b_jet_mult->AddEntry(hbkg_b_jet_mult_d, "TTbar_Dileptonic", "l");
  //leg_b_jet_mult->AddEntry(hbkg_b_jet_mult_w, "WJets_to_LNu", "l");
  leg_b_jet_mult->Draw();

  


  //delta R before cross-cleaning
  //muon-jet
  TCanvas *c_dR_mn_jet = new TCanvas("dR_mn_jet","dR_mn_jet",1000,1000);
  hbkg_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hbkg_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon->Scale(1./hbkg_dR_jet_muon->Integral());
  hbkg_dR_jet_muon->SetLineColor(kRed);
  hbkg_dR_jet_muon->Draw("Ehist");

  hsig_dR_jet_muon->SetLineColor(kBlack);
  hsig_dR_jet_muon->GetXaxis()->SetTitle("delta R between jets and muons");
  hsig_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon->Scale(1./hsig_dR_jet_muon->Integral());
  hsig_dR_jet_muon->Draw("Ehist,sames");

  hbkg_dR_jet_muon_h->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_h->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_h->Scale(1./hbkg_dR_jet_muon_h->Integral());
  hbkg_dR_jet_muon_h->Draw("Ehist,sames");
  hbkg_dR_jet_muon_h->SetLineColor(kBlue);

  hbkg_dR_jet_muon_d->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_d->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_d->Scale(1./hbkg_dR_jet_muon_d->Integral());
  hbkg_dR_jet_muon_d->Draw("Ehist,sames");

  hbkg_dR_jet_muon_w->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_w->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_w->Scale(1./hbkg_dR_jet_muon_w->Integral());
  hbkg_dR_jet_muon_w->Draw("Ehist,sames");
  //hbkg_dR_jet_muon_w->SetLineColor(kYellow);

  TLegend *leg_dR_mn_jet = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_mn_jet->AddEntry(hsig_dR_jet_muon,"Signal","l");
  leg_dR_mn_jet->AddEntry(hbkg_dR_jet_muon_w,"TTbarSemileptonic","l");
  leg_dR_mn_jet->AddEntry(hbkg_dR_jet_muon_d,"TTbar_Dileptonic","l");
  leg_dR_mn_jet->AddEntry(hbkg_dR_jet_muon_h,"TTbar_Hadronic","l");
  //leg_dR_mn_jet->AddEntry(hbkg_dR_jet_muon,"WJets_to_LNu","l");
  leg_dR_mn_jet->Draw();
  

  
  //electron-jet
  TCanvas *c_dR_en_jet_b = new TCanvas("dR_en_jet_b", "dR_en_jet_b", 1000, 1000);
  hbkg_dR_jet_electron->GetXaxis()->SetTitle("Delta R between jets and electrons");
  hbkg_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron->SetLineColor(kRed);
  hbkg_dR_jet_electron->Scale(1./hbkg_dR_jet_electron->Integral());
  hbkg_dR_jet_electron->Draw("Ehist");

  hbkg_dR_jet_electron_h->GetXaxis()->SetTitle("Delta R between jets and electrons");
  hbkg_dR_jet_electron_h->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_h->SetLineColor(kBlue);
  hbkg_dR_jet_electron_h->Scale(1./hbkg_dR_jet_electron_h->Integral());
  hbkg_dR_jet_electron_h->Draw("Ehist,sames");

  hbkg_dR_jet_electron_d->GetXaxis()->SetTitle("Delta R between jets and electrons");
  hbkg_dR_jet_electron_d->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_d->SetLineColor(kYellow);
  hbkg_dR_jet_electron_d->Scale(1./hbkg_dR_jet_electron_d->Integral());
  hbkg_dR_jet_electron_d->Draw("Ehist,sames");

  hbkg_dR_jet_electron_w->GetXaxis()->SetTitle("Delta R between jets and electrons");
  hbkg_dR_jet_electron_w->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_w->SetLineColor(kGreen);
  hbkg_dR_jet_electron_w->Scale(1./hbkg_dR_jet_electron_w->Integral());
  //hbkg_dR_jet_electron_w->Draw("Ehist,sames");

  hsig_dR_jet_electron->GetXaxis()->SetTitle("Delta R between jets and electrons");
  hsig_dR_jet_electron->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron->SetLineColor(kBlack);
  hsig_dR_jet_electron->Scale(1./hsig_dR_jet_electron->Integral());
  hsig_dR_jet_electron->Draw("Ehist,sames");

  TLegend *leg_dR_en_jet_b = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_dR_en_jet_b->AddEntry(hbkg_dR_jet_electron, "TTbarSemileptonic", "l");
  leg_dR_en_jet_b->AddEntry(hbkg_dR_jet_electron_h, "TTbar_Hadronic", "l");
  leg_dR_en_jet_b->AddEntry(hbkg_dR_jet_electron_d, "TTbar_Dileptonic", "l");
  //leg_dR_en_jet_b->AddEntry(hbkg_dR_jet_electron_w, "WJets_to_LNu", "l");
  leg_dR_en_jet_b->AddEntry(hsig_dR_jet_electron, "Signal", "l");
  leg_dR_en_jet_b->Draw();


  


  //delta R after cross-cleaning
  //muon-jet
  TCanvas *c_dR_mn_jet_b = new TCanvas("dR_mn_jet_b", "dR_en_jet_b", 1000, 1000);
  hbkg_dR_jet_muon->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon->SetLineColor(kRed);
  hbkg_dR_jet_muon->Scale(1./hbkg_dR_jet_muon->Integral());
  hbkg_dR_jet_muon->Draw("Ehist");

  hbkg_dR_jet_muon_h->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_h->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_h->SetLineColor(kBlue);
  hbkg_dR_jet_muon_h->Scale(1./hbkg_dR_jet_muon_h->Integral());
  hbkg_dR_jet_muon_h->Draw("Ehist,sames");

  hbkg_dR_jet_muon_d->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_d->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_d->SetLineColor(kYellow);
  hbkg_dR_jet_muon_d->Scale(1./hbkg_dR_jet_muon_d->Integral());
  hbkg_dR_jet_muon_d->Draw("Ehist,sames");

  hbkg_dR_jet_muon_w->GetXaxis()->SetTitle("Delta R between jets and muons");
  hbkg_dR_jet_muon_w->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_muon_w->SetLineColor(kGreen);
  hbkg_dR_jet_muon_w->Scale(1./hbkg_dR_jet_muon_w->Integral());
  //hbkg_dR_jet_muon_w->Draw("Ehist,sames");

  hsig_dR_jet_muon->GetXaxis()->SetTitle("Delta R between jets and muons");
  hsig_dR_jet_muon->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_muon->SetLineColor(kBlack);
  hsig_dR_jet_muon->Scale(1./hsig_dR_jet_muon->Integral());
  hsig_dR_jet_muon->Draw("Ehist,sames");

  TLegend *leg_dR_mn_jet_b = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_dR_mn_jet_b->AddEntry(hbkg_dR_jet_muon, "TTbarSemileptonic", "l");
  leg_dR_mn_jet_b->AddEntry(hbkg_dR_jet_muon_h, "TTbar_Hadronic", "l");
  leg_dR_mn_jet_b->AddEntry(hbkg_dR_jet_muon_d, "TTbar_Dileptonic", "l");
  leg_dR_mn_jet_b->AddEntry(hbkg_dR_jet_muon_w, "WJets_to_LNu", "l");
  //leg_dR_mn_jet_b->AddEntry(hsig_dR_jet_muon, "Signal", "l");
  leg_dR_mn_jet_b->Draw();



  //electron-jet
  TCanvas *c_dR_en_jet_after_b = new TCanvas("dR_en_jet_after_b","dR_en_jet_after_b",1000,1000);
  hsig_dR_jet_electron_after->GetXaxis()->SetTitle("Delta R between jets and electrons after cross cleaning");
  hsig_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hsig_dR_jet_electron_after->SetLineColor(kBlack);
  hsig_dR_jet_electron_after->Scale(1./hsig_dR_jet_electron_after->Integral());
  hsig_dR_jet_electron_after->Draw("Ehist");

  hbkg_dR_jet_electron_after->GetXaxis()->SetTitle("Delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_after->SetLineColor(kRed);
  hbkg_dR_jet_electron_after->Scale(1./hbkg_dR_jet_electron_after->Integral());
  hbkg_dR_jet_electron_after->Draw("Ehist,sames");

  hbkg_dR_jet_electron_after_h->GetXaxis()->SetTitle("Delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after_h->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_after_h->SetLineColor(kBlue);
  hbkg_dR_jet_electron_after_h->Scale(1./hbkg_dR_jet_electron_after_h->Integral());
  hbkg_dR_jet_electron_after_h->Draw("Ehist,sames");

  hbkg_dR_jet_electron_after_d->GetXaxis()->SetTitle("Delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after_d->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_after_d->SetLineColor(kYellow);
  hbkg_dR_jet_electron_after_d->Scale(1./hbkg_dR_jet_electron_after_d->Integral());
  hbkg_dR_jet_electron_after_d->Draw("Ehist,sames");

  hbkg_dR_jet_electron_after_w->GetXaxis()->SetTitle("Delta R between jets and electrons after cross cleaning");
  hbkg_dR_jet_electron_after_w->GetYaxis()->SetTitle("Entries");
  hbkg_dR_jet_electron_after_w->SetLineColor(kGreen);
  hbkg_dR_jet_electron_after_w->Scale(1./hbkg_dR_jet_electron_after_w->Integral());
  //hbkg_dR_jet_electron_after_w->Draw("Ehist,sames");

  TLegend *leg_dR_jet_en_after_b = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_jet_en_after_b->AddEntry(hsig_dR_jet_electron_after,"Signal","l");
  leg_dR_jet_en_after_b->AddEntry(hbkg_dR_jet_electron_after,"TTbarSemileptonic","l");
  leg_dR_jet_en_after_b->AddEntry(hbkg_dR_jet_electron_after_h,"TTbar_Hadronic","l");
  leg_dR_jet_en_after_b->AddEntry(hbkg_dR_jet_electron_after_d,"TTbar_Dileptonic","l");
  //leg_dR_jet_en_after_b->AddEntry(hbkg_dR_jet_electron_after_w,"WJets_to_LNu","l");
  leg_dR_jet_en_after_b->Draw();
  



  //dR_av
  TCanvas *c_dR_av = new TCanvas("dR_av","dR_av",1000,1000);
  hbkg_dR_av->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hbkg_dR_av->GetYaxis()->SetTitle("Entries");
  hbkg_dR_av->SetLineColor(kRed);
  hbkg_dR_av->Scale(1./hbkg_dR_av->Integral());
  hbkg_dR_av->Draw("Ehist");

  hsig_dR_av->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hsig_dR_av->GetYaxis()->SetTitle("Entries");
  hsig_dR_av->SetLineColor(kBlack);
  hsig_dR_av->Scale(1./hsig_dR_av->Integral());
  hsig_dR_av->Draw("Ehist,sames");

  hbkg_dR_av_h->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hbkg_dR_av_h->GetYaxis()->SetTitle("Entries");
  hbkg_dR_av_h->SetLineColor(kBlue);
  hbkg_dR_av_h->Scale(1./hbkg_dR_av_h->Integral());
  hbkg_dR_av_h->Draw("Ehist,sames");

  hbkg_dR_av_d->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hbkg_dR_av_d->GetYaxis()->SetTitle("Entries");
  hbkg_dR_av_d->SetLineColor(kYellow);
  hbkg_dR_av_d->Scale(1./hbkg_dR_av_d->Integral());
  hbkg_dR_av_d->Draw("Ehist,sames");

  hbkg_dR_av_w->GetXaxis()->SetTitle("Distance in the eta-phi plane between any b-tag pair, averaged over all possible combinations per event");
  hbkg_dR_av_w->GetYaxis()->SetTitle("Entries");
  hbkg_dR_av_w->SetLineColor(kGreen);
  hbkg_dR_av_w->Scale(1./hbkg_dR_av_w->Integral());
  //hbkg_dR_av_w->Draw("Ehist,sames");

  TLegend *leg_dR_av = new TLegend(0.4,0.4,0.5,0.5);
  leg_dR_av->AddEntry(hsig_dR_av,"Signal","l");
  leg_dR_av->AddEntry(hbkg_dR_av,"TTbarSemileptonic","l");
  leg_dR_av->AddEntry(hbkg_dR_av_h,"TTbar_Hadronic","l");
  leg_dR_av->AddEntry(hbkg_dR_av_d,"TTbar_Dileptonic","l");
  //leg_dR_av->AddEntry(hbkg_dR_av_w,"WJets_to_LNu","l");
  leg_dR_av->Draw();



  //minDelta_m
  TCanvas *c_minDelta_m = new TCanvas("minDelta_m","minDelta_m",1000,1000);
  hbkg_minDelta_m_w->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hbkg_minDelta_m_w->GetYaxis()->SetTitle("Entries");
  hbkg_minDelta_m_w->SetLineColor(kGreen);
  hbkg_minDelta_m_w->Scale(1./hbkg_minDelta_m_w->Integral());
  //hbkg_minDelta_m_w->Draw("Ehist");

  hsig_minDelta_m->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hsig_minDelta_m->GetYaxis()->SetTitle("Entries");
  hsig_minDelta_m->SetLineColor(kBlack);
  hsig_minDelta_m->Scale(1./hsig_minDelta_m->Integral());
  hsig_minDelta_m->Draw("Ehist");

  hbkg_minDelta_m->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hbkg_minDelta_m->GetYaxis()->SetTitle("Entries");
  hbkg_minDelta_m->SetLineColor(kRed);
  hbkg_minDelta_m->Scale(1./hbkg_minDelta_m->Integral());
  hbkg_minDelta_m->Draw("Ehist,sames");

  hbkg_minDelta_m_h->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hbkg_minDelta_m_h->GetYaxis()->SetTitle("Entries");
  hbkg_minDelta_m_h->SetLineColor(kBlue);
  hbkg_minDelta_m_h->Scale(1./hbkg_minDelta_m_h->Integral());
  hbkg_minDelta_m_h->Draw("Ehist,sames");

  hbkg_minDelta_m_d->GetXaxis()->SetTitle("The minimum difference in m(b1b2) - m(b3b4) among the possible pairing scenarios");
  hbkg_minDelta_m_d->GetYaxis()->SetTitle("Entries");
  hbkg_minDelta_m_d->SetLineColor(kYellow);
  hbkg_minDelta_m_d->Scale(1./hbkg_minDelta_m_d->Integral());
  hbkg_minDelta_m_d->Draw("Ehist,sames");

  TLegend *leg_minDelta_m = new TLegend(0.4,0.4,0.5,0.5);
  leg_minDelta_m->AddEntry(hsig_minDelta_m,"Signal","l");
  leg_minDelta_m->AddEntry(hbkg_minDelta_m,"TTbarSemileptonic","l");
  leg_minDelta_m->AddEntry(hbkg_minDelta_m_h,"TTbar_Hadronic","l");
  leg_minDelta_m->AddEntry(hbkg_minDelta_m_d,"TTbar_Dileptonic","l");
  //leg_minDelta_m->AddEntry(hbkg_minDelta_m_w,"WJets_to_LNu","l");
  leg_minDelta_m->Draw();



  //delta_phi
  TCanvas *c_d_phi_j_E = new TCanvas("d_phi_j_E","d_phi_j_E",1000,1000);
  hbkg_d_phi_j_E->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hbkg_d_phi_j_E->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_j_E->SetLineColor(kRed);
  hbkg_d_phi_j_E->Scale(1./hbkg_d_phi_j_E->Integral());
  hbkg_d_phi_j_E->Draw("Ehist");

  hsig_d_phi_j_E->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hsig_d_phi_j_E->GetYaxis()->SetTitle("Entries");
  hsig_d_phi_j_E->SetLineColor(kBlack);
  hsig_d_phi_j_E->Scale(1./hsig_d_phi_j_E->Integral());
  hsig_d_phi_j_E->Draw("Ehist,sames");

  hbkg_d_phi_j_E_h->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hbkg_d_phi_j_E_h->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_j_E_h->SetLineColor(kBlue);
  hbkg_d_phi_j_E_h->Scale(1./hbkg_d_phi_j_E_h->Integral());
  hbkg_d_phi_j_E_h->Draw("Ehist,sames");

  hbkg_d_phi_j_E_d->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hbkg_d_phi_j_E_d->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_j_E_d->SetLineColor(kYellow);
  hbkg_d_phi_j_E_d->Scale(1./hbkg_d_phi_j_E_d->Integral());
  hbkg_d_phi_j_E_d->Draw("Ehist,sames");

  hbkg_d_phi_j_E_w->GetXaxis()->SetTitle("Minimum azimuthal opening angle");
  hbkg_d_phi_j_E_w->GetYaxis()->SetTitle("Entries");
  hbkg_d_phi_j_E_w->SetLineColor(kGreen);
  hbkg_d_phi_j_E_w->Scale(1./hbkg_d_phi_j_E_w->Integral());
  //hbkg_d_phi_j_E_w->Draw("Ehist,sames");

  TLegend *leg_d_phi_j_E = new TLegend(0.4,0.4,0.5,0.5);
  leg_d_phi_j_E->AddEntry(hsig_d_phi_j_E,"Signal","l");
  leg_d_phi_j_E->AddEntry(hbkg_d_phi_j_E,"TTbarSemileptonic","l");
  leg_d_phi_j_E->AddEntry(hbkg_d_phi_j_E_h,"TTbar_Hadronic","l");
  leg_d_phi_j_E->AddEntry(hbkg_d_phi_j_E_d,"TTbar_Dileptonic","l");
  //leg_d_phi_j_E->AddEntry(hbkg_d_phi_j_E_w,"WJets_to_LNu","l");
  leg_d_phi_j_E->Draw();



  //Njets
  TCanvas *c_Njets = new TCanvas("Njets","Njets",1000,1000);
  hsig_Nbjets_after->GetXaxis()->SetTitle("Njets");
  hsig_Nbjets_after->GetYaxis()->SetTitle("Entries");
  hsig_Nbjets_after->SetLineColor(kBlack);
  hsig_Nbjets_after->Scale(1./hsig_Nbjets_after->Integral());
  hsig_Nbjets_after->Draw("Ehist");

  hbkg_Nbjets_after->GetXaxis()->SetTitle("Njets");
  hbkg_Nbjets_after->GetYaxis()->SetTitle("Entries");
  hbkg_Nbjets_after->SetLineColor(kRed);
  hbkg_Nbjets_after->Scale(1./hbkg_Nbjets_after->Integral());
  hbkg_Nbjets_after->Draw("Ehist,sames");

  hbkg_Nbjets_after_h->GetXaxis()->SetTitle("Njets");
  hbkg_Nbjets_after_h->GetYaxis()->SetTitle("Entries");
  hbkg_Nbjets_after_h->SetLineColor(kBlue);
  hbkg_Nbjets_after_h->Scale(1./hbkg_Nbjets_after_h->Integral());
  hbkg_Nbjets_after_h->Draw("Ehist,sames");

  hbkg_Nbjets_after_d->GetXaxis()->SetTitle("Njets");
  hbkg_Nbjets_after_d->GetYaxis()->SetTitle("Entries");
  hbkg_Nbjets_after_d->SetLineColor(kYellow);
  hbkg_Nbjets_after_d->Scale(1./hbkg_Nbjets_after_d->Integral());
  hbkg_Nbjets_after_d->Draw("Ehist,sames");

  hbkg_Nbjets_after_w->GetXaxis()->SetTitle("Njets");
  hbkg_Nbjets_after_w->GetYaxis()->SetTitle("Entries");
  hbkg_Nbjets_after_w->SetLineColor(kGreen);
  hbkg_Nbjets_after_w->Scale(1./hbkg_Nbjets_after_w->Integral());
  //hbkg_Nbjets_after_w->Draw("Ehist,sames");

  TLegend *leg_Njets = new TLegend(0.4,0.4,0.5,0.5);
  leg_Njets->AddEntry(hsig_Nbjets_after,"Signal","l");
  leg_Njets->AddEntry(hbkg_Nbjets_after,"TTbarSemileptonic","l");
  leg_Njets->AddEntry(hbkg_Nbjets_after_h,"TTbar_Hadronic","l");
  leg_Njets->AddEntry(hbkg_Nbjets_after_d,"TTbar_Dileptonic","l");
  //leg_Njets->AddEntry(hbkg_Nbjets_after_w,"WJets_to_LNu","l");
  leg_Njets->Draw();



  //bjet1
  TCanvas *c_btag0 = new TCanvas("btag0", "btag0", 1000, 1000);
  hsig_btag_0->GetXaxis()->SetTitle("btag0");
  hsig_btag_0->GetYaxis()->SetTitle("Entries");
  hsig_btag_0->SetLineColor(kBlack);
  hsig_btag_0->Scale(1./hsig_btag_0->Integral());
  hsig_btag_0->Draw("Ehist");

  hbkg_btag_0->GetXaxis()->SetTitle("btag0");
  hbkg_btag_0->GetYaxis()->SetTitle("Entries");
  hbkg_btag_0->SetLineColor(kRed);
  hbkg_btag_0->Scale(1./hbkg_btag_0->Integral());
  hbkg_btag_0->Draw("Ehist,sames");

  hbkg_btag_0_h->GetXaxis()->SetTitle("btag0");
  hbkg_btag_0_h->GetYaxis()->SetTitle("Entries");
  hbkg_btag_0_h->SetLineColor(kBlue);
  hbkg_btag_0_h->Scale(1./hbkg_btag_0_h->Integral());
  hbkg_btag_0_h->Draw("Ehist,sames");

  hbkg_btag_0_d->GetXaxis()->SetTitle("btag0");
  hbkg_btag_0_d->GetYaxis()->SetTitle("Entries");
  hbkg_btag_0_d->SetLineColor(kYellow);
  hbkg_btag_0_d->Scale(1./hbkg_btag_0_d->Integral());
  hbkg_btag_0_d->Draw("Ehist,sames");

  hbkg_btag_0_w->GetXaxis()->SetTitle("btag0");
  hbkg_btag_0_w->GetYaxis()->SetTitle("Entries");
  hbkg_btag_0_w->SetLineColor(kGreen);
  hbkg_btag_0_w->Scale(1./hbkg_btag_0_w->Integral());
  //hbkg_btag_0_w->Draw("Ehist,sames");

  TLegend *leg_btag_0 = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_btag_0->AddEntry(hsig_btag_0, "Signal", "l");
  leg_btag_0->AddEntry(hbkg_btag_0, "TTbarSemileptonic", "l");
  leg_btag_0->AddEntry(hbkg_btag_0_h, "TTbar_Hadronic", "l");
  leg_btag_0->AddEntry(hbkg_btag_0_d, "TTbar_Dileptonic", "l");
  //leg_btag_0->AddEntry(hbkg_btag_0_w, "WJets_to_LNu", "l");
  leg_btag_0->Draw();
  
  TCanvas *c_btag1 = new TCanvas("btag1", "btag1", 1000, 1000);
  hbkg_btag_1_w->GetXaxis()->SetTitle("btag1");
  hbkg_btag_1_w->GetYaxis()->SetTitle("Entries");
  hbkg_btag_1_w->SetLineColor(kGreen);
  hbkg_btag_1_w->Scale(1./hbkg_btag_1_w->Integral());
  //hbkg_btag_1_w->Draw("Ehist");

  hbkg_btag_1->GetXaxis()->SetTitle("btag1");
  hbkg_btag_1->GetYaxis()->SetTitle("Entries");
  hbkg_btag_1->SetLineColor(kRed);
  hbkg_btag_1->Scale(1./hbkg_btag_1->Integral());
  hsig_btag_1->Draw("Ehist");
  hbkg_btag_1->Draw("Ehist,sames");

  hbkg_btag_1_h->GetXaxis()->SetTitle("btag1");
  hbkg_btag_1_h->GetYaxis()->SetTitle("Entries");
  hbkg_btag_1_h->SetLineColor(kBlue);
  hbkg_btag_1_h->Scale(1./hbkg_btag_1_h->Integral());
  hbkg_btag_1_h->Draw("Ehist,sames");

  hbkg_btag_1_d->GetXaxis()->SetTitle("btag1");
  hbkg_btag_1_d->GetYaxis()->SetTitle("Entries");
  hbkg_btag_1_d->SetLineColor(kYellow);
  hbkg_btag_1_d->Scale(1./hbkg_btag_1_d->Integral());
  hbkg_btag_1_d->Draw("Ehist,sames");

  hsig_btag_1->GetXaxis()->SetTitle("btag1");
  hsig_btag_1->GetYaxis()->SetTitle("Entries");
  hsig_btag_1->SetLineColor(kBlack);
  hsig_btag_1->Scale(1./hsig_btag_1->Integral());
  

  TLegend *leg_btag_1 = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_btag_1->AddEntry(hsig_btag_1, "Signal", "l");
  leg_btag_1->AddEntry(hbkg_btag_1, "TTbarSemileptonic", "l");
  leg_btag_1->AddEntry(hbkg_btag_1_h, "TTbar_Hadronic", "l");
  leg_btag_1->AddEntry(hbkg_btag_1_d, "TTbar_Dileptonic", "l");
  //leg_btag_1->AddEntry(hbkg_btag_1_w, "WJets_to_LNu", "l");
  leg_btag_1->Draw();

  TCanvas *c_btag2 = new TCanvas("btag2", "btag2", 1000, 1000);
  hbkg_btag_2_w->GetXaxis()->SetTitle("btag2");
  hbkg_btag_2_w->GetYaxis()->SetTitle("Entries");
  hbkg_btag_2_w->SetLineColor(kGreen);
  hbkg_btag_2_w->Scale(1./hbkg_btag_2_w->Integral());
  //hbkg_btag_2_w->Draw("Ehist");

  hbkg_btag_2->GetXaxis()->SetTitle("btag2");
  hbkg_btag_2->GetYaxis()->SetTitle("Entries");
  hbkg_btag_2->SetLineColor(kRed);
  hbkg_btag_2->Scale(1./hbkg_btag_2->Integral());
  hbkg_btag_2_d->Draw("Ehist");
  hsig_btag_2->Draw("Ehist,sames");
  hbkg_btag_2->Draw("Ehist,sames");

  hbkg_btag_2_h->GetXaxis()->SetTitle("btag2");
  hbkg_btag_2_h->GetYaxis()->SetTitle("Entries");
  hbkg_btag_2_h->SetLineColor(kBlue);
  hbkg_btag_2_h->Scale(1./hbkg_btag_2_h->Integral());
  hbkg_btag_2_h->Draw("Ehist,sames");

  hbkg_btag_2_d->GetXaxis()->SetTitle("btag2");
  hbkg_btag_2_d->GetYaxis()->SetTitle("Entries");
  hbkg_btag_2_d->SetLineColor(kYellow);
  hbkg_btag_2_d->Scale(1./hbkg_btag_2_d->Integral());
  

  hsig_btag_2->GetXaxis()->SetTitle("btag2");
  hsig_btag_2->GetYaxis()->SetTitle("Entries");
  hsig_btag_2->SetLineColor(kBlack);
  hsig_btag_2->Scale(1./hsig_btag_2->Integral());
  

  TLegend *leg_btag_2 = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_btag_2->AddEntry(hsig_btag_2, "Signal", "l");
  leg_btag_2->AddEntry(hbkg_btag_2, "TTbarSemileptonic", "l");
  leg_btag_2->AddEntry(hbkg_btag_2_h, "TTbar_Hadronic", "l");
  leg_btag_2->AddEntry(hbkg_btag_2_d, "TTbar_Dileptonic", "l");
  //leg_btag_2->AddEntry(hbkg_btag_2_w, "WJets_to_LNu", "l");
  leg_btag_2->Draw();

  TCanvas *c_btag3 = new TCanvas("btag3", "btag3", 1000, 1000);
  hbkg_btag_3_w->GetXaxis()->SetTitle("btag3");
  hbkg_btag_3_w->GetYaxis()->SetTitle("Entries");
  hbkg_btag_3_w->SetLineColor(kGreen);
  hbkg_btag_3_w->Scale(1./hbkg_btag_3_w->Integral());
  //hbkg_btag_3_w->Draw("Ehist");

  hbkg_btag_3->GetXaxis()->SetTitle("btag3");
  hbkg_btag_3->GetYaxis()->SetTitle("Entries");
  hbkg_btag_3->SetLineColor(kBlack);
  hbkg_btag_3->Scale(1./hbkg_btag_3->Integral());
  hbkg_btag_3_d->Draw("Ehist");
  hsig_btag_3->Draw("Ehist,sames");
  hbkg_btag_3->Draw("Ehist,sames");

  hbkg_btag_3_h->GetXaxis()->SetTitle("btag3");
  hbkg_btag_3_h->GetYaxis()->SetTitle("Entries");
  hbkg_btag_3_h->SetLineColor(kRed);
  hbkg_btag_3_h->Scale(1./hbkg_btag_3_h->Integral());
  hbkg_btag_3_h->Draw("Ehist,sames");

  hbkg_btag_3_d->GetXaxis()->SetTitle("btag3");
  hbkg_btag_3_d->GetYaxis()->SetTitle("Entries");
  hbkg_btag_3_d->SetLineColor(kYellow);
  hbkg_btag_3_d->Scale(1./hbkg_btag_3_d->Integral());
  

  hsig_btag_3->GetXaxis()->SetTitle("btag3");
  hsig_btag_3->GetYaxis()->SetTitle("Entries");
  hsig_btag_3->SetLineColor(kBlack);
  hsig_btag_3->Scale(1./hsig_btag_3->Integral());
  

  TLegend *leg_btag_3 = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_btag_3->AddEntry(hsig_btag_3, "Signal", "l");
  leg_btag_3->AddEntry(hbkg_btag_3, "TTbarSemileptonic", "l");
  leg_btag_3->AddEntry(hbkg_btag_3_h, "TTbar_Hadronic", "l");
  leg_btag_3->AddEntry(hbkg_btag_3_d, "TTbar_Dileptonic", "l");
  //leg_btag_3->AddEntry(hbkg_btag_3_w, "WJets_to_LNu", "l");
  leg_btag_3->Draw();


  TCanvas *c_jet_pt = new TCanvas("HT", "HT", 1000, 1000);
  hbkg_jet_pt_w->GetXaxis()->SetTitle("btag3");
  hbkg_jet_pt_w->GetYaxis()->SetTitle("Entries");
  hbkg_jet_pt_w->SetLineColor(kGreen);
  hbkg_jet_pt_w->Scale(1./hbkg_jet_pt_w->Integral());
  //hsig_jet_pt->Draw("Ehist");

  hsig_jet_pt->GetXaxis()->SetTitle("btag3");
  hsig_jet_pt->GetYaxis()->SetTitle("Entries");
  hsig_jet_pt->SetLineColor(kBlack);
  hsig_jet_pt->Scale(1./hbkg_btag_3->Integral());
  hsig_jet_pt->Draw("Ehist");
  hbkg_jet_pt_h->Draw("Ehist,sames");
  hbkg_jet_pt_d->Draw("Ehist,sames");

  hbkg_jet_pt_h->GetXaxis()->SetTitle("btag3");
  hbkg_jet_pt_h->GetYaxis()->SetTitle("Entries");
  hbkg_jet_pt_h->SetLineColor(kRed);
  hbkg_jet_pt_h->Scale(1./hbkg_jet_pt_h->Integral());
  hbkg_jet_pt_h->Draw("Ehist,sames");

  hbkg_jet_pt_d->GetXaxis()->SetTitle("btag3");
  hbkg_jet_pt_d->GetYaxis()->SetTitle("Entries");
  hbkg_jet_pt_d->SetLineColor(kYellow);
  hbkg_jet_pt_d->Scale(1./hbkg_jet_pt_d->Integral());
  

  hbkg_jet_pt->GetXaxis()->SetTitle("btag3");
  hbkg_jet_pt->GetYaxis()->SetTitle("Entries");
  hbkg_jet_pt->SetLineColor(kBlack);
  hbkg_jet_pt->Scale(1./hbkg_jet_pt->Integral());
  

  TLegend *leg_jet_pt = new TLegend(0.4, 0.4, 0.5, 0.5);
  leg_jet_pt->AddEntry(hsig_jet_pt, "Signal", "l");
  leg_jet_pt->AddEntry(hbkg_jet_pt, "TTbarSemileptonic", "l");
  leg_jet_pt->AddEntry(hbkg_jet_pt_h, "TTbar_Hadronic", "l");
  leg_jet_pt->AddEntry(hbkg_jet_pt_d, "TTbar_Dileptonic", "l");
  //leg_jet_pt->AddEntry(hbkg_jet_pt_w, "WJets_to_LNu", "l");
  leg_jet_pt->Draw();
}