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



void graph(){
int n=6;
float m[6]={20, 25, 30 ,40, 50 ,60};
//float sigma[6]={56.01, 49.37, 49.68, 48.3, 46.86, 43.16};
float up95[6]={0.0219, 0.01722, 0.01717, 0.016192, 0.01573, 0.013509};
float up86[6]={0.01797, 0.01417, 0.01422, 0.01339, 0.01257, 0.010701};

float up95_exp[6]={0.022, 0.0174, 0.0173, 0.0167, 0.0159, 0.0137};
float up86_exp[6]={0.0182, 0.0146, 0.0145, 0.0136, 0.0129, 0.0109};

TGraph*gr95 = new TGraph(n, m, up95);
TGraph*gr86 = new TGraph(n, m, up86);
TGraph*gr95_exp = new TGraph(n, m, up95_exp);
TGraph*gr86_exp = new TGraph(n, m, up86_exp);

for (int i=0; i<n; i++){
 gr95->SetPoint(i, m[i], up95[i]);
 gr86->SetPoint(i, m[i], up86[i]);
 gr95_exp->SetPoint(i, m[i], up95_exp[i]);
 gr86_exp->SetPoint(i, m[i], up86_exp[i]);

}
gr95->SetLineColor(kBlue);
gr86->SetLineColor(kRed);
gr95_exp->SetLineColor(kCyan);
gr86_exp->SetLineColor(kOrange);
TLegend *leg = new TLegend(0.4,0.4,0.5,0.5);
TMultiGraph *mg= new TMultiGraph();
mg->Add(gr95);
mg->Add(gr86);
mg->Add(gr95_exp);
mg->Add(gr86_exp);
mg->GetXaxis()->SetTitle("Mass (GeV)");
mg->GetYaxis()->SetTitle("upper limit BR (H #rightarrow 4b)");
mg->Draw("AC");
leg->AddEntry(gr95,"95% Confidence Level N_{obs}","l");
leg->AddEntry(gr86,"86% Confidence Level N_{obs}","l");
leg->AddEntry(gr95_exp,"95% Confidence Level N_{exp}","l");
leg->AddEntry(gr86_exp,"86% Confidence Level N_{exp}","l");
leg->Draw();
}
