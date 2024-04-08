#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void TTbar_sum() {
    
    TFile *in_dil=TFile::Open("output_TTbarDileptonic.root");
    TFile *in_had=TFile::Open("output_TTbarHadronic.root");
    TFile *in_sem=TFile::Open("output_TTbarSemileptonic.root");

    TFile *outputfile_TTbar = new TFile("output_TTbar.root", "RECREATE");

    TH1F *BDT_eval_dil = (TH1F*)in_dil->Get("BDT_eval");
    TH1F *BDT_eval_had = (TH1F*)in_had->Get("BDT_eval");
    TH1F *BDT_eval_sem = (TH1F*)in_sem->Get("BDT_eval");

    TH1F *BDT_eval_TTbar = new TH1F("BDT_eval_TTbar","BDT_eval_TTbar",100,-1,1.);
    BDT_eval_TTbar->Sumw2(); 

    BDT_eval_TTbar->Add(BDT_eval_dil);
    BDT_eval_TTbar->Add(BDT_eval_had);
    BDT_eval_TTbar->Add(BDT_eval_sem);

    std::cout<<"TTbar_Dil "<<BDT_eval_dil->Integral()<<std::endl;
    std::cout<<"TTbar_Had "<<BDT_eval_had->Integral()<<std::endl;
    std::cout<<"TTbar_Sem "<<BDT_eval_sem->Integral()<<std::endl;
    std::cout<<"TTbarAll "<<BDT_eval_TTbar->Integral()<<std::endl;


    BDT_eval_TTbar->Write();

    outputfile_TTbar->Close();
}