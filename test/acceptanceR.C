
double FrTTDIL = 0;
double FrTTDILVIS = 0;
double FrTTJJ = 0;
double FrTTBB = 0;
double FrTTB = 0;
double FrTTCC = 0;

double FrTTDILVIS_parton = 0;
double FrTTJJ_parton = 0;
double FrTTBB_parton = 0;

void getFraction(const TString & path){

  TFile* f_ttbar2b = new TFile(Form("/afs/cern.ch/work/t/tjkim/public/store/ttbb/paper/8TeV/ntuple/v3/vallot_%s.root",path.Data()));
  //TFile* f_ttbar2b = new TFile(Form("/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130622_tthUpDw/vallot_%s.root",path.Data()));
  //TFile* f_ttbar2b = new TFile(Form("/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130613_HFupdw/vallot_%s.root",path.Data()));

  TH1* h_nGenJet = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJets");
  TH1* h_nGenJetDIL = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJetsDIL");
  TH1* h_nGenJetDILVIS = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJetsDILVIS");
  TH1* h_nGenJet20DILVIS = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJets20DILVIS");
  TH1* h_nGenJet20DILVISTTBB = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJets20DILVISTTBB");
  TH1* h_nGenJet20DILVISTTCC = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_multiplicity_GenJets20DILVISTTCC");
  TH1* h_nEvents = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_nEvents");
  TH1* h_nEvents_40GeV = (TH1F*) f_ttbar2b->Get("ttbar2bFilter/h_nEvents_40GeV");

  double nTT = h_nGenJet->GetEntries();
  double nTTDIL = h_nGenJetDIL->GetEntries();
  //double nTTDILVIS = h_nGenJetDILVIS->GetEntries();
  //double nTTBBDILVIS = h_nGenJet20DILVISTTBB->GetEntries();
  //double nTTCCDILVIS = h_nGenJet20DILVISTTCC->GetEntries();
  //double nTTJJ = nTTDILVIS - h_nGenJet20DILVIS->Integral(1,4);
  //double nTTBB = nTTBBDILVIS - h_nGenJet20DILVISTTBB->Integral(1,4);
  //double nTTCC = nTTCCDILVIS - h_nGenJet20DILVISTTCC->Integral(1,4);

  double nTTDILVIS = h_nEvents_40GeV->GetBinContent(3);
  double nTTJJ = h_nEvents_40GeV->GetBinContent(4);
  double nTTBB = h_nEvents_40GeV->GetBinContent(5);
  double nTTB = h_nEvents_40GeV->GetBinContent(7);
  double nTTCC = h_nEvents_40GeV->GetBinContent(6); 

  //double nTTDILVIS = h_nEvents->GetBinContent(3);
  //double nTTJJ = h_nEvents->GetBinContent(4);
  //double nTTBB = h_nEvents->GetBinContent(5);
  //double nTTB = h_nEvents->GetBinContent(7);
  //double nTTCC = h_nEvents->GetBinContent(6);

  cout << "nTT= " << nTT << " nTTDIL= " << nTTDIL << " nTTJJ= " << nTTJJ << " nTTBB= " << nTTBB << " " << " nTTB= " << nTTB << endl;

  double Br = 0.049382761;

  FrTTDIL = nTTDIL/nTT;
  FrTTDILVIS = nTTDILVIS/nTTDIL;
  FrTTJJ = nTTJJ/nTTDILVIS;
  FrTTBB = nTTBB/nTTJJ;
  FrTTB  = nTTB/nTTJJ;
  FrTTCC = nTTCC/nTTJJ;
 
  cout << "Ratio (nTTDIL/nTT)   = " << FrTTDIL << endl;
  cout << "Ratio (nTTDILVIS/nTTDIL)   = " << FrTTDILVIS << endl;
  cout << "Ratio (nTTJJ/nTTDILVIS)   = " << FrTTJJ << endl;
  cout << "Ratio (nTTBB/nTTJJ) = " << FrTTBB << endl;
  cout << "Ratio (nTTB/nTTJJ) = " << FrTTB << endl;

}

void acceptanceR(){

  //getFraction();

  //acceptance("TTbarMcatnlo");
  //acceptance("TTbarTuneZ2");
  acceptance("TTbarFullLepMGDecays");
  //acceptance("TTbarPowheg");
  //acceptance("TTbar_matchingdown");
  //acceptance("TTbar_matchingup");
  //acceptance("TTbar_scaledown");
  //acceptance("TTbar_scaleup");


}

void acceptance(const TString & path){
  cout << path.Data() << endl;

  getFraction(path);

  TFile* f = new TFile(Form("/afs/cern.ch/work/t/tjkim/public/store/ttbb/paper/8TeV/ntuple/v3/vallot_%s.root",path.Data()));
  //TFile* f = new TFile(Form("/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130622_tthUpDw/vallot_%s.root",path.Data()));
  //TFile* f = new TFile(Form("/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130613_HFupdw/vallot_%s.root",path.Data()));

  TTree* t_mm = (TTree*) f->Get("MuMu/tree");
  TTree* t_ee = (TTree*) f->Get("ElEl/tree");
  TTree* t_em = (TTree*) f->Get("MuEl/tree");

  TH1* h_event_mm = (TH1F*) f->Get("MuMu/EventSummary");
  double total = h_event_mm->GetBinContent(1);

  TCut cut_em_S1 = "ZMass > 12 && isIso > 0 && PairSign < 0";
  TCut cut_S1 = cut_em_S1;
  
  TCut cut_em_S2 = "ZMass > 12 && isIso > 0 && PairSign < 0";
  TCut cut_S2 = cut_em_S2 + "abs(ZMass-91.2) > 15";
  
  TCut cut_em_S3 = "ZMass > 12 && isIso > 0 && PairSign < 0";
  TCut cut_S3 = cut_em_S3 + "abs(ZMass-91.2) > 15 && MET > 30";
  
  //TCut cut_em_S4 = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet30 >=4";
  TCut cut_em_S4 = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet50 >=4";
  TCut cut_S4 = cut_em_S4 + "abs(ZMass-91.2) > 15 && MET > 30";

  //TCut cut_em_S5M = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet30 >=4 && nbjets30_CSVM >= 2";
  TCut cut_em_S5M = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet50 >=4 && nbjets30_CSVM >= 2";
  TCut cut_S5M = cut_em_S5M + "abs(ZMass-91.2) > 15 && MET > 30";

  //TCut cut_em_S5 = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet30 >=4 && nbjets30_CSVT >= 2";
  TCut cut_em_S5 = "ZMass > 12 && isIso > 0 && PairSign < 0 && nJet50 >=4 && nbjets30_CSVT >= 2";
  TCut cut_S5 = cut_em_S5 + "abs(ZMass-91.2) > 15 && MET > 30";

  print(t_mm, t_ee, t_em, total, cut_S1, cut_em_S1,"S1");
  print(t_mm, t_ee, t_em, total, cut_S2, cut_em_S2,"S2");
  print(t_mm, t_ee, t_em, total, cut_S3, cut_em_S3,"S3");
  print(t_mm, t_ee, t_em, total, cut_S4, cut_em_S4,"S4");
  print(t_mm, t_ee, t_em, total, cut_S5M, cut_em_S5M,"S5M");
  print(t_mm, t_ee, t_em, total, cut_S5, cut_em_S5,"S5");

}

void print(TTree* t_mm, TTree* t_ee, TTree* t_em, double total, TCut cut, TCut cut_em, const TString & step){

  cout << "CUT: " << step << endl;

  //TCut vis = "nGenJet20 >= 4 && nGenbJet20 >=2 && genLep1_pt > 20 && genLep2_pt > 20 && abs( genLep1_eta ) < 2.4 && abs( genLep2_eta ) < 2.4" ;
  //TCut ttbb = "nGenbJet20 >= 4";
  //TCut ttb = "nGenbJet20 == 3";
  //TCut ttcc = "nGencJet20 >= 2";

  TCut vis = "nGenJet40 >= 4 && nGenbJet40 >=2 && genLep1_pt > 20 && genLep2_pt > 20 && abs( genLep1_eta ) < 2.4 && abs( genLep2_eta ) < 2.4" ;
  TCut ttbb = "nGenbJet40 >= 4";
  TCut ttb = "nGenbJet40 == 3";
  TCut ttcc = "nGencJet40 >= 2";

  //TCut vis_parton = "ttbarGen.NJets20() >= 4 && ttbarGen.NbQuarks20() >=2 && ttbarGen.lepton1().pt() > 20 && ttbarGen.lepton2().pt() > 20 && abs(ttbarGen.lepton1().eta()) < 2.5 && abs(ttbarGen.lepton2().eta()) < 2.5" ;
  //TCut ttbb_parton = "ttbarGen.NbQuarks20() >= 4";

  double numTTJJ = t_mm->GetEntries(cut + vis) + t_ee->GetEntries(cut + vis) + t_em->GetEntries(cut_em + vis);
  double preTTJJ = t_mm->GetEntries(vis) + t_ee->GetEntries(vis) + t_em->GetEntries(vis);
  double denTTJJ = total * FrTTDIL * FrTTDILVIS * FrTTJJ;
  double acceptancePreTTJJ =preTTJJ/denTTJJ;
  double acceptancePosTTJJ =numTTJJ/preTTJJ;
  double acceptanceTTJJ =numTTJJ/denTTJJ;

  double numTTBB = t_mm->GetEntries(cut + vis + ttbb) + t_ee->GetEntries(cut + vis + ttbb) + t_em->GetEntries(cut_em + vis + ttbb); 
  double numTTB = t_mm->GetEntries(cut + vis + ttb) + t_ee->GetEntries(cut + vis + ttb) + t_em->GetEntries(cut_em + vis + ttb); 
  double preTTBB = t_mm->GetEntries(vis + ttbb) + t_ee->GetEntries(vis + ttbb) + t_em->GetEntries(vis + ttbb); 
  double denTTBB = total * FrTTDIL * FrTTDILVIS * FrTTJJ * FrTTBB;
  double denTTB  = total * FrTTDIL * FrTTDILVIS * FrTTJJ * FrTTB;
  double acceptancePreTTBB = preTTBB / denTTBB; 
  double acceptancePosTTBB = numTTBB / preTTBB; 
  double acceptanceTTBB = numTTBB / denTTBB; 
  double acceptanceTTB = numTTB / denTTB; 

  double numTTCC = t_mm->GetEntries(cut + vis + ttcc) + t_ee->GetEntries(cut + vis + ttcc) + t_em->GetEntries(cut_em + vis+ ttcc);
  double denTTCC = total * FrTTDIL * FrTTDILVIS * FrTTJJ * FrTTCC;
  double acceptanceTTCC = numTTCC / denTTCC;

  cout << "total= " << total << " den(TTJJ)= " << denTTJJ << " den(TTBB)= " << denTTBB << endl;

  double AccRatio_ttbb = acceptanceTTJJ/acceptanceTTBB;
  double AccRatio_ttb  = acceptanceTTJJ/acceptanceTTB;
  double recoR_ttbb =  numTTBB/numTTJJ;
  double recoR_ttb =  numTTB/numTTJJ;

  //cout << "Ratio (nTTDIL/nTT)   = " << FrTTDIL << endl;
  //cout << "Ratio (nTTDILVIS/nTTDIL)   = " << FrTTDILVIS << endl;
  //cout << "Ratio (nTTJJ/nTTDILVIS)   = " << FrTTJJ << endl;
  //cout << "Ratio (nTTBB/nTTJJ) = " << FrTTBB << endl;
  cout << "Ratio (in reco nTTBB/nTTJJ) = " << recoR_ttbb << " Ratio (in reco nTTB/nTTJJ) = " << recoR_ttb << endl;
  //cout << "acceptance preselection (ttjj)   = " << acceptancePreTTJJ << endl;
  //cout << "acceptance preselection (ttbb)   = " << acceptancePreTTBB << endl;
  //cout << "acceptance postselection (ttjj)   = " << acceptancePosTTJJ << "(" << numTTJJ << "/" << preTTJJ << ")" << endl;
  //cout << "acceptance postselection (ttbb)   = " << acceptancePosTTBB << "(" << numTTBB << "/" << preTTBB << ")" << endl;
  cout << "acceptance (ttjj)   = " << acceptanceTTJJ << "(" << numTTJJ << "/" << denTTJJ << ")" << endl;
  cout << "acceptance (ttbb)   = " << acceptanceTTBB << "(" << numTTBB << "/" << denTTBB << ")" << endl;
  cout << "acceptance (ttb)   = "  << acceptanceTTB  << "(" << numTTB  << "/" << denTTB  << ")" << endl;
  cout << "acceptance (ttcc)   = " << acceptanceTTCC << "(" << numTTCC << "/" << denTTCC << ")" << endl;
  cout << "Ratio (Attjj/Attbb) = " << AccRatio_ttbb << " Ratio (Attjj/Attb) = " << AccRatio_ttb << endl;

}
