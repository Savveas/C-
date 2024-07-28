void stack_histos()
{

  TString Process[6] = {  "WH signal m=60GeV * 100"  , "QCD" , "W+Jets",  "tt (1lep)" , "tt (all hadronic)" ,  "tt (2lep)" };
  TString Files[14] = {"histos_signal.root",

                     
                       "histos_back_qcd_bctoE_250toInf.root",
                       "histos_back_qcd_bctoE_170to250.root",
                       "histos_back_qcd_bctoE_80to170.root",

                      
                       "histos_back_WJetsToLNu1200to2500.root",
                       "histos_back_WJetsToLNu800to1200.root",
                       "histos_back_WJetsToLNu600to800.root",
                       "histos_back_WJetsToLNu400to600.root",
                       "histos_back_WJetsToLNu200to400.root",
                       "histos_back_WJetsToLNu100to200.root",
                       "histos_back_WJetsToLNu70to100.root",

                    
                       "histos_back_TTbarSemileptonic.root",
                       "histos_back_TTbarHadronic.root",
                       "histos_back_TTbarDileptonic.root"
                       };


   TH1::AddDirectory(kFALSE);
   //define stack histogram
   THStack *hs = new THStack("hs","");
    
   TH1F *hh_[14];
   

   // Signal
    hh_[0] = new TH1F("signal m=60GeV","signal m=60GeV",100,0.,6.);

    TFile *inputfile1 = TFile::Open(Files[0],"READ");
    hh_[0] = ((TH1F*)inputfile1->Get("h_dR_av"));
    hh_[0]->Scale(323.927*100/hh_[0]->Integral());
    inputfile1->Close();


    // QCD
    TH1F *h_QCD = new TH1F("QCD0","QCD0",100,0.,6.);

    hh_[1] = new TH1F("QCD","QCD",100,0.,6.);
    
    TFile *inputfile2 = TFile::Open(Files[1],"READ");
    hh_[1] = ((TH1F*)inputfile2->Get("h_dR_av"));
    hh_[1]->Scale(118.217/hh_[1]->Integral());   


    inputfile2->Close();
    
    hh_[2] = new TH1F("QCD1","QCD1",100,0.,6.);
    
    TFile *inputfile3 = TFile::Open(Files[2],"READ");
    hh_[2] = ((TH1F*)inputfile3->Get("h_dR_av"));
    hh_[2]->Scale(199.941/hh_[2]->Integral());      

    inputfile3->Close();
    
    hh_[3] = new TH1F("QCD2","QCD2",100,0.,6.);
    
    TFile *inputfile4 = TFile::Open(Files[3],"READ");
    hh_[3] = ((TH1F*)inputfile4->Get("h_dR_av"));
    hh_[3]->Scale(988.367/hh_[3]->Integral());        
 
    inputfile4->Close();

    h_QCD->Add(hh_[3]); //,2.96);
    h_QCD->Add(hh_[2]); //,11.11);
    h_QCD->Add(hh_[1]); //,98.84);

    // WJets
    TH1F *h_W = new TH1F("W0","W0",100,0.,6.);

    hh_[4] = new TH1F("WJets","WJets",100,0.,6.);

    TFile *inputfile5 = TFile::Open(Files[4],"READ");
    hh_[4] = ((TH1F*)inputfile5->Get("h_dR_av"));
    hh_[4]->Scale(7.01858/hh_[4]->Integral());
    inputfile5->Close();
    
     hh_[5] = new TH1F("WJets1","WJets1",100,0.,6.);

    TFile *inputfile6 = TFile::Open(Files[5],"READ");
    hh_[5] = ((TH1F*)inputfile6->Get("h_dR_av"));
    hh_[5]->Scale(24.4611/hh_[5]->Integral());
    inputfile6->Close();
    
     hh_[6] = new TH1F("WJets2","WJets2",100,0.,6.);

    TFile *inputfile7 = TFile::Open(Files[6],"READ");
    hh_[6] = ((TH1F*)inputfile7->Get("h_dR_av"));
    hh_[6]->Scale(41.0368/hh_[6]->Integral());
    inputfile7->Close();
    
     hh_[7] = new TH1F("WJets3","WJets3",100,0.,6.);

    TFile *inputfile8 = TFile::Open(Files[7],"READ");
    hh_[7] = ((TH1F*)inputfile8->Get("h_dR_av"));
    hh_[7]->Scale(115.515/hh_[7]->Integral());
    inputfile8->Close();
    
     hh_[8] = new TH1F("WJets4","WJets4",100,0.,6.);

    TFile *inputfile9 = TFile::Open(Files[8],"READ");
    hh_[8] = ((TH1F*)inputfile9->Get("h_dR_av"));
    hh_[8]->Scale(282.733/hh_[8]->Integral());
    inputfile9->Close();
    
     hh_[9] = new TH1F("WJets5","WJets5",100,0.,6.);

    TFile *inputfile10 = TFile::Open(Files[9],"READ");
    hh_[9] = ((TH1F*)inputfile10->Get("h_dR_av"));
    hh_[9]->Scale(222.317/hh_[9]->Integral());
    inputfile10->Close();
    
     hh_[10] = new TH1F("WJets6","WJets6",100,0.,6.);

    TFile *inputfile11 = TFile::Open(Files[10],"READ");
    hh_[10] = ((TH1F*)inputfile11->Get("h_dR_av"));
    hh_[10]->Scale(56.1469/hh_[10]->Integral());
    inputfile11->Close();

    h_W->Add(hh_[4]); //,0.001);
    h_W->Add(hh_[5]); //,0.0042);
    h_W->Add(hh_[6]); //,0.0088);
    h_W->Add(hh_[7]); //,0.054);
    h_W->Add(hh_[8]); //,0.269);
    h_W->Add(hh_[9]); //,0.597);
    h_W->Add(hh_[10]); //,0.968);

  
    // TT Semileptonic
    hh_[11] = new TH1F("TT_Sem","TT_Sem",100,0.,6.);

    TFile *inputfile12 = TFile::Open(Files[11],"READ");
    hh_[11] = ((TH1F*)inputfile12->Get("h_dR_av"));
    hh_[11]->Scale(32155.3/hh_[11]->Integral());
    inputfile12->Close();
    
    // TT Hadronic
    hh_[12] = new TH1F("TT_Had","TT_Had",100,0.,6.);

    TFile *inputfile13 = TFile::Open(Files[12],"READ");
    hh_[12] = ((TH1F*)inputfile13->Get("h_dR_av"));
    hh_[12]->Scale(950.0/hh_[12]->Integral());
    inputfile13->Close();
    
    // TT Dileptonic
    hh_[13] = new TH1F("TT_Dil","TT_Dil",100,0.,6.);

    TFile *inputfile14 = TFile::Open(Files[13],"READ");
    hh_[13] = ((TH1F*)inputfile14->Get("h_dR_av"));
    hh_[13]->Scale(8831.38/hh_[13]->Integral());
    inputfile14->Close();



  //stack histo 
  TCanvas *cann = new TCanvas("cann","cann",700,900);
  gStyle->SetOptStat(0);
  TLegend *leg = new TLegend(0.9,0.65,0.53,0.9);
  
   
  hh_[0]->SetLineColor(kBlack);
  h_QCD->SetLineColor(kGreen-8);
  h_W->SetLineColor(46);
  hh_[11]->SetLineColor(kYellow+2); 
  hh_[12]->SetLineColor(kRed+2);
  hh_[13]->SetLineColor(55);

  //hh_[0]->SetFillColor(kRed-10);
  h_QCD->SetFillColor(kGreen-8);
  h_W->SetFillColor(46);
  hh_[11]->SetFillColor(kYellow+2); 
  hh_[12]->SetFillColor(kRed+2);
  hh_[13]->SetFillColor(55);

  //hs->SetTitle("");  
  
  hh_[0]->SetLineWidth(2);
  h_QCD->SetLineWidth(2);
  h_W->SetLineWidth(2);
  hh_[11]->SetLineWidth(2);
  hh_[12]->SetLineWidth(2); 
  hh_[13]->SetLineWidth(2); 
  //h_QCD->Scale(988.367+199.941+118.217);
  //h_W->Scale(56.1469+222.317+282.733+115.515+41.0368+24.4611+7.01858);
  
  
  
  
  cout<< "QCD yield: "     << h_QCD->Integral()   <<endl;
  cout<< "WJets yield: "   << h_W->Integral()     <<endl;
  cout<< "TT Semi yield: " << hh_[11]->Integral() <<endl;
  cout<< "TT Had yield: "  << hh_[12]->Integral() <<endl;
  cout<< "TT Dil yield: "  << hh_[13]->Integral() <<endl;
  cout<< "Signal yield: "  << hh_[0]->Integral()  <<endl;

  hs->Add(h_QCD, "histo");
  leg->AddEntry(h_QCD, Process[1], "f");

  hs->Add(h_W, "same histo");
  leg->AddEntry(h_W, Process[2], "f");

  hs->Add(hh_[13], "same histo");
  leg->AddEntry(hh_[13], Process[5], "f");

  hs->Add(hh_[11], "same histo");
  leg->AddEntry(hh_[11], Process[3], "f");

  hs->Add(hh_[12], "same histo");
  leg->AddEntry(hh_[12], Process[4], "f");
 
  leg->AddEntry(hh_[0], Process[0], "l");

  TH1 *last = (TH1*)hs->GetStack()->Last();

  int max_bin  = last->GetMaximumBin();
  float Max = last->GetBinContent(max_bin);
  hs->SetMaximum(1.5*Max);

  hs->Draw(); 
  hh_[0]->Draw("same histo");
  leg->Draw(); 

  cann->cd(); 

  float perbin = ((500-0)/(100));
  hs->GetYaxis()->SetTitle(Form("Events/%.4g",perbin));
  hs->GetXaxis()->SetTitle("< #Delta R(bb) >");
  

  //cann->Modified();   
  cann->Print("./stack_dR_av.png");

}




























    
