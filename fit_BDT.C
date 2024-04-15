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

void fit_BDT() {

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
TH1 *h_had = (TH1*)file_Hadronic->Get("BDT_eval");
h_had->Rebin(rbin);
TH1 *h_TTbar = (TH1*)file_Semileptonic->Get("BDT_eval");
h_TTbar->Rebin(rbin);
//TH1 *h_TTbar=(TH1*)h_sem->Clone();
h_TTbar->Add(h_had);
h_TTbar->Add(h_dil);
TH1 *h_WtoLn = (TH1*)file_W_70to100->Get("BDT_eval");
h_WtoLn->Rebin(rbin);
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
//TH1 *h_WtoLn=(TH1*)h_W_70to100->Clone();
h_WtoLn->Add(h_W_100to200);
h_WtoLn->Add(h_W_200to400);
h_WtoLn->Add(h_W_400to600);
h_WtoLn->Add(h_W_600to800);
h_WtoLn->Add(h_W_800to1200);
h_WtoLn->Add(h_W_1200to2500);
h_WtoLn->Add(h_W_0);
h_WtoLn->Add(h_qcd_80to170);
h_WtoLn->Add(h_qcd_170to250);
h_WtoLn->Add(h_qcd_250toInf);



int nbins=10; 
float sig_N = 671.209*0.61;
float dil_N = 10107.8;
float had_N = 55.0982;
float sem_N = 39415.7;
float W_N = 258.316;
//float wtoLn_N=883.355;
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
//float qcd_bctoe_All=2322.62;
float wtoLn_N=WtoLn_70to100+WtoLn_100to200+WtoLn_200to400+WtoLn_400to600+WtoLn_600to800+WtoLn_800to1200+WtoLn_1200to2500+WtoLn_0+qcd_bctoe_80to170+qcd_bctoe_170to250+qcd_bctoe_170to250;
float ttbar_N=sem_N+had_N+dil_N;


RooRealVar output_BDT("output_BDT","BDT score",-1.,1.);

RooRealVar Nexp_sig_th("Nexp_sig_th","Expected number of signal events",sig_N);
RooRealVar Nexp_ttbar_th("Nexp_TTbar_th","Expected number of ttbar events",ttbar_N);
RooRealVar Nexp_WtoLn_th("Nexp_WtoLn_th","Expected number of WtoLn events",wtoLn_N);


RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,-2.*sig_N,2.*sig_N);
RooRealVar Nexp_ttbar("Nexp_TTbar","Expected number of ttbar events",ttbar_N,-2.*ttbar_N,2.*ttbar_N);
RooRealVar Nexp_WtoLn("Nexp_WtoLn","Expected number of WtoLn events",wtoLn_N,-2.*wtoLn_N,2.*wtoLn_N);

RooDataHist sig("sig","sig",output_BDT,h_sig);
RooDataHist TTbar("TTbar","TTbar",output_BDT,h_TTbar);
RooDataHist WtoLn_N("WtoLn_N","WtoLn_N",output_BDT,h_WtoLn);

RooHistPdf sig_pdf("sig_pdf","sig_pdf",output_BDT,sig);
RooHistPdf TTbar_pdf("TTbar_pdf","TTbar_pdf",output_BDT,TTbar);
RooHistPdf WtoLn_pdf("WtoLn_pdf","WtoLn_pdf",output_BDT,WtoLn_N);


RooAddPdf model_0("model_0", "Background", RooArgList(TTbar_pdf,WtoLn_pdf), RooArgList(Nexp_ttbar,Nexp_WtoLn));
RooAddPdf model_1("model_1", "Signal + Background", RooArgList(sig_pdf, TTbar_pdf,WtoLn_pdf), RooArgList(Nexp_sig, Nexp_ttbar,Nexp_WtoLn));


RooAddPdf model_0_th("model_0_th", "Background_th", RooArgList(TTbar_pdf,WtoLn_pdf), RooArgList(Nexp_ttbar_th,Nexp_WtoLn));
RooAddPdf model_1_th("model_1_th", "Signal + Background_th", RooArgList(sig_pdf, TTbar_pdf,WtoLn_pdf), RooArgList(Nexp_sig_th, Nexp_ttbar_th,Nexp_WtoLn));


float Ntotal_B = ttbar_N+wtoLn_N;
float Ntotal_SB = sig_N+ttbar_N+wtoLn_N;


RooDataSet *data_B = model_0.generate(output_BDT,Ntotal_B);
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);


//--------------------MCstudys-------------------------------

//-----------------------model_0----------------------
RooMCStudy * mcstudy_0_1 = new RooMCStudy(model_0_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
const int Ntoys = 2000;
mcstudy_0_1->generateAndFit(Ntoys,Ntotal_B);

TCanvas *c_0_1 = new TCanvas("c_0_1", "Model0 Background (TTbar) Only", 800, 800);
  c_0_1->Divide(2,2);
  c_0_1->cd(1);
  RooPlot* frame1 = mcstudy_0_1->plotParam(Nexp_ttbar, Bins(25));
  frame1->Draw();
  c_0_1->cd(2);
  RooPlot* frame2 = mcstudy_0_1->plotError(Nexp_ttbar, Bins(50));
  frame2->Draw();
  c_0_1->cd(3);
  RooPlot* frame3 = mcstudy_0_1->plotPull(Nexp_ttbar, Bins(25),FitGauss(kTRUE)) ;
  frame3->Draw();
  c_0_1->cd(4);
  // Plot distribution of minimized likelihood
  RooPlot *frame400 = mcstudy_0_1->plotNLL(Bins(40));
  frame400->Draw();

TCanvas *c_0_100 = new TCanvas("c_0_100", "Model0 Background (WtoLn) Only", 800, 800);
  c_0_100->Divide(2,2);
  c_0_100->cd(1);
  RooPlot* frame100 = mcstudy_0_1->plotParam(Nexp_WtoLn, Bins(25));
  frame100->Draw();
  c_0_100->cd(2);
  RooPlot* frame200 = mcstudy_0_1->plotError(Nexp_WtoLn, Bins(50));
  frame200->Draw();
  c_0_100->cd(3);
  RooPlot* frame300 = mcstudy_0_1->plotPull(Nexp_WtoLn, Bins(25),FitGauss(kTRUE)) ;
  frame300->Draw();
  c_0_100->cd(4);
  // Plot distribution of minimized likelihood
  RooPlot *frame40000 = mcstudy_0_1->plotNLL(Bins(40));
  frame40000->Draw();


//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
  Nexp_WtoLn.setVal(Nexp_WtoLn_th.getVal());


RooMCStudy * mcstudy_0_2 = new RooMCStudy(model_0_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_1), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_0_2->generateAndFit(Ntoys);

TCanvas *c_0_9 = new TCanvas("c_0_9", "Model0 Background+Signal (signal) Only", 1600, 500);
  c_0_9->Divide(3,1);
  c_0_9->cd(1);
  RooPlot* frame25 = mcstudy_0_2->plotParam(Nexp_sig, Bins(25));
  frame25->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_9->cd(2);
  RooPlot* frame26 = mcstudy_0_2->plotError(Nexp_sig, Bins(50));
  frame26->Draw();
  c_0_9->cd(3);
  RooPlot* frame27 = mcstudy_0_2->plotPull(Nexp_sig, Bins(25),FitGauss(kTRUE));
  frame27->Draw();

TCanvas *c_0_900 = new TCanvas("c_0_900", "Model0 Background+Signal (WtoLn) Only", 1600, 500);
  c_0_900->Divide(3,1);
  c_0_900->cd(1);
  RooPlot* frame2500 = mcstudy_0_2->plotParam(Nexp_WtoLn, Bins(25));
  frame2500->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_900->cd(2);
  RooPlot* frame2600 = mcstudy_0_2->plotError(Nexp_WtoLn, Bins(50));
  frame2600->Draw();
  c_0_900->cd(3);
  RooPlot* frame2700 = mcstudy_0_2->plotPull(Nexp_WtoLn, Bins(25),FitGauss(kTRUE));
  frame2700->Draw();


TCanvas *c_0_5 = new TCanvas("c_0_5", "Model0 Background+Signal (TTbar) Only", 800, 800);
  c_0_5->Divide(2,2);
  c_0_5->cd(1);
  RooPlot* frame13 = mcstudy_0_2->plotParam(Nexp_ttbar, Bins(25));
  frame13->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_5->cd(2);
  RooPlot* frame14 = mcstudy_0_2->plotError(Nexp_ttbar, Bins(50));
  frame14->Draw();
  c_0_5->cd(3);
  RooPlot* frame15 = mcstudy_0_2->plotPull(Nexp_ttbar, Bins(25),FitGauss(kTRUE)) ;
  frame15->Draw();
  c_0_5->cd(4);
  RooPlot* frame150 = mcstudy_0_2->plotNLL(Bins(40));
  frame150->Draw();

//-------------------------model_1-------------------------------

//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
  Nexp_WtoLn.setVal(Nexp_WtoLn_th.getVal());

RooMCStudy * mcstudy_1_1 = new RooMCStudy(model_1_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_1->generateAndFit(Ntoys);

TCanvas *c_0_10 = new TCanvas("c_0_10", "Model1 Background (TTbar) Only", 1600, 500);
  c_0_10->Divide(3,1);
  c_0_10->cd(1);
  RooPlot* frame28 = mcstudy_1_1->plotParam(Nexp_ttbar, Bins(25));
  frame28->Draw();
  c_0_10->cd(2);
  RooPlot* frame29 = mcstudy_1_1->plotError(Nexp_ttbar, Bins(50));
  frame29->Draw();
  c_0_10->cd(3);
  RooPlot* frame30 = mcstudy_1_1->plotPull(Nexp_ttbar, Bins(25),FitGauss(kTRUE)) ;
  frame30->Draw();

TCanvas *c_0_1000 = new TCanvas("c_0_100", "Model1 Background (WtoLn) Only", 1600, 500);
  c_0_1000->Divide(3,1);
  c_0_1000->cd(1);
  RooPlot* frame2800 = mcstudy_1_1->plotParam(Nexp_WtoLn, Bins(25));
  frame2800->Draw();
  c_0_1000->cd(2);
  RooPlot* frame2900 = mcstudy_1_1->plotError(Nexp_WtoLn, Bins(50));
  frame2900->Draw();
  c_0_1000->cd(3);
  RooPlot* frame3000 = mcstudy_1_1->plotPull(Nexp_WtoLn, Bins(25),FitGauss(kTRUE)) ;
  frame3000->Draw();


//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
  Nexp_WtoLn.setVal(Nexp_WtoLn_th.getVal());

RooMCStudy * mcstudy_1_2 = new RooMCStudy(model_1_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_1), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_2->generateAndFit(Ntoys);


TCanvas *c_0_14 = new TCanvas("c_0_14", "Model1 Background+Signal (signal) Only", 1600, 500);
  c_0_14->Divide(3,1);
  c_0_14->cd(1);
  RooPlot* frame40 = mcstudy_1_2->plotParam(Nexp_sig, Bins(25));
  frame40->Draw();
  c_0_14->cd(2);
  RooPlot* frame41 = mcstudy_1_2->plotError(Nexp_sig, Bins(50));
  frame41->Draw();
  c_0_14->cd(3);
  RooPlot* frame42 = mcstudy_1_2->plotPull(Nexp_sig, Bins(25),FitGauss(kTRUE)) ;
  frame42->Draw();


TCanvas *c_0_15 = new TCanvas("c_0_15", "Model1 Background+Signal (TTbar) Only", 1600, 500);
  c_0_15->Divide(3,1);
  c_0_15->cd(1);
  RooPlot* frame43 = mcstudy_1_2->plotParam(Nexp_ttbar, Bins(25));
  frame43->Draw();
  c_0_15->cd(2);
  RooPlot* frame44 = mcstudy_1_2->plotError(Nexp_ttbar, Bins(50));
  frame44->Draw();
  c_0_15->cd(3);
  RooPlot* frame45 = mcstudy_1_2->plotPull(Nexp_ttbar, Bins(25),FitGauss(kTRUE)) ;
  frame45->Draw();

TCanvas *c_0_1500 = new TCanvas("c_0_1500", "Model1 Background+Signal (WtoLn) Only", 1600, 500);
  c_0_1500->Divide(3,1);
  c_0_1500->cd(1);
  RooPlot* frame4300 = mcstudy_1_2->plotParam(Nexp_WtoLn, Bins(25));
  frame4300->Draw();
  c_0_1500->cd(2);
  RooPlot* frame4400 = mcstudy_1_2->plotError(Nexp_WtoLn, Bins(50));
  frame4400->Draw();
  c_0_1500->cd(3);
  RooPlot* frame4500 = mcstudy_1_2->plotPull(Nexp_WtoLn, Bins(25),FitGauss(kTRUE)) ;
  frame4500->Draw();
  

//------------------------------data fits-------------------------
RooFitResult *fit_model_0_B = model_0.fitTo(*data_B, Save());
fit_model_0_B->Print("v");
double lnL_model0_B = model_0.createNLL(*data_B)->getVal();
std::cout << "NLL model 0B: " << lnL_model0_B << std::endl;

Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
RooFitResult *fit_model_1_B = model_1.fitTo(*data_B, Save());
fit_model_1_B->Print("v");
double lnL_model1_B = model_1.createNLL(*data_B)->getVal();
std::cout << "NLL model 1B: " << lnL_model1_B << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
Nexp_WtoLn.setVal(Nexp_WtoLn_th.getVal());

RooFitResult *fit_model_0_SB = model_0.fitTo(*data_SB, Save());
fit_model_0_SB->Print("v");
double lnL_model0_SB = model_0.createNLL(*data_SB)->getVal();
std::cout << "NLL model_0 S+B: " << lnL_model0_SB << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_ttbar.setVal(Nexp_ttbar_th.getVal());
Nexp_WtoLn.setVal(Nexp_WtoLn_th.getVal());

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
    model_0.plotOn(frame_B, LineColor(kRed),Components("TTbar_pdf"));
    model_0.plotOn(frame_B, LineColor(kCyan),Components("WtoLn_pdf"));
    frame_B->Draw();

    RooCurve* curve_0 = dynamic_cast<RooCurve*>(frame_B->getObject(1));

    TLegend *legend_1 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_1->AddEntry(data_B, "Background Data", "p"); 
    if(curve_0) legend_1->AddEntry(curve_0, "Fit model_0", "l"); // "l" for line
    legend_1->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_1->AddEntry(data_B, "TTbar", "l")->SetLineColor(kRed); 
    legend_1->AddEntry(data_B, "WtoLn", "l")->SetLineColor(kCyan); 
    legend_1->SetBorderSize(0); 
    legend_1->Draw();


TCanvas *c_SB = new TCanvas("c_SB", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB);
    model_0.plotOn(frame_SB);
    model_0.plotOn(frame_SB, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_SB, LineColor(kRed),Components("TTbar_pdf"));
    model_0.plotOn(frame_SB, LineColor(kCyan),Components("WtoLn_pdf"));
    frame_SB->Draw();
    RooCurve* curve_1 = dynamic_cast<RooCurve*>(frame_SB->getObject(1));

    TLegend *legend_2 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_2->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_1) legend_2->AddEntry(curve_1, "Fit model_0", "l"); // "l" for line
    legend_2->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_2->AddEntry(data_B, "TTbar", "l")->SetLineColor(kRed); 
    legend_2->AddEntry(data_B, "WtoLn", "l")->SetLineColor(kCyan); 
    legend_2->SetBorderSize(0); 
    legend_2->Draw();

TCanvas *c_B_1 = new TCanvas("c_B_1", "Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_B1 = output_BDT.frame(Bins(nbins));
    data_B->plotOn(frame_B1);
    model_1.plotOn(frame_B1);
    model_1.plotOn(frame_B1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_B1, LineColor(kRed),Components("TTbar_pdf"));
    model_1.plotOn(frame_B1, LineColor(kCyan),Components("WtoLn_pdf"));
    frame_B1->Draw();

    RooCurve* curve_2 = dynamic_cast<RooCurve*>(frame_B1->getObject(1));

    TLegend *legend_3 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_3->AddEntry(data_B, "Background Data", "p"); 
    if(curve_2) legend_3->AddEntry(curve_2, "Fit model_1", "l"); // "l" for line
    legend_3->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_3->AddEntry(data_B, "TTbar", "l")->SetLineColor(kRed); 
    legend_3->SetBorderSize(0); 
    legend_3->Draw();


TCanvas *c_SB_1 = new TCanvas("c_SB_1", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB1 = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB1);
    model_1.plotOn(frame_SB1);
    model_1.plotOn(frame_SB1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kRed),Components("TTbar_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kCyan),Components("WtoLn_pdf"));
    frame_SB1->Draw();

    RooCurve* curve_3 = dynamic_cast<RooCurve*>(frame_SB1->getObject(1));

    TLegend *legend_4 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_4->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_3) legend_4->AddEntry(curve_3, "Fit model_1", "l"); // "l" for line
    legend_4->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_4->AddEntry(data_B, "TTbar", "l")->SetLineColor(kRed); 
    legend_4->AddEntry(data_B, "WtoLn", "l")->SetLineColor(kCyan); 
    legend_4->SetBorderSize(0); 
    legend_4->Draw();
}