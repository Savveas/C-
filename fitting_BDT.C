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

void fitting_BDT() {

TFile *file = new TFile("output.root");
TFile *file_Dileptonic = new TFile("output_TTbarDileptonic.root");
TFile *file_Hadronic = new TFile("output_TTbarHadronic.root");
TFile *file_Semileptonic = new TFile("output_TTbarSemileptonic.root");
TFile *file_W = new TFile("output_WJetsToLNu.root");

int rbin=10;

TH1 *h_sig = (TH1*)file->Get("BDT_eval");
h_sig->Rebin(rbin);
TH1 *h_dil = (TH1*)file_Dileptonic->Get("BDT_eval");
h_dil->Rebin(rbin);
TH1 *h_had = (TH1*)file_Hadronic->Get("BDT_eval");
h_had->Rebin(rbin);
TH1 *h_sem = (TH1*)file_Semileptonic->Get("BDT_eval");
h_sem->Rebin(rbin);
//TH1 *h_W = (TH1*)file_W->Get("BDT_eval");
//h_W->Rebin(rbin);

int nbins=10; 
float sig_N = 671.209*0.61;
float dil_N = 10107.8;
float had_N = 55.0982;
float sem_N = 39415.7;
float W_N = 258.316;

RooRealVar output_BDT("output_BDT","BDT score",-1.,1.);

RooRealVar Nexp_sig_th("Nexp_sig_th","Expected number of signal events",sig_N);
RooRealVar Nexp_dil_th("Nexp_dil_th","Expected number of ttbar dileptonic events",dil_N);
RooRealVar Nexp_had_th("Nexp_had_th","Expected number of ttbar hadronic events",had_N);
RooRealVar Nexp_sem_th("Nexp_sem_th","Expected number of ttbar semileptonic events",sem_N);
//RooRealVar Nexp_W_th("Nexp_W_th","Expected number of WtoLnu events",W_N);


RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,0.,2*sig_N);
RooRealVar Nexp_dil("Nexp_dil","Expected number of ttbar dileptonic events",dil_N,0.,2*dil_N);
RooRealVar Nexp_had("Nexp_had","Expected number of ttbar hadronic events",had_N,0.,2*had_N);
RooRealVar Nexp_sem("Nexp_sem","Expected number of ttbar semileptonic events",sem_N,0.,2*sem_N);
//RooRealVar Nexp_W("Nexp_W","Expected number of WtoLnu events",W_N,0.,2*W_N);


RooDataHist sig("sig","sig",output_BDT,h_sig);
RooDataHist dil("dil","dil",output_BDT,h_dil);
RooDataHist had("had","had",output_BDT,h_had);
RooDataHist sem("sem","sem",output_BDT,h_sem);
//RooDataHist W("W","W",output_BDT,h_W);


RooHistPdf sig_pdf("sig_pdf","sig_pdf",output_BDT,sig);
RooHistPdf dil_pdf("dil_pdf","dil_pdf",output_BDT,dil);
RooHistPdf had_pdf("had_pdf","had_pdf",output_BDT,had);
RooHistPdf sem_pdf("sem_pdf","sem_pdf",output_BDT,sem);
//RooHistPdf W_pdf("W_pdf","W_pdf",output_BDT,W);


RooAddPdf model_0("model_0", "Background", RooArgList(dil_pdf, had_pdf, sem_pdf /*W_pdf*/), RooArgList(Nexp_dil, Nexp_had, Nexp_sem /*Nexp_W*/));
RooAddPdf model_1("model_1", "Signal + Background", RooArgList(sig_pdf, dil_pdf, had_pdf, sem_pdf /*W_pdf*/), RooArgList(Nexp_sig, Nexp_dil, Nexp_had, Nexp_sem /*Nexp_W*/));


RooAddPdf model_0_th("model_0_th", "Background_th", RooArgList(dil_pdf, had_pdf, sem_pdf /*W_pdf*/), RooArgList(Nexp_dil_th, Nexp_had_th, Nexp_sem_th /*Nexp_W_th*/));
RooAddPdf model_1_th("model_1_th", "Signal + Background_th", RooArgList(sig_pdf, dil_pdf, had_pdf, sem_pdf /*W_pdf*/), RooArgList(Nexp_sig_th, Nexp_dil_th, Nexp_had_th, Nexp_sem_th /*Nexp_W_th*/));


float Ntotal_B = dil_N+had_N+sem_N/*W_N*/;
float Ntotal_SB = sig_N+dil_N+had_N+sem_N/*W_N*/;


RooDataSet *data_B = model_0.generate(output_BDT,Ntotal_B);
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);


//--------------------MCstudys-------------------------------

//-----------------------model_0----------------------
RooMCStudy * mcstudy_0_1 = new RooMCStudy(model_0_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
const int Ntoys = 500;
mcstudy_0_1->generateAndFit(Ntoys,Ntotal_B);

TCanvas *c_0_1 = new TCanvas("c_0_1", "Model0 Background (dileptonic) Only", 800, 800);
  c_0_1->Divide(2,2);
  c_0_1->cd(1);
  RooPlot* frame1 = mcstudy_0_1->plotParam(Nexp_dil, Bins(25));
  frame1->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_1->cd(2);
  RooPlot* frame2 = mcstudy_0_1->plotError(Nexp_dil, Bins(50));
  frame2->Draw();
  c_0_1->cd(3);
  RooPlot* frame3 = mcstudy_0_1->plotPull(Nexp_dil, Bins(25)) ;
  frame3->Draw();
  c_0_1->cd(4);
  // Plot distribution of minimized likelihood
  RooPlot *frame400 = mcstudy_0_1->plotNLL(Bins(40));
  frame400->Draw();

TCanvas *c_0_2 = new TCanvas("c_0_2", "Model0 Background (hadronic) Only", 1600, 500);
  c_0_2->Divide(3,1);
  c_0_2->cd(1);
  RooPlot* frame4 = mcstudy_0_1->plotParam(Nexp_had, Bins(25));
  frame4->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_2->cd(2);
  RooPlot* frame5 = mcstudy_0_1->plotError(Nexp_had, Bins(50));
  frame5->Draw();
  c_0_2->cd(3);
  RooPlot* frame6 = mcstudy_0_1->plotPull(Nexp_had, Bins(25)) ;
  frame6->Draw();

TCanvas *c_0_3 = new TCanvas("c_0_3", "Model0 Background (semileptonic) Only", 1600, 500);
  c_0_3->Divide(3,1);
  c_0_3->cd(1);
  RooPlot* frame7 = mcstudy_0_1->plotParam(Nexp_sem, Bins(25));
  frame7->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_3->cd(2);
  RooPlot* frame8 = mcstudy_0_1->plotError(Nexp_sem, Bins(50));
  frame8->Draw();
  c_0_3->cd(3);
  RooPlot* frame9 = mcstudy_0_1->plotPull(Nexp_sem, Bins(25)) ;
  frame9->Draw();

/*TCanvas *c_0_4 = new TCanvas("c_0_4", "Model0 Background (W to Lepton neutrino) Only", 1600, 500);
  c_0_4->Divide(3,1);
  c_0_4->cd(1);
  RooPlot* frame10 = mcstudy_0_1->plotParam(Nexp_W, Bins(25));
  frame10->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_4->cd(2);
  RooPlot* frame11 = mcstudy_0_1->plotError(Nexp_W, Bins(50));
  frame11->Draw();
  c_0_4->cd(3);
  RooPlot* frame12 = mcstudy_0_1->plotPull(Nexp_W, Bins(25)) ;
  frame12->Draw();*/


//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_dil.setVal(Nexp_dil_th.getVal());
  Nexp_had.setVal(Nexp_had_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());
  //Nexp_W.setVal(Nexp_W_th.getVal());

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
  RooPlot* frame27 = mcstudy_0_2->plotPull(Nexp_sig, Bins(25)) ;
  frame27->Draw();


TCanvas *c_0_5 = new TCanvas("c_0_5", "Model0 Background+Signal (dileptonic) Only", 1600, 500);
  c_0_5->Divide(3,1);
  c_0_5->cd(1);
  RooPlot* frame13 = mcstudy_0_2->plotParam(Nexp_dil, Bins(25));
  frame13->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_5->cd(2);
  RooPlot* frame14 = mcstudy_0_2->plotError(Nexp_dil, Bins(50));
  frame14->Draw();
  c_0_5->cd(3);
  RooPlot* frame15 = mcstudy_0_2->plotPull(Nexp_dil, Bins(25)) ;
  frame15->Draw();

TCanvas *c_0_6 = new TCanvas("c_0_6", "Model0 Background+Signal (hadronic) Only", 1600, 500);
  c_0_6->Divide(3,1);
  c_0_6->cd(1);
  RooPlot* frame16 = mcstudy_0_2->plotParam(Nexp_had, Bins(25));
  frame16->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_6->cd(2);
  RooPlot* frame17 = mcstudy_0_2->plotError(Nexp_had, Bins(50));
  frame17->Draw();
  c_0_6->cd(3);
  RooPlot* frame18 = mcstudy_0_2->plotPull(Nexp_had, Bins(25)) ;
  frame18->Draw();

TCanvas *c_0_7 = new TCanvas("c_0_7", "Model0 Background+Signal (semileptonic) Only", 1600, 500);
  c_0_7->Divide(3,1);
  c_0_7->cd(1);
  RooPlot* frame19 = mcstudy_0_2->plotParam(Nexp_sem, Bins(25));
  frame19->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_7->cd(2);
  RooPlot* frame20 = mcstudy_0_2->plotError(Nexp_sem, Bins(50));
  frame20->Draw();
  c_0_7->cd(3);
  RooPlot* frame21 = mcstudy_0_2->plotPull(Nexp_sem, Bins(25)) ;
  frame21->Draw();

/*TCanvas *c_0_8 = new TCanvas("c_0_8", "Model0 Background+Signal (W to Lepton neutrino) Only", 1600, 500);
  c_0_8->Divide(3,1);
  c_0_8->cd(1);
  RooPlot* frame22 = mcstudy_0_2->plotParam(Nexp_W, Bins(25));
  frame22->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_8->cd(2);
  RooPlot* frame23 = mcstudy_0_2->plotError(Nexp_W, Bins(50));
  frame23->Draw();
  c_0_8->cd(3);
  RooPlot* frame24 = mcstudy_0_2->plotPull(Nexp_W, Bins(25)) ;
  frame24->Draw();
*/

//-------------------------model_1-------------------------------

//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_dil.setVal(Nexp_dil_th.getVal());
  Nexp_had.setVal(Nexp_had_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());
  //Nexp_W.setVal(Nexp_W_th.getVal());

RooMCStudy * mcstudy_1_1 = new RooMCStudy(model_1_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_1), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_1->generateAndFit(Ntoys);

TCanvas *c_0_10 = new TCanvas("c_0_10", "Model1 Background (dileptonic) Only", 1600, 500);
  c_0_10->Divide(3,1);
  c_0_10->cd(1);
  RooPlot* frame28 = mcstudy_1_1->plotParam(Nexp_dil, Bins(25));
  frame28->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_10->cd(2);
  RooPlot* frame29 = mcstudy_1_1->plotError(Nexp_dil, Bins(50));
  frame29->Draw();
  c_0_10->cd(3);
  RooPlot* frame30 = mcstudy_1_1->plotPull(Nexp_dil, Bins(25)) ;
  frame30->Draw();

TCanvas *c_0_11 = new TCanvas("c_0_10", "Model1 Background (hadronic) Only", 1600, 500);
  c_0_11->Divide(3,1);
  c_0_11->cd(1);
  RooPlot* frame31 = mcstudy_1_1->plotParam(Nexp_had, Bins(25));
  frame31->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_11->cd(2);
  RooPlot* frame32 = mcstudy_1_1->plotError(Nexp_had, Bins(50));
  frame32->Draw();
  c_0_11->cd(3);
  RooPlot* frame33 = mcstudy_1_1->plotPull(Nexp_had, Bins(25)) ;
  frame33->Draw();

TCanvas *c_0_12 = new TCanvas("c_0_12", "Model1 Background (semileptonic) Only", 1600, 500);
  c_0_12->Divide(3,1);
  c_0_12->cd(1);
  RooPlot* frame34 = mcstudy_1_1->plotParam(Nexp_sem, Bins(25));
  frame34->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_12->cd(2);
  RooPlot* frame35 = mcstudy_1_1->plotError(Nexp_sem, Bins(50));
  frame35->Draw();
  c_0_12->cd(3);
  RooPlot* frame36 = mcstudy_1_1->plotPull(Nexp_sem, Bins(25)) ;
  frame36->Draw();

/*TCanvas *c_0_13 = new TCanvas("c_0_13", "Model1 Background (W to Lepton neutrino) Only", 1600, 500);
  c_0_13->Divide(3,1);
  c_0_13->cd(1);
  RooPlot* frame37 = mcstudy_1_1->plotParam(Nexp_W, Bins(25));
  frame37->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_13->cd(2);
  RooPlot* frame38 = mcstudy_1_1->plotError(Nexp_W, Bins(50));
  frame38->Draw();
  c_0_13->cd(3);
  RooPlot* frame39 = mcstudy_1_1->plotPull(Nexp_W, Bins(25)) ;
  frame39->Draw();
*/


//initialising the values for the next fit
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_dil.setVal(Nexp_dil_th.getVal());
  Nexp_had.setVal(Nexp_had_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());
  //Nexp_W.setVal(Nexp_W_th.getVal());

RooMCStudy * mcstudy_1_2 = new RooMCStudy(model_1_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_2->generateAndFit(Ntoys);


TCanvas *c_0_14 = new TCanvas("c_0_14", "Model1 Background+Signal (signal) Only", 1600, 500);
  c_0_14->Divide(3,1);
  c_0_14->cd(1);
  RooPlot* frame40 = mcstudy_1_2->plotParam(Nexp_sig, Bins(25));
  frame40->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_14->cd(2);
  RooPlot* frame41 = mcstudy_1_2->plotError(Nexp_sig, Bins(50));
  frame41->Draw();
  c_0_14->cd(3);
  RooPlot* frame42 = mcstudy_1_2->plotPull(Nexp_sig, Bins(25)) ;
  frame42->Draw();


TCanvas *c_0_15 = new TCanvas("c_0_15", "Model1 Background+Signal (dileptonic) Only", 1600, 500);
  c_0_15->Divide(3,1);
  c_0_15->cd(1);
  RooPlot* frame43 = mcstudy_1_2->plotParam(Nexp_dil, Bins(25));
  frame43->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_15->cd(2);
  RooPlot* frame44 = mcstudy_1_2->plotError(Nexp_dil, Bins(50));
  frame44->Draw();
  c_0_15->cd(3);
  RooPlot* frame45 = mcstudy_1_2->plotPull(Nexp_dil, Bins(25)) ;
  frame45->Draw();

TCanvas *c_0_16 = new TCanvas("c_0_16", "Model1 Background+Signal (hadronic) Only", 1600, 500);
  c_0_16->Divide(3,1);
  c_0_16->cd(1);
  RooPlot* frame46 = mcstudy_1_2->plotParam(Nexp_had, Bins(25));
  frame46->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_16->cd(2);
  RooPlot* frame47 = mcstudy_1_2->plotError(Nexp_had, Bins(50));
  frame47->Draw();
  c_0_16->cd(3);
  RooPlot* frame48 = mcstudy_1_2->plotPull(Nexp_had, Bins(25)) ;
  frame48->Draw();

TCanvas *c_0_17 = new TCanvas("c_0_17", "Model1 Background+Signal (semileptonic) Only", 1600, 500);
  c_0_17->Divide(3,1);
  c_0_17->cd(1);
  RooPlot* frame49 = mcstudy_1_2->plotParam(Nexp_sem, Bins(25));
  frame49->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_17->cd(2);
  RooPlot* frame50 = mcstudy_1_2->plotError(Nexp_sem, Bins(50));
  frame50->Draw();
  c_0_17->cd(3);
  RooPlot* frame51 = mcstudy_1_2->plotPull(Nexp_sem, Bins(25)) ;
  frame51->Draw();

/*TCanvas *c_0_18 = new TCanvas("c_0_18", "Model1 Background+Signal (W to Lepton neutrino) Only", 1600, 500);
  c_0_18->Divide(3,1);
  c_0_18->cd(1);
  RooPlot* frame52 = mcstudy_1_2->plotParam(Nexp_W, Bins(25));
  frame52->Draw();
  // Plot parameter errors for Nexp_DY
  c_0_18->cd(2);
  RooPlot* frame53 = mcstudy_1_2->plotError(Nexp_W, Bins(50));
  frame53->Draw();
  c_0_18->cd(3);
  RooPlot* frame54 = mcstudy_1_2->plotPull(Nexp_W, Bins(25)) ;
  frame54->Draw();
*/

//------------------------------data fits-------------------------
RooFitResult *fit_model_0_B = model_0.fitTo(*data_B, Save());
fit_model_0_B->Print("v");
double lnL_model0_B = model_0.createNLL(*data_B)->getVal();
std::cout << "NLL model 0B: " << lnL_model0_B << std::endl;

Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_had.setVal(Nexp_had_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
//Nexp_W.setVal(Nexp_W_th.getVal());
RooFitResult *fit_model_1_B = model_1.fitTo(*data_B, Save());
fit_model_1_B->Print("v");
double lnL_model1_B = model_1.createNLL(*data_B)->getVal();
std::cout << "NLL model 1B: " << lnL_model1_B << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_had.setVal(Nexp_had_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
//Nexp_W.setVal(Nexp_W_th.getVal());
RooFitResult *fit_model_0_SB = model_0.fitTo(*data_SB, Save());
fit_model_0_SB->Print("v");
double lnL_model0_SB = model_0.createNLL(*data_SB)->getVal();
std::cout << "NLL model_0 S+B: " << lnL_model0_SB << std::endl;

Nexp_sig.setVal(Nexp_sig_th.getVal());
Nexp_dil.setVal(Nexp_dil_th.getVal());
Nexp_had.setVal(Nexp_had_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());
//Nexp_W.setVal(Nexp_W_th.getVal());
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
    model_0.plotOn(frame_B, LineColor(kGreen),Components("had_pdf"));
    model_0.plotOn(frame_B, LineColor(kViolet),Components("sem_pdf"));
    //model_0.plotOn(frame_B, LineColor(kCyan),Components("W_pdf"));
    frame_B->Draw();

    RooCurve* curve_0 = dynamic_cast<RooCurve*>(frame_B->getObject(1));

    TLegend *legend_1 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_1->AddEntry(data_B, "Background Data", "p"); 
    if(curve_0) legend_1->AddEntry(curve_0, "Fit model_0", "l"); // "l" for line
    legend_1->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_1->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_1->AddEntry(data_B, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_1->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    //legend_1->AddEntry(data_B, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_1->SetBorderSize(0); 
    legend_1->Draw();


TCanvas *c_SB = new TCanvas("c_SB", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB);
    model_0.plotOn(frame_SB);
    model_0.plotOn(frame_SB, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_0.plotOn(frame_SB, LineColor(kRed),Components("dil_pdf"));
    model_0.plotOn(frame_SB, LineColor(kGreen),Components("had_pdf"));
    model_0.plotOn(frame_SB, LineColor(kViolet),Components("sem_pdf"));
    //model_0.plotOn(frame_SB, LineColor(kCyan),Components("W_pdf"));
    frame_SB->Draw();
    RooCurve* curve_1 = dynamic_cast<RooCurve*>(frame_SB->getObject(1));

    TLegend *legend_2 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_2->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_1) legend_2->AddEntry(curve_1, "Fit model_0", "l"); // "l" for line
    legend_2->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_2->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_2->AddEntry(data_SB, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_2->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    //legend_2->AddEntry(data_SB, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_2->SetBorderSize(0); 
    legend_2->Draw();

TCanvas *c_B_1 = new TCanvas("c_B_1", "Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_B1 = output_BDT.frame(Bins(nbins));
    data_B->plotOn(frame_B1);
    model_1.plotOn(frame_B1);
    model_1.plotOn(frame_B1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_B1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_B1, LineColor(kGreen),Components("had_pdf"));
    model_1.plotOn(frame_B1, LineColor(kViolet),Components("sem_pdf"));
    //model_1.plotOn(frame_B1, LineColor(kCyan),Components("W_pdf"));
    frame_B1->Draw();

    RooCurve* curve_2 = dynamic_cast<RooCurve*>(frame_B1->getObject(1));

    TLegend *legend_3 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_3->AddEntry(data_B, "Background Data", "p"); 
    if(curve_2) legend_3->AddEntry(curve_2, "Fit model_1", "l"); // "l" for line
    legend_3->AddEntry(data_B, "Signal", "l")->SetLineColor(kBlack);
    legend_3->AddEntry(data_B, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_3->AddEntry(data_B, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_3->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    //legend_3->AddEntry(data_B, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_3->SetBorderSize(0); 
    legend_3->Draw();


TCanvas *c_SB_1 = new TCanvas("c_SB_1", "Signal + Background Fit", 1400, 1000);
    gPad->SetLogy();
    RooPlot *frame_SB1 = output_BDT.frame(Bins(nbins));
    data_SB->plotOn(frame_SB1);
    model_1.plotOn(frame_SB1);
    model_1.plotOn(frame_SB1, LineColor(kBlack),LineStyle(2),Components("sig_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kRed),Components("dil_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kGreen),Components("had_pdf"));
    model_1.plotOn(frame_SB1, LineColor(kViolet),Components("sem_pdf"));
    //model_1.plotOn(frame_SB1, LineColor(kCyan),Components("W_pdf"));
    frame_SB1->Draw();

    RooCurve* curve_3 = dynamic_cast<RooCurve*>(frame_SB1->getObject(1));

    TLegend *legend_4 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_4->AddEntry(data_SB, "Signal + Background Data", "p"); 
    if(curve_3) legend_2->AddEntry(curve_3, "Fit model_0", "l"); // "l" for line
    legend_4->AddEntry(data_SB, "Signal", "l")->SetLineColor(kBlack);
    legend_4->AddEntry(data_SB, "TTbar Dileptonic", "l")->SetLineColor(kRed); 
    legend_4->AddEntry(data_SB, "TTbar Hadronic", "l")->SetLineColor(kGreen); 
    legend_4->AddEntry(data_SB, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    //legend_4->AddEntry(data_SB, "Wjets to Lnu", "l")->SetLineColor(kCyan); 
    legend_4->SetBorderSize(0); 
    legend_4->Draw();

    // Save the canvases
    //c_B->SaveAs("Background_Fit.png");
    //c_SB->SaveAs("Signal_Background_Fit.png");



}