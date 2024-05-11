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
#include "RooStats/BayesianCalculator.h"
#include "RooStats/SimpleInterval.h"

using namespace RooFit;
using namespace RooStats;

void FIT_3() {


// input files 
TFile *file = new TFile("output_signal.root");
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
TFile *file_qcd_80to170 = new TFile("output_qcd_80to170.root");
TFile *file_qcd_170to250 = new TFile("output_qcd_170to250.root");
TFile *file_qcd_250toInf = new TFile("output_qcd_250toInf.root");

// take histos and rebin 
int rbin=10;
TH1 *h_sig = (TH1*)file->Get("BDT_eval");
h_sig->Rebin(rbin);
TH1 *h_dil = (TH1*)file_Dileptonic->Get("BDT_eval");
h_dil->Rebin(rbin);
TH1 *h_sem = (TH1*)file_Semileptonic->Get("BDT_eval");
h_sem->Rebin(rbin);
TH1 *h_bkg = (TH1*)file_W_70to100->Get("BDT_eval");
h_bkg->Rebin(rbin);
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

// add hadronic and dileptonic
TH1 *h_bkg_1 = (TH1*)file_Hadronic->Get("BDT_eval");
h_bkg_1->Rebin(rbin);
h_bkg_1->Add(h_dil);

// add WJets + QCD
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

// Nexp signal
float sig_N = 671.209*0.61;

float dil_N = 10107.8;
float had_N = 55.0982;

//dileptonic +  hadronic expected
float bkg_1_N=dil_N+had_N;

// Nexp semileptonic
float sem_N = 39415.7;


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

// Nexp W + qcd
float bkg_N = WtoLn_70to100 + WtoLn_100to200 + WtoLn_200to400 + WtoLn_400to600 + WtoLn_600to800 + WtoLn_800to1200 + WtoLn_1200to2500 + WtoLn_0 + qcd_bctoe_80to170 + qcd_bctoe_170to250 + qcd_bctoe_Inf;
//Total
float bkg_total_N = bkg_1_N + sem_N + bkg_N;

float f_sem=sem_N/bkg_total_N;
float f_bkg_1=bkg_1_N/bkg_total_N;
float f_bkg = 1. - f_sem - f_bkg_1; //bkg_N/bkg_total_N;

cout<< f_sem << "   "<< f_bkg_1 << "   " << f_bkg <<endl;

RooRealVar output_BDT("output_BDT","BDT score",-1.,1.);

RooRealVar Nexp_sig_th("Nexp_sig_th","Expected number of signal events",sig_N);
RooRealVar Nexp_bkg_1_th("Nexp_bkg_1_th","Expected number of ttbar dileptonic+hadronic events", bkg_1_N);
RooRealVar Nexp_sem_th("Nexp_sem_th","Expected number of ttbar semileptonic events", sem_N);
RooRealVar Nexp_bkg_th("Nexp_bkg_th","Expected number of WtoLn + QCD (bc to e) events", bkg_N);

RooRealVar Nexp_bkg_1("Nexp_bkg_1","Expected number of ttbar dileptonic+hadronic", bkg_1_N,0.0, 2.0*bkg_1_N);
RooRealVar Nexp_sem("Nexp_sem","Expected number of ttbar semileptonic", sem_N, 0.0, 2.0*sem_N);
RooRealVar Nexp_bkg("Nexp_bkg","Expected number of WtoLn + QCD (bc to e)", bkg_N,0.0, 2.0*bkg_N);

// Signal Nexpected
RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,-10.*sig_N,10.*sig_N);
RooRealVar Nexp_bkgTotal("Nexp_totalbkg", "Expected number of total bkg", bkg_total_N, 0.0, 2.0*bkg_total_N);
RooRealVar Nexp_bkgTotal_th("Nexp_totalbkg_th", "Expected number of total bkg th", bkg_total_N);
// bkg fractions
RooRealVar fraction_bkg_1("fraction_bkg_1", "fraction_bkg_1",f_bkg_1);//"@0/@1",RooArgList(Nexp_bkg_1,Nexp_bkgTotal)) ;
RooRealVar fraction_sem("fraction_sem","fraction_sem", f_sem);
RooRealVar fraction_bkg("fraction_bkg","fraction_bkg", f_bkg);
// set fractions to be constant 
fraction_bkg_1.setConstant(kTRUE); 
fraction_sem.setConstant(kTRUE); 
fraction_bkg.setConstant(kTRUE); 

RooDataHist sig("sig","sig",output_BDT,h_sig);
RooDataHist bkg_1("bkg_1","bkg_1",output_BDT,h_bkg_1);
RooDataHist sem("sem","sem",output_BDT,h_sem);
RooDataHist bkg("bkg","bkg",output_BDT,h_bkg);

RooHistPdf sig_pdf("sig_pdf","sig_pdf",output_BDT,sig);
RooHistPdf bkg_1_pdf("bkg_1_pdf","bkg_1_pdf",output_BDT,bkg_1);
RooHistPdf sem_pdf("sem_pdf","sem_pdf",output_BDT,sem);
RooHistPdf bkg_pdf("bkg_pdf","bkg_pdf",output_BDT,bkg);

//define total bkg
RooAddPdf bkgTotal("bkgTotal", "bkgTotal", RooArgList(bkg_1_pdf, sem_pdf, bkg_pdf), RooArgList(fraction_bkg_1, fraction_sem),kTRUE);  

RooAddPdf model_0("model_0", "Background", RooArgList(bkgTotal), Nexp_bkgTotal);
//RooAddPdf model_0_th("model_0_th", "Background_th", RooArgList(bkgTotal), Nexp_bkgTotal_th);


RooAddPdf model_1("model_1", "Signal + Background", RooArgList(sig_pdf, model_0), RooArgList(Nexp_sig, Nexp_bkgTotal));


//RooAddPdf model_0_th("model_0_th", "Background_th", RooArgList(bkg_1_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_bkg_1_th, Nexp_sem_th, Nexp_bkg_th));
//RooAddPdf model_1_th("model_1_th", "Signal + Background_th", RooArgList(sig_pdf, bkg_1_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_sig_th, Nexp_bkg_1_th, Nexp_sem_th, Nexp_bkg_th));


//float Ntotal_B = bkg_1_N+sem_N+bkg_N;
float Ntotal_SB = sig_N+bkg_total_N;

//RooDataSet *data_B = model_0.generate(output_BDT, bkg_total_N);
//RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);
  /*
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_bkg_1.setVal(Nexp_bkg_1_th.getVal());
  Nexp_bkg.setVal(Nexp_bkg_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());
  */

// # of TOYS
const int Ntoys = 10000;


//Toy 1 -- generate bkg only -- fit bkg only
RooMCStudy * mcstudy_0_1 = new RooMCStudy( model_0,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));

mcstudy_0_1->generateAndFit(Ntoys,bkg_total_N);

TCanvas *c_0_1 = new TCanvas("c_0_1", "Model0 Background Only", 1600, 600);
  c_0_1->Divide(3,1);
  c_0_1->cd(1);
  RooPlot* frame1 = mcstudy_0_1->plotParam(Nexp_bkgTotal, Bins(25),FitGauss(kTRUE));
  frame1->Draw();
  c_0_1->cd(2);
  RooPlot* frame2 = mcstudy_0_1->plotError(Nexp_bkgTotal, Bins(50),FitGauss(kTRUE));
  frame2->Draw();
  c_0_1->cd(3);
  RooPlot* frame3 = mcstudy_0_1->plotPull(Nexp_bkgTotal, Bins(25),FitGauss(kTRUE)) ;
  frame3->Draw();

TCanvas *c_0_122 = new TCanvas("c_0_122", "Model0 Background Only (NLL)", 800, 800);
  RooPlot *frame400 = mcstudy_0_1->plotNLL(Bins(40),FitGauss(kTRUE));
  frame400->Draw();  


TCanvas *c_Model_0 = new TCanvas("c_Model_0", "Model0 Fit", 800, 800);
RooPlot* frame_t = output_BDT.frame(Title("")) ;
frame_t->GetXaxis()->SetTitle("Model_0 Fit");
model_0.plotOn(frame_t, Components(bkg_pdf), LineColor(kCyan)); 
model_0.plotOn(frame_t, Components(bkg_1_pdf), LineColor(kRed)); 
model_0.plotOn(frame_t, Components(sem_pdf), LineColor(kViolet)); 
model_0.plotOn(frame_t, LineColor(kBlack)); 
frame_t->Draw();

/*  
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_bkg_1.setVal(Nexp_bkg_1_th.getVal());
  Nexp_bkg.setVal(Nexp_bkg_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());

RooMCStudy * mcstudy_1_1 = new RooMCStudy(model_0_th,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_1), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_1->generateAndFit(Ntoys);


 */

 bool useBkg = true;
 double confLevel = 0.90;

 RooWorkspace *w = new RooWorkspace("w");
   w->factory("SUM::pdf(s[0.001,15]*Uniform(x[0,1]),b[1,0,2]*Uniform(x))");
   w->factory("Gaussian::prior_b(b,1,1)");
   w->factory("PROD::model_1(pdf,prior_b)");
   RooAbsPdf *model = w->pdf("model_1"); // pdf*priorNuisance
   RooArgSet nuisanceParameters(*(w->var("b")));
 
   RooAbsRealLValue *POI = w->var("s");
   RooAbsPdf *priorPOI = (RooAbsPdf *)w->factory("Uniform::priorPOI(s)");
   RooAbsPdf *priorPOI2 = (RooAbsPdf *)w->factory("GenericPdf::priorPOI2('1/sqrt(@0)',s)");
 
   w->factory("n[3]"); // observed number of events
   // create a data set with n observed events
   RooDataSet data("data", "", {*w->var("x"), *w->var("n")}, RooFit::WeightVar("n"));
   data.add({*(w->var("x"))}, w->var("n")->getVal());
 
   // to suppress messages when pdf goes to zero
   RooMsgService::instance().setGlobalKillBelow(RooFit::FATAL);
 
   RooArgSet *nuisPar = nullptr;
   if (useBkg)
      nuisPar = &nuisanceParameters;
   // if (!useBkg) ((RooRealVar *)w->var("b"))->setVal(0);
 
   double size = 1. - confLevel;
   std::cout << "\nBayesian Result using a Flat prior " << std::endl;
   BayesianCalculator bcalc(data, *model, RooArgSet(*POI), *priorPOI, nuisPar);
   bcalc.SetTestSize(size);
   SimpleInterval *interval = bcalc.GetInterval();
   double cl = bcalc.ConfidenceLevel();
   std::cout << cl << "% CL central interval: [ " << interval->LowerLimit() << " - " << interval->UpperLimit()
             << " ] or " << cl + (1. - cl) / 2 << "% CL limits\n";
   RooPlot *plot = bcalc.GetPosteriorPlot();
   TCanvas *c1 = new TCanvas("c1", "Bayesian Calculator Result");
   c1->Divide(1, 2);
   c1->cd(1);
   plot->Draw();
   c1->Update();
 
   std::cout << "\nBayesian Result using a 1/sqrt(s) prior  " << std::endl;
   BayesianCalculator bcalc2(data, *model, RooArgSet(*POI), *priorPOI2, nuisPar);
   bcalc2.SetTestSize(size);
   SimpleInterval *interval2 = bcalc2.GetInterval();
   cl = bcalc2.ConfidenceLevel();
   std::cout << cl << "% CL central interval: [ " << interval2->LowerLimit() << " - " << interval2->UpperLimit()
             << " ] or " << cl + (1. - cl) / 2 << "% CL limits\n";
 
   RooPlot *plot2 = bcalc2.GetPosteriorPlot();
   c1->cd(2);
   plot2->Draw();
   gPad->SetLogy();
   c1->Update();
 
   // observe one event while expecting one background event -> the 95% CL upper limit on s is 4.10
   // observe one event while expecting zero background event -> the 95% CL upper limit on s is 4.74
}
