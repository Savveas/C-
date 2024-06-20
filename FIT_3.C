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

struct BayesianMCMCOptions {
  double confLevel = 0.95;
  int intervalType = 2; // type of interval (0 is shortest, 1 central, 2 upper limit)
  double maxPOI = -999; // force different values of POI for doing the scan (default is given value)
  double minPOI = -999;
  int numIters = 100000;    // number of iterations
  int numBurnInSteps = 100; // number of burn in steps to be ignored
};

BayesianMCMCOptions optMCMC;

void FIT_3() {

bool runMCstudy(false);

TString dir="M15/";

float effg= 0.61;
float nexp[8]={27.1623, 37.0305, 135.968, 246.98, 297.886, 318.965, 313.851, 323.927};


// input files 
TFile *file = new TFile(dir+"output_signal.root");
TFile *file_Dileptonic = new TFile(dir+"output_TTbarDileptonic.root");
TFile *file_Hadronic = new TFile(dir+"output_TTbarHadronic.root");
TFile *file_Semileptonic = new TFile(dir+"output_TTbarSemileptonic.root");
TFile *file_W_70to100 = new TFile(dir+"output_WJetsToLNu_70to100.root");
TFile *file_W_100to200 = new TFile(dir+"output_WJetsToLNu_100to200.root");
TFile *file_W_200to400 = new TFile(dir+"output_WJetsToLNu_200to400.root");
TFile *file_W_400to600 = new TFile(dir+"output_WJetsToLNu_400to600.root");
TFile *file_W_600to800 = new TFile(dir+"output_WJetsToLNu_600to800.root");
TFile *file_W_800to1200 = new TFile(dir+"output_WJetsToLNu_800to1200.root");
TFile *file_W_1200to2500 = new TFile(dir+"output_WJetsToLNu_1200to2500.root");
TFile *file_W_0 = new TFile(dir+"output_WJetsToLNu_0.root");
TFile *file_qcd_80to170 = new TFile(dir+"output_qcd_80to170.root");
TFile *file_qcd_170to250 = new TFile(dir+"output_qcd_170to250.root");
TFile *file_qcd_250toInf = new TFile(dir+"output_qcd_250toInf.root");

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

//float eff_filter= 0.61;
// Nexp signal
float sig_N = nexp[1];
//float sig_N = 233.64*0.61;


float dil_N = 10107.8;
float had_N = 55.0982;

//dileptonic +  hadronic expected
float bkg_1_N=dil_N+had_N;

// Nexp semileptonic
float sem_N = 39415.7;

 ///Floats for calculating BR_hi(H->4b)-LAST STEP//////////

float Br_W_to_lep=0.1046+0.105+0.1075;
float sigma_SM= 0.8839;
float L_integrated=41.5*pow(10.,3.);

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

cout<< "coefficients: "<< "semileptonic: "<< f_sem << "W+QCD: "<< f_bkg << "Hadronic+Dileptonic: " << f_bkg_1 <<endl;
cout<< "Nexp signal: "<< sig_N << "Nexp semileptonic: " << sem_N << "Nexp W+QCD: "<< bkg_N << "Nexp hadronic+dileptonic: "<< bkg_1_N <<endl;


RooRealVar output_BDT("output_BDT","BDT score",-1.,1.);

RooRealVar Nexp_sig_th("Nexp_sig_th","Expected number of signal events",sig_N);
RooRealVar Nexp_bkg_1_th("Nexp_bkg_1_th","Expected number of ttbar dileptonic+hadronic events", bkg_1_N);
RooRealVar Nexp_sem_th("Nexp_sem_th","Expected number of ttbar semileptonic events", sem_N);
RooRealVar Nexp_bkg_th("Nexp_bkg_th","Expected number of WtoLn + QCD (bc to e) events", bkg_N);

RooRealVar Nexp_bkg_1("Nexp_bkg_1","Expected number of ttbar dileptonic+hadronic", bkg_1_N,0.0, 2.0*bkg_1_N);
RooRealVar Nexp_sem("Nexp_sem","Expected number of ttbar semileptonic", sem_N, 0.0, 2.0*sem_N);
RooRealVar Nexp_bkg("Nexp_bkg","Expected number of WtoLn + QCD (bc to e)", bkg_N,0.0, 2.0*bkg_N);

// Signal Nexpected
RooRealVar Nexp_sig("Nexp_sig","Expected number of signal events",sig_N,0.,2.*sig_N);
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
//model_RooAddPdf model_1_th("model_1_th", "Signal + Background_th", RooArgList(sig_pdf, bkg_1_pdf, sem_pdf, bkg_pdf), RooArgList(Nexp_sig_th, Nexp_bkg_1_th, Nexp_sem_th, Nexp_bkg_th));


float Ntotal_B = bkg_1_N+sem_N+bkg_N;
float Ntotal_SB = sig_N+bkg_total_N;

TRandom3 r;
printf("Random number %i was generated\n", r.Poisson(Ntotal_B));
float Nobs = r.Poisson(Ntotal_B);
printf("Nobs %f was generated\n",Nobs);
cout<< "Nexp_bkg_total " <<bkg_total_N <<endl;
cout<< "Nobs " << Nobs <<endl;
cout<< "Neppected signal "<<Nexp_sig<< endl;
/*
RooDataSet *data_B = model_0.generate(output_BDT, bkg_total_N);
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);
  
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_bkg_1.setVal(Nexp_bkg_1_th.getVal());
  Nexp_bkg.setVal(Nexp_bkg_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());
  */

// # of TOYS
const int Ntoys = 10000;

RooDataSet *data_B = model_0.generate(output_BDT,Nobs);
RooDataSet *data_SB = model_1.generate(output_BDT,Ntotal_SB);

RooFitResult *fit0 = model_0.fitTo(*data_B, Save());
fit0->Print("v");
double lnL_model0_B = model_0.createNLL(*data_B)->getVal();
std::cout << "NLL model 0B: " << lnL_model0_B << std::endl;
Nexp_bkg_1.setVal(Nexp_bkg_1_th.getVal());
Nexp_bkg.setVal(Nexp_bkg_th.getVal());
Nexp_sem.setVal(Nexp_sem_th.getVal());

// RootPlot 1
TCanvas *c_Model_0 = new TCanvas("c_Model_0", "Model0 Fit", 800, 800);
RooPlot* frame_t = output_BDT.frame(Title("")) ;
frame_t->GetXaxis()->SetTitle("BDT score");
frame_t->GetXaxis()->SetRangeUser(-0.8,0.8);
data_B->plotOn(frame_t,Binning(rbin));
model_0.plotOn(frame_t, Components(bkg_pdf), LineColor(kCyan)); 
model_0.plotOn(frame_t, Components(bkg_1_pdf), LineColor(kRed)); 
model_0.plotOn(frame_t, Components(sem_pdf), LineColor(kViolet)); 
model_0.plotOn(frame_t, LineColor(kBlack)); 
frame_t->Draw();
TLegend *legend_1 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_1->AddEntry(data_B, "Background Data", "p"); 
    legend_1->AddEntry(data_B, "Model_0", "l")->SetLineColor(kBlack);
    legend_1->AddEntry(data_B, "TTbar Hadronic + Dileptonic", "l")->SetLineColor(kRed);
    legend_1->AddEntry(data_B, "WtoLnu + qcd_bctoe", "l")->SetLineColor(kCyan); 
    legend_1->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_1->SetBorderSize(0); 
    legend_1->Draw();


RooFitResult *fit1 = model_1.fitTo(*data_B, Save());
fit1->Print("v");
double lnL_model1_B = model_1.createNLL(*data_B)->getVal();
std::cout << "NLL model 1B: " << lnL_model1_B << std::endl;

// RooPlot 2


TCanvas *c_Model_1 = new TCanvas("c_Model_1", "Model1 Fit", 800, 800);
RooPlot* frame_t1 = output_BDT.frame(Title("")) ;
data_B->plotOn(frame_t1,Binning(rbin));
frame_t1->GetXaxis()->SetTitle("BDT score");
frame_t1->GetXaxis()->SetRangeUser(-0.8,0.8);
model_1.plotOn(frame_t1, Components(bkg_pdf), LineColor(kCyan)); 
model_1.plotOn(frame_t1, Components(bkg_1_pdf), LineColor(kRed)); 
model_1.plotOn(frame_t1, Components(sem_pdf), LineColor(kViolet)); 
model_1.plotOn(frame_t1, LineColor(kBlack)); 
frame_t1->Draw();
TLegend *legend_11 = new TLegend(0.75,0.75,0.90,0.90); 
    legend_11->AddEntry(data_B, "Background Data", "p"); 
    legend_11->AddEntry(data_B, "Model_0", "l")->SetLineColor(kBlack);
    legend_11->AddEntry(data_B, "TTbar Hadronic + Dileptonic", "l")->SetLineColor(kRed);
    legend_11->AddEntry(data_B, "WtoLnu + qcd_bctoe", "l")->SetLineColor(kCyan); 
    legend_11->AddEntry(data_B, "TTbar Semileptonic", "l")->SetLineColor(kViolet); 
    legend_11->SetBorderSize(0); 
    legend_11->Draw();
  
 
  // NOW START THE TOY MC STUDY
 if(runMCstudy) {
  Nexp_sig.setVal(Nexp_sig_th.getVal());
  Nexp_bkg_1.setVal(Nexp_bkg_1_th.getVal());
  Nexp_bkg.setVal(Nexp_bkg_th.getVal());
  Nexp_sem.setVal(Nexp_sem_th.getVal());

//Toy 1 -- generate bkg only -- fit bkg only
/*
RooMCStudy * mcstudy_0_1 = new RooMCStudy( model_0,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_0), FitOptions(Save(kTRUE),PrintEvalErrors(0)));

mcstudy_0_1->generateAndFit(Ntoys,bkg_total_N);

TCanvas *c_0_1 = new TCanvas("c_0_1", "Background Only data", 1600, 600);
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
*/


RooMCStudy * mcstudy_1_1 = new RooMCStudy(model_1,output_BDT,Binned(kTRUE), Silence(), Extended(), FitModel(model_1), FitOptions(Save(kTRUE),PrintEvalErrors(0)));
mcstudy_1_1->generateAndFit(Ntoys);
TCanvas *c_0_2 = new TCanvas("c_0_2", "Background Only data", 1600, 600);
  c_0_2->Divide(3,1);
  c_0_2->cd(1);
  RooPlot* frame11 = mcstudy_1_1->plotParam(Nexp_bkgTotal, Bins(25),FitGauss(kTRUE));
  frame11->Draw();
  c_0_2->cd(2);
  RooPlot* frame21= mcstudy_1_1->plotError(Nexp_bkgTotal, Bins(50),FitGauss(kTRUE));
  frame21->Draw();
  c_0_2->cd(3);
  RooPlot* frame31 = mcstudy_1_1->plotPull(Nexp_bkgTotal, Bins(25),FitGauss(kTRUE)) ;
  frame31->Draw();


TCanvas *c_0_3 = new TCanvas("c_0_3", "Background Only data", 1600, 600);
  c_0_3->Divide(3,1);
  c_0_3->cd(1);
  RooPlot* frame12 = mcstudy_1_1->plotParam(Nexp_sig, Bins(25),FitGauss(kTRUE));
  frame12->Draw();
  c_0_3->cd(2);
  RooPlot* frame22 = mcstudy_1_1->plotError(Nexp_sig, Bins(50),FitGauss(kTRUE));
  frame22->Draw();
  c_0_3->cd(3);
  RooPlot* frame32 = mcstudy_1_1->plotPull(Nexp_sig, Bins(25),FitGauss(kTRUE)) ;
  frame32->Draw();

}

//return;
 ////////////////MCMC Calculator/////////
 

  // Create RooWorkspace and ModelConfig
  RooWorkspace w("w");
  // Import models into the workspace
  //w.import(model0, RooFit::RenameConflictNodes("_model0"));
  w.import(model_1, RooFit::RenameConflictNodes("_model_1"));

  // Set up ModelConfig after importing models
  ModelConfig mc("ModelConfig", &w);
  mc.SetPdf(*w.pdf("model_1"));
  mc.SetParametersOfInterest(Nexp_sig);
  mc.SetNuisanceParameters(RooArgSet(Nexp_bkg, Nexp_bkg_1, Nexp_sem));
  w.import(mc);

    
  // Perform MCMC calculation
  SequentialProposal sp(0.1); // Create an instance of SequentialProposal
  MCMCCalculator mcmc(*data_B, mc); // Using dataB
  mcmc.SetConfidenceLevel(optMCMC.confLevel);
  mcmc.SetProposalFunction(sp); // Pass the instance instead of a temporary object
  mcmc.SetNumIters(optMCMC.numIters);
  mcmc.SetNumBurnInSteps(optMCMC.numBurnInSteps);
  mcmc.SetLeftSideTailFraction(0.5);

  MCMCInterval *interval = mcmc.GetInterval();
  
  //bc = ROOT.RooStats.BayesianCalculator(ws.data("data"), model_1)
  //bc.SetConfidenceLevel(0.95)
  //bc.SetLeftSideTailFraction(0.5) 

  //bcInterval = bc.GetInterval()
  float denominator =  (sigma_SM * Br_W_to_lep * effg * L_integrated);
  
  // Plot results
  auto c1 = new TCanvas("IntervalPlot");
  MCMCIntervalPlot plot(*interval);
  plot.Draw();

  // Print the interval
  std::cout << "\n>>>> RESULT : " << optMCMC.confLevel * 100 << "% interval on " << Nexp_sig.GetName()
	    << " is : [" << interval->LowerLimit(Nexp_sig) << ", " << interval->UpperLimit(Nexp_sig) << "] " << std::endl;
  double Nexp_sig_upper = interval->UpperLimit(Nexp_sig);
  double BR_high = Nexp_sig_upper / denominator;

  std::cout << "For Nexp_Sig upper limit = " << Nexp_sig_upper 
          << ", the BR_high is " << BR_high << std::endl;
          
          
  // Perform MCMC calculation for 86% confidence level
  mcmc.SetConfidenceLevel(0.86); // Set confidence level to 86%

  MCMCInterval *interval_86 = mcmc.GetInterval();

  double lowerLimit_86 = interval_86->LowerLimit(Nexp_sig);
  double upperLimit_86 = interval_86->UpperLimit(Nexp_sig);

  std::cout << "\n>>>> RESULT : " << 86 << "% interval on " << Nexp_sig.GetName()
            << " is : [" << interval_86->LowerLimit(Nexp_sig) << ", " << interval_86->UpperLimit(Nexp_sig) << "] " << std::endl;
  double Nexp_Sig_upper_86 = interval_86->UpperLimit(Nexp_sig);

  double BR_high_86 = Nexp_Sig_upper_86 / denominator;

  std::cout << "For Nexp_Sig upper limit (86%) = " << Nexp_Sig_upper_86 
            << ", the BR_high is " << BR_high_86 << std::endl;
  
  // Plot for 86% confidence level interval
  auto c2 = new TCanvas("IntervalPlot_86", "MCMC Interval Plot (86%)", 800, 600);
  MCMCIntervalPlot plot_86(*interval_86);
  plot_86.Draw();


  gPad = c1;
   // observe one event while expecting one background event -> the 95% CL upper limit on s is 4.10
   // observe one event while expecting zero background event -> the 95% CL upper limit on s is 4.74
}
