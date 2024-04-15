#include <iostream>
#include "TCanvas.h"
#include "TH1F.h"
#include "TFile.h"
#include "RooRealVar.h"
#include "RooDataSet.h"
#include "RooGaussian.h"
#include "RooPlot.h"
#include "RooFitResult.h"
#include "RooAddPdf.h"
#include "RooDataHist.h"
#include "RooArgList.h"
#include "RooHist.h"
#include "RooBinning.h"
#include "RooMCStudy.h"


using namespace RooFit ;

void FIT() {

TFile *file = new TFile("output.root");
TFile *file_Dileptonic = new TFile("output_TTbarDileptonic.root");
TFile *file_Hadronic = new TFile("output_TTbarHadronic.root");
TFile *file_Semileptonic = new TFile("output_TTbarSemileptonic.root");
TFile *file_W_70to100 = new TFile("output_WJetsToLNu_70to100.root");
TFile *file_W_100to200 = new TFile("output_WJetsToLNu_100to200.root");
TFile *file_W_200to400 = new TFile("output_WJetsToLNu_200to400.root");
TFile *file_W_400to600 = new TFile("output_WJetsToLNu_400to600.root");
TFile *file_W_600to800 = new TFile("output_WJetsToLNu_600to800.root");
TFile *file_W_800to1200 = new TFile("output_WJetsToLNu_800to1200.root");
TFile *file_W_1200to2500 = new TFile("output_WJetsToLNu_1200to2500.root");
TFile *file_W_0 = new TFile("output_WJetsToLNu_0.root");
TFile *file_qcd_80to170 = new TFile("output_qcd_bctoE_80to170.root");
TFile *file_qcd_170to250 = new TFile("output_qcd_bctoE_170to250.root");
TFile *file_qcd_250toInf = new TFile("output_qcd_bctoE_250toInf.root");


int rbin=10;
TH1 *h_sig = (TH1*)file->Get("BDT_eval");
h_sig->Rebin(rbin);
TH1 *h_dil = (TH1*)file_Dileptonic->Get("BDT_eval");
h_dil->Rebin(rbin);
TH1 *h_sem = (TH1*)file_Semileptonic->Get("BDT_eval");
h_sem->Rebin(rbin);
TH1 *h_W_70to100 = (TH1*)file_W_70to100->Get("BDT_eval");
h_W_70to100->Rebin(rbin);
TH1 *h_W_100to200 = (TH1*)file_W_100to200->Get("BDT_eval");
h_W_100to200->Rebin(rbin);
TH1 *h_W_200to400 = (TH1*)file_W_200to400->Get("BDT_eval");
h_W_200to400->Rebin(rbin);
TH1 *h_W_400to600 = (TH1*)file_W_400to600->Get("BDT_eval");
h_W_400to600->Rebin(rbin);
TH1 *h_W_600to800 = (TH1*)file_W_600to800->Get("BDT_eval");
h_W_600to800->Rebin(rbin);
TH1 *h_W_800to1200 = (TH1*)file_W_800to1200->Get("BDT_eval");
h_W_800to1200->Rebin(rbin);
TH1 *h_W_1200to2500 = (TH1*)file_W_1200to2500->Get("BDT_eval");
h_W_1200to2500->Rebin(rbin);
TH1 *h_W_0 = (TH1*)file_W_0->Get("BDT_eval");
h_W_0->Rebin(rbin);
TH1 *h_qcd_80to170 = (TH1*)file_qcd_80to170->Get("BDT_eval");
h_qcd_80to170->Rebin(rbin);
TH1 *h_qcd_170to250 = (TH1*)file_qcd_170to250->Get("BDT_eval");
h_qcd_170to250->Rebin(rbin);
TH1 *h_qcd_250toInf = (TH1*)file_qcd_250toInf->Get("BDT_eval");
h_qcd_250toInf->Rebin(rbin);
TH1 *h_bkg = (TH1*)file_Hadronic->Get("BDT_eval");
h_bkg->Rebin(rbin);
h_bkg->Add(h_W_70to100);
h_bkg->Add(h_W_100to200);
h_bkg->Add(h_W_200to400);
h_bkg->Add(h_W_400to600);
h_bkg->Add(h_W_600to800);
h_bkg->Add(h_W_800to1200);
h_bkg->Add(h_W_1200to2500);
h_bkg->Add(h_W_0);
h_bkg->Add(h_qcd_80to170);
h_bkg->Add(h_qcd_170to250);
h_bkg->Add(h_qcd_250toInf);



int nbins=10; 
float sig_N = 671.209*0.61;
float dil_N = 10107.8;
float had_N = 55.0982;
float sem_N = 39415.7;
float W_N = 258.316;
float WtoLn_70to100= 59.051;
float WtoLn_100to200= 256.979;
float WtoLn_200to400=337.177;
float WtoLn_400to600= 139.891;
float WtoLn_600to800= 50.7502;
float WtoLn_800to1200= 30.0942;
float WtoLn_1200to2500= 8.47057;
float WtoLn_0= 0.941911;
float qcd_bctoe_80to170= 1877.9;
float qcd_bctoe_170to250= 299.912;
float qcd_bctoe_Inf= 144.815;
float qcd_bctoe_All=2322.62;
float bkg_N=had_N+WtoLn_70to100+WtoLn_100to200+WtoLn_200to400+WtoLn_400to600+WtoLn_600to800+WtoLn_800to1200+WtoLn_1200to2500+WtoLn_0+qcd_bctoe_80to170+qcd_bctoe_170to250+qcd_bctoe_Inf;

RooRealVar output_BDT("output_BDT","BDT score",-1.,1.);

RooRealVar Nexp_sig_th("Nexp_sig_th","Expected number of signal events",sig_N);
RooRealVar Nexp_dil_th("Nexp_dil_th","Expected number of ttbar dileptonic events",dil_N);
RooRealVar Nexp_sem_th("Nexp_sem_th","Expected number of ttbar semileptonic events",sem_N);
RooRealVar Nexp_bkg_th("Nexp_TTbar_th","Expected number of ttbar events",bkg_N);



RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,-2.*sig_N,2.*sig_N);
RooRealVar Nexp_dil("Nexp_dil","Expected number of ttbar dileptonic events",dil_N,-2.*dil_N,2*dil_N);
RooRealVar Nexp_sem("Nexp_sem","Expected number of ttbar semileptonic events",sem_N,-2.*sem_N,2*sem_N);
RooRealVar Nexp_bkg("Nexp_TTbar_th","Expected number of ttbar events",bkg_N,-2.*bkg_N,2*bkg_N);

RooDataHist sig("sig","sig",output_BDT,h_sig);
RooDataHist dil("dil","dil",output_BDT,h_dil);
RooDataHist sem("sem","sem",output_BDT,h_sem);
RooDataHist bkg("bkg","bkg",output_BDT,h_bkg);


RooHistPdf sig_pdf("sig_pdf","sig_pdf",output_BDT,sig);
RooHistPdf dil_pdf("dil_pdf","dil_pdf",output_BDT,dil);
RooHistPdf sem_pdf("sem_pdf","sem_pdf",output_BDT,sem);
RooHistPdf bkg_pdf("bkg_pdf","bkg_pdf",output_BDT,bkg);


RooAddPdf model_0("model_0", "Background", RooArgList(dil_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_dil, Nexp_sem, Nexp_bkg));
RooAddPdf model_1("model_1", "Signal + Background", RooArgList(sig_pdf, dil_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_sig, Nexp_dil, Nexp_sem, Nexp_bkg));


RooAddPdf model_0_th("model_0_th", "Background_th", RooArgList(dil_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_dil_th, Nexp_sem_th, Nexp_bkg_th));
RooAddPdf model_1_th("model_1_th", "Signal + Background_th", RooArgList(sig_pdf, dil_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_sig_th, Nexp_dil_th, Nexp_sem_th, Nexp_bkg_th));


float Ntotal_B = dil_N+sem_N+bkg_N;
float Ntotal_SB = sig_N+dil_N+sem_N+bkg_N;


RooDataSet *data_B = model_0.generate(output_BDT,Ntotal_B);
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);

//------------------------------data fits-------------------------
RooFitResult *fit_model_0_B = model_0.fitTo(*data_B, Save());
fit_model_0_B->Print("v");
double lnL_model0_B = model_0.createNLL(*data_B)->getVal();
std::cout << "NLL model 0B: " << lnL_model0_B << std::endl;

Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_bkg.setVal(Nexp_bkg_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
RooFitResult *fit_model_1_B = model_1.fitTo(*data_B, Save());
fit_model_1_B->Print("v");
double lnL_model1_B = model_1.createNLL(*data_B)->getVal();
std::cout << "NLL model 1B: " << lnL_model1_B << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_bkg.setVal(Nexp_bkg_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
RooFitResult *fit_model_0_SB = model_0.fitTo(*data_SB, Save());
fit_model_0_SB->Print("v");
double lnL_model0_SB = model_0.createNLL(*data_SB)->getVal();
std::cout << "NLL model_0 S+B: " << lnL_model0_SB << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_bkg.setVal(Nexp_bkg_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
RooFitResult *fit_model_1_SB = model_1.fitTo(*data_SB, Save());
fit_model_1_SB->Print("v");
double lnL_model1_SB = model_1.createNLL(*data_SB)->getVal(); 
std::cout << "NLL model_1 S+B: " << lnL_model1_SB  << std::endl;


TCanvas *c_B = new TCanvas("c_B", "BackgrounD Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_B = output_BDT.frame(Bins(nbins));
   // frame_B->GetYaxis()->SetRangeUser(10, 1000000);

    data_B->plotOn(frame_B);
    model_0.plotOn(frame_B);
    model_0.plotOn(frame_B, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_B, LineColor(kRed),Components("dil_pdf"));
    model_0.plotOn(frame_B, LineColor(kGreen),Components("bkg_pdf"));
    model_0.plotOn(frame_B, LineColor(kViolet),Components("sem_pdf"));
    frame_B->Draw();

    RooCurve* curve_0 = dynamic_cast<RooCurve*>(frame_B->getObject(1));

    TLegend *legend_1 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_1->AddEntry(data_B, "Background Data", "p"); 
    if(curve_0) legend_1->AddEntry(curve_0, "Fit model_0", "l"); // "l" for line
    legend_1->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_1->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_1->AddEntry(data_B, "TTbar Hadronic + WtoLnu + qcd_bctoe", "l")->SetLineColor(kGreen); 
    legend_1->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_1->SetBorderSize(0); 
    legend_1->Draw();


TCanvas *c_SB = new TCanvas("c_SB", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB);
    model_0.plotOn(frame_SB);
    model_0.plotOn(frame_SB, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_SB, LineColor(kRed),Components("dil_pdf"));
    model_0.plotOn(frame_SB, LineColor(kGreen),Components("bkg_pdf"));
    model_0.plotOn(frame_SB, LineColor(kViolet),Components("sem_pdf"));
    frame_SB->Draw();
    RooCurve* curve_1 = dynamic_cast<RooCurve*>(frame_SB->getObject(1));

    TLegend *legend_2 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_2->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_1) legend_2->AddEntry(curve_1, "Fit model_0", "l"); // "l" for line
    legend_2->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_2->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_2->AddEntry(data_SB, "TTbar Hadronic + WtoLnu + qcd_bctoe", "l")->SetLineColor(kGreen); 
    legend_2->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_2->SetBorderSize(0); 
    legend_2->Draw();

TCanvas *c_B_1 = new TCanvas("c_B_1", "Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_B1 = output_BDT.frame(Bins(nbins));
    data_B->plotOn(frame_B1);
    model_1.plotOn(frame_B1);
    model_1.plotOn(frame_B1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_B1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_B1, LineColor(kGreen),Components("bkg_pdf"));
    model_1.plotOn(frame_B1, LineColor(kViolet),Components("sem_pdf"));
    frame_B1->Draw();

    RooCurve* curve_2 = dynamic_cast<RooCurve*>(frame_B1->getObject(1));

    TLegend *legend_3 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_3->AddEntry(data_B, "Background Data", "p"); 
    if(curve_2) legend_3->AddEntry(curve_2, "Fit model_1", "l"); // "l" for line
    legend_3->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_3->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_3->AddEntry(data_B, "TTbar Hadronic + WtoLnu + qcd_bctoe", "l")->SetLineColor(kGreen); 
    legend_3->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_3->SetBorderSize(0); 
    legend_3->Draw();


TCanvas *c_SB_1 = new TCanvas("c_SB_1", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB1 = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB1);
    model_1.plotOn(frame_SB1);
    model_1.plotOn(frame_SB1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kGreen),Components("bkg_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kViolet),Components("sem_pdf"));
    frame_SB1->Draw();

    RooCurve* curve_3 = dynamic_cast<RooCurve*>(frame_SB1->getObject(1));

    TLegend *legend_4 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_4->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_3) legend_4->AddEntry(curve_3, "Fit model_1", "l"); // "l" for line
    legend_4->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_4->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_4->AddEntry(data_SB, "TTbar Hadronic + WtoLnu + qcd_bctoe", "l")->SetLineColor(kGreen); 
    legend_4->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_4->SetBorderSize(0); 
    legend_4->Draw();
}