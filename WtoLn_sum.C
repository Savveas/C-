#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void WtoLn_sum() {
    
    TFile *in_70=TFile::Open("output_WJetsToLNu70to100c.root");
    TFile *in_100=TFile::Open("output_WJetsToLNu100to200c.root");
    TFile *in_200=TFile::Open("output_WJetsToLNu200to400c.root");
    TFile *in_400=TFile::Open("output_WJetsToLNu400to600c.root");
    TFile *in_600=TFile::Open("output_WJetsToLNu600to800c.root");
    TFile *in_800=TFile::Open("output_WJetsToLNu800to1200c.root");
    TFile *in_1200=TFile::Open("output_WJetsToLNu1200to2500c.root");
    TFile *in_0=TFile::Open("output_WJetsToLNu_0.root");
    

    TFile *outputfile_WtoLn = new TFile("output_WtoLn.root", "RECREATE");

    TH1F *BDT_eval_70 = (TH1F*)in_70->Get("BDT_eval");
    TH1F *BDT_eval_100 = (TH1F*)in_100->Get("BDT_eval");
    TH1F *BDT_eval_200 = (TH1F*)in_200->Get("BDT_eval");
    TH1F *BDT_eval_400 = (TH1F*)in_400->Get("BDT_eval");
    TH1F *BDT_eval_600 = (TH1F*)in_600->Get("BDT_eval");
    TH1F *BDT_eval_800 = (TH1F*)in_800->Get("BDT_eval");
    TH1F *BDT_eval_1200 = (TH1F*)in_1200->Get("BDT_eval");
    TH1F *BDT_eval_0 = (TH1F*)in_0->Get("BDT_eval");

    TH1F *BDT_eval_WtoLn = new TH1F("BDT_eval_WtoLn","BDT_eval_WtoLn",100,-1,1.);
    BDT_eval_WtoLn->Sumw2(); 

    BDT_eval_WtoLn->Add(BDT_eval_70);
    BDT_eval_WtoLn->Add(BDT_eval_100);
    BDT_eval_WtoLn->Add(BDT_eval_200);
    BDT_eval_WtoLn->Add(BDT_eval_400);
    BDT_eval_WtoLn->Add(BDT_eval_600);
    BDT_eval_WtoLn->Add(BDT_eval_800);
    BDT_eval_WtoLn->Add(BDT_eval_1200);
    BDT_eval_WtoLn->Add(BDT_eval_0);

    std::cout<<" WtoLn_70to100 "<<BDT_eval_70->Integral()<<std::endl;
    std::cout<<" WtoLn_100to200 "<<BDT_eval_100->Integral()<<std::endl;
    std::cout<<" WtoLn_200to400 "<<BDT_eval_200->Integral()<<std::endl;
    std::cout<<" WtoLn_400to600 "<<BDT_eval_400->Integral()<<std::endl;
    std::cout<<" WtoLn_600to800 "<<BDT_eval_600->Integral()<<std::endl;
    std::cout<<" WtoLn_800to1200 "<<BDT_eval_800->Integral()<<std::endl;
    std::cout<<" WtoLn_1200to2500 "<<BDT_eval_1200->Integral()<<std::endl;
    std::cout<<" WtoLn_0 "<<BDT_eval_0->Integral()<<std::endl;
    std::cout<<" WtoLn_All "<<BDT_eval_WtoLn->Integral()<<std::endl;
   

    BDT_eval_WtoLn->Write();

    outputfile_WtoLn->Close();
}