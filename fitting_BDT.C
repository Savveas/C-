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

using namespace RooFit ;

void fitting_BDT() {

TFile *file = new TFile("output.root");
TFile *file_Dileptonic = new TFile("output_TTbarDileptonic.root");
TFile *file_Hadronic = new TFile("output_TTbarHadronic.root");
TFile *file_Semileptonic = new TFile("output_TTbarSemileptonic.root");
TFile *file_W = new TFile("output_WJetsToLNu.root");

TH1 *h_sig = (TH1*)file->Get("BDT_eval");
h_sig->Rebin(5);
TH1 *h_dil = (TH1*)file_Dileptonic->Get("BDT_eval");
h_dil->Rebin(5);
TH1 *h_had = (TH1*)file_Hadronic->Get("BDT_eval");
h_had->Rebin(5);
TH1 *h_sem = (TH1*)file_Semileptonic->Get("BDT_eval");
h_sem->Rebin(5);
TH1 *h_W = (TH1*)file_W->Get("BDT_eval");
h_W->Rebin(5);

float sig_N = 671.209*0.61;
float dil_N = 10107.8;
float had_N = 55.0982;
float sem_N = 39415.7;
float W_N = 258.316;

RooRealVar output_BDT("output_BDT","output_BDT",-1.,1.);


RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,0.,2*sig_N);
RooRealVar Nexp_dil("Nexp_dil","Expected number of ttbar dileptonic events",dil_N,0.,2*dil_N);
RooRealVar Nexp_had("Nexp_had","Expected number of ttbar hadronic events",had_N,0.,2*had_N);
RooRealVar Nexp_sem("Nexp_sem","Expected number of ttbar semileptonic events",sem_N,0.,2*sem_N);
RooRealVar Nexp_W("Nexp_W","Expected number of WtoLnu events",W_N,0.,2*W_N);


std::cout<<"RooRealVar"<<std::endl;


RooDataHist sig("sig","sig",output_BDT,h_sig);
RooDataHist dil("dil","dil",output_BDT,h_dil);
RooDataHist had("had","had",output_BDT,h_had);
RooDataHist sem("sem","sem",output_BDT,h_sem);
RooDataHist W("W","W",output_BDT,h_W);


std::cout<<"RooDataHist"<<std::endl;



RooHistPdf sig_pdf("sig_pdf","sig_pdf",output_BDT,sig);
RooHistPdf dil_pdf("dil_pdf","dil_pdf",output_BDT,dil);
RooHistPdf had_pdf("had_pdf","had_pdf",output_BDT,had);
RooHistPdf sem_pdf("sem_pdf","sem_pdf",output_BDT,sem);
RooHistPdf W_pdf("W_pdf","W_pdf",output_BDT,W);


std::cout<<"RooHistPdf"<<std::endl;



RooAddPdf model_0("model_0", "Background", RooArgList(dil_pdf, had_pdf, sem_pdf, W_pdf), RooArgList(Nexp_dil, Nexp_had, Nexp_sem, Nexp_W));
RooAddPdf model_1("model_1", "Signal + Background", RooArgList(sig_pdf, dil_pdf, had_pdf, sem_pdf, W_pdf), RooArgList(Nexp_sig, Nexp_dil, Nexp_had, Nexp_sem, Nexp_W));



std::cout<<"RooAddPdf"<<std::endl;



float Ntotal_B = dil_N+had_N+sem_N+W_N;
float Ntotal_SB = sig_N+dil_N+had_N+sem_N+W_N;
std::cout<<Ntotal_B<<std::endl;
std::cout<<Ntotal_SB<<std::endl;


RooDataSet *data_B = model_0.generate(output_BDT,Ntotal_B);
//return;
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);
std::cout<<"RooDateSet"<<std::endl;

RooFitResult *fit_model_0_B = model_0.fitTo(*data_B, Save());
//return;
RooFitResult *fit_model_1_B = model_1.fitTo(*data_B, Save());
std::cout<<"RooFitResult_B"<<std::endl;

RooFitResult *fit_model_0_SB = model_0.fitTo(*data_SB, Save());
RooFitResult *fit_model_1_SB = model_1.fitTo(*data_SB, Save());
std::cout<<"RooFitResult_SB"<<std::endl;

TCanvas *c_B = new TCanvas("c_B", "BackgrounD Fit", 1400, 1000);
    RooPlot *frame_B = output_BDT.frame(Bins(20));
    data_B->plotOn(frame_B);
    model_0.plotOn(frame_B);
    model_0.plotOn(frame_B, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_B, LineColor(kRed),Components("dil_pdf"));
    model_0.plotOn(frame_B, LineColor(kGreen),Components("had_pdf"));
    model_0.plotOn(frame_B, LineColor(kViolet),Components("sem_pdf"));
    model_0.plotOn(frame_B, LineColor(kCyan),Components("W_pdf"));
    frame_B->Draw();

    RooCurve* curve_0 = dynamic_cast<RooCurve*>(frame_B->getObject(1));

    TLegend *legend_1 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_1->AddEntry(data_B, "Background Data", "p"); 
    if(curve_0) legend_1->AddEntry(curve_0, "Fit model_0", "l"); // "l" for line
    legend_1->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_1->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_1->AddEntry(data_B, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_1->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_1->AddEntry(data_B, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_1->SetBorderSize(0); 
    legend_1->Draw();

TCanvas *c_SB = new TCanvas("c_SB", "Signal + Background Fit", 1400, 1000);
    RooPlot *frame_SB = output_BDT.frame(Bins(20));
    data_SB->plotOn(frame_SB);
    model_0.plotOn(frame_SB);
    model_0.plotOn(frame_SB, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_SB, LineColor(kRed),Components("dil_pdf"));
    model_0.plotOn(frame_SB, LineColor(kGreen),Components("had_pdf"));
    model_0.plotOn(frame_SB, LineColor(kViolet),Components("sem_pdf"));
    model_0.plotOn(frame_SB, LineColor(kCyan),Components("W_pdf"));
    frame_SB->Draw();

    RooCurve* curve_1 = dynamic_cast<RooCurve*>(frame_SB->getObject(1));

    TLegend *legend_2 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_2->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_1) legend_2->AddEntry(curve_1, "Fit model_0", "l"); // "l" for line
    legend_2->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_2->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_2->AddEntry(data_SB, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_2->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_2->AddEntry(data_SB, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_2->SetBorderSize(0); 
    legend_2->Draw();

TCanvas *c_B_1 = new TCanvas("c_B_1", "Background Fit", 1400, 1000);
    RooPlot *frame_B1 = output_BDT.frame(Bins(20));
    data_B->plotOn(frame_B1);
    model_1.plotOn(frame_B1);
    model_1.plotOn(frame_B1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_B1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_B1, LineColor(kGreen),Components("had_pdf"));
    model_1.plotOn(frame_B1, LineColor(kViolet),Components("sem_pdf"));
    model_1.plotOn(frame_B1, LineColor(kCyan),Components("W_pdf"));
    frame_B1->Draw();

    RooCurve* curve_2 = dynamic_cast<RooCurve*>(frame_B1->getObject(1));

    TLegend *legend_3 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_3->AddEntry(data_B, "Background Data", "p"); 
    if(curve_2) legend_3->AddEntry(curve_2, "Fit model_1", "l"); // "l" for line
    legend_3->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_3->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_3->AddEntry(data_B, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_3->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_3->AddEntry(data_B, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_3->SetBorderSize(0); 
    legend_3->Draw();


TCanvas *c_SB_1 = new TCanvas("c_SB_1", "Signal + Background Fit", 1400, 1000);
    RooPlot *frame_SB1 = output_BDT.frame(Bins(20));
    data_SB->plotOn(frame_SB1);
    model_1.plotOn(frame_SB1);
    model_1.plotOn(frame_SB1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kGreen),Components("had_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kViolet),Components("sem_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kCyan),Components("W_pdf"));
    frame_SB1->Draw();

    RooCurve* curve_3 = dynamic_cast<RooCurve*>(frame_SB1->getObject(1));

    TLegend *legend_4 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_4->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_3) legend_2->AddEntry(curve_3, "Fit model_0", "l"); // "l" for line
    legend_4->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_4->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_4->AddEntry(data_SB, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_4->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_4->AddEntry(data_SB, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_4->SetBorderSize(0); 
    legend_4->Draw();

    // Save the canvases
    //c_B->SaveAs("Background_Fit.png");
    //c_SB->SaveAs("Signal_Background_Fit.png");



}