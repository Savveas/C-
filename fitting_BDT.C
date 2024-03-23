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
TH1 *h_dil = (TH1*)file_Dileptonic->Get("BDT_eval");
TH1 *h_had = (TH1*)file_Hadronic->Get("BDT_eval");
TH1 *h_sem = (TH1*)file_Semileptonic->Get("BDT_eval");
TH1 *h_W = (TH1*)file_W->Get("BDT_eval");

float sig_N = 671.209*0.61;
float dil_N = 10107.8;
float had_N = 55.0982;
float sem_N = 39415.7;
float W_N = 258.316;

RooRealVar output_BDT("output_BDT","output_BDT",-1.,1.);


RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,0.,2*sig_N);
RooRealVar Nexp_dil("Nexp_dil","Expected number of ttbar dileptonic events",dil_N,0.,2*dil_N);
RooRealVar Nexp_had("Nexp_had","Expected number of ttbar hadronic events",had_N,0.,2*had_N);
RooRealVar Nexp_sem("Nexp_se,","Expected number of ttbar semileptonic events",sem_N,0.,2*sem_N);
RooRealVar Nexp_W("Nexp_W","Expected number of WtoLnu events",W_N,0.,2*W_N);


std::cout<<"RooRealVar"<<std::endl;


RooDataHist sig("sig","sig",output_BDT,sig);
RooDataHist dil("dil","dil",output_BDT,dil);
RooDataHist had("had","had",output_BDT,had);
RooDataHist sem("sem","sem",output_BDT,sem);
RooDataHist W("W","W",output_BDT,W);


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


RooDataSet *data_B = model_0.generate(output_BDT,Ntotal_B);
return;
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);
std::cout<<"RooDateSet"<<std::endl;

RooFitResult *fit_model_0_B = model_0.fitTo(*data_B, Save());
return;
RooFitResult *fit_model_1_B = model_1.fitTo(*data_B, Save());
std::cout<<"RooFitResult_B"<<std::endl;

RooFitResult *fit_model_0_SB = model_0.fitTo(*data_SB, Save());
RooFitResult *fit_model_1_SB = model_1.fitTo(*data_SB, Save());
std::cout<<"RooFitResult_SB"<<std::endl;

TCanvas *c_B = new TCanvas("c_B", "BackgrounD Fit", 800, 600);
    RooPlot *frame_B = output_BDT.frame(Bins(20));
    data_B->plotOn(frame_B);
    model_0.plotOn(frame_B);
    frame_B->Draw();

TCanvas *c_SB = new TCanvas("c_SB", "Signal + Background Fit", 800, 600);
    RooPlot *frame_SB = output_BDT.frame(Bins(20));
    data_SB->plotOn(frame_SB);
    model_1.plotOn(frame_SB);
    frame_SB->Draw();

    // Save the canvases
    //c_B->SaveAs("Background_Fit.png");
    //c_SB->SaveAs("Signal_Background_Fit.png");



}