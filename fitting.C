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

void fitting(){

    TFile *inputfile_semileptonic = new TFile("output_TTbarSemileptonic.root");

    TH1 *h_back_semileptonic = (TH1*) inputfile_semileptonic->Get("BDT_eval");

    float entries_SemiLeptonic = (h_back_semileptonic->Integral());


    RooRealVar BDT_semileptonic("BDT_out_semileptonic","BDT_out_semileptonic",-1.,1.);

    RooDataHist semileptonic("semileptonic","semileptonic",BDT_semileptonic, h_back_semileptonic);

    RooHistPdf semileptonic_pdf("semileptonic_pdf", "semileptonic_pdf", BDT_semileptonic, semileptonic);

    RooDataSet* data = semileptonic_pdf.generate(BDT_semileptonic,217339);

    RooFitResult *result = semileptonic_pdf.fitTo(*data, Save());

    RooPlot *frame = BDT_semileptonic.frame(Bins(20));
    data->plotOn(frame);
    semileptonic_pdf.plotOn(frame,LineStyle(2),LineColor(kBlack));

    frame->SetTitle("Toy MC superimposed with semileptonic background PDF");
    frame->Draw();

}