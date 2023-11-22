#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>


void plots2(){
TFile *inputfile=TFile::Open("histos.root","READ");

TH2F *h_mn_pt_eta = (TH2F*)inputfile->Get("h_mn_pt_eta");
TH2F *h_mn_en_phi = (TH2F*)inputfile->Get("h_mn_en_phi");

TH2F *h_en_pt_eta = (TH2F*)inputfile->Get("h_mn_pt_eta");

TH2F *h_met_mn_pt = (TH2F*)inputfile->Get("h_met_mn_pt");
TH2F *h_met_en_pt = (TH2F*)inputfile->Get("h_met_en_pt");


gStyle->SetPalette(kRainBow);

//2D
TCanvas *c_2D_muons = new TCanvas ("muons2D","muons2D",1000,1000);
h_mn_pt_eta->Draw("colz");


//2D
TCanvas *c_2D_electrons = new TCanvas ("electrons2D","electrons2D",1000,1000);
h_en_pt_eta->Draw("colz");

//2D muon-electron
TCanvas *c_2d_phi = new TCanvas("muon-electron phi","muon-electron phi",1000,1000);
h_mn_en_phi->Draw("colz");


//MET-muon
TCanvas *c_2D = new TCanvas("2D","2D",1000,1000); 
c_2D->Divide(1,2);
c_2D->cd(1);
h_met_mn_pt->Draw("colz");
c_2D->cd(2);
h_met_en_pt->Draw("colz");
}