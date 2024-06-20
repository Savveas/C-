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
TGraph*gr95 = new TGraph(n, m, up95);
TGraph*gr86 = new TGraph(n, m, up86);

for (int i=0; i<n; i++){
 gr95->SetPoint(i, m[i], up95[i]);
 gr86->SetPoint(i, m[i], up86[i]);
}

TMultiGraph *mg= new TMultiGraph();
mg->Add(gr95);
mg->Add(gr86);
mg->Draw("AC");
}
