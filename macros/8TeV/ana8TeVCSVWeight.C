#include <iostream>
#include <map>
#include "TCut.h"
#include "TROOT.h"
#include "TSystem.h"

using namespace std;

void ana8TeVCSVWeight(){

  gSystem->Load("libFWCoreFWLite.so");
  gSystem->Load("libDataFormatsFWLite.so");
  gSystem->Load("libDataFormatsPatCandidates.so");

  gSystem->Load("libPhysicsToolsRooStatsCms.so");

  AutoLibraryLoader::enable();

  gSystem->CompileMacro("$CMSSW_BASE/src/KoPFA/CommonTools/macros/TopAnalyzerLite.cc", "k");

  ana("ElEl","TTBB_27Apr2013_CSVWeight/ElEl");
  ana("MuMu","TTBB_27Apr2013_CSVWeight/MuMu");
  //ana("MuEl","TTBB_27Apr2013_CSVWeight/MuEl");
  gSystem->Exec("hadd -f TTBB_27Apr2013_CSVWeight/merged.root TTBB_27Apr2013_CSVWeight/*/*.root");
}


void ana(string decayMode = "ElEl", string imageOutDir = "")
{

  //gSystem->CompileMacro("$CMSSW_BASE/src/KoPFA/CommonTools/macros/TopAnalyzerLite.cc", "k");
  bool createplots = true;
  TopAnalyzerLite* analyzer = new TopAnalyzerLite(decayMode, imageOutDir, createplots);

  const std::string mcPath = "/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130406_V00-00-08fixed/";
  const std::string rdPath = "/afs/cern.ch/work/y/youngjo/public/For8Tev/v20130406_V00-00-08fixed/";

  gROOT->ProcessLine(".L $CMSSW_BASE/src/KoPFA/CommonTools/macros/tdrstyle.C");
  defaultStyle();

  analyzer->addRealData(rdPath+"/vallot_Run2012"+decayMode+".root", 19619);

  TCut visible = "nGenJet20 >= 4 && nGenbJet20 >=2 && genLep1_pt > 20 && genLep2_pt > 20 && abs( genLep1_eta ) < 2.4 && abs( genLep2_eta ) < 2.4" ;
  TCut sigcut = "nGenbJet20 >= 4";
  TCut ttcc = "nGencJet20 >= 2";
  TCut dilepton = "ttbarGen_dileptonic == 1";

  TCut hf = "abs(jets_flavor[csvd_jetid[0]]) == 5 || abs(jets_flavor[csvd_jetid[1]]) == 5"; 
  TCut cf = "abs(jets_flavor[csvd_jetid[0]]) == 4 || abs(jets_flavor[csvd_jetid[1]]) == 4"; 

  //analyzer->addMCSig("TTbarbb", "t#bar{t} + bb", mcPath+"/vallot_TTbarFullLepMGDecays.root", 26, kBlue+2, true, visible && sigcut);
  //analyzer->addMCBkg("TTbarcc", "t#bar{t} + cc", mcPath+"/vallot_TTbarFullLepMGDecays.root", 26, kRed+2, visible && !sigcut && ttcc );
  //analyzer->addMCBkg("TTbarll", "t#bar{t} + ll", mcPath+"/vallot_TTbarFullLepMGDecays.root", 26, kRed, visible && !sigcut && !ttcc);

  //analyzer->addMCBkg("TTbarOthers", "t#bar{t} others", mcPath+"/vallot_TTbarFullLepMGDecays.root", 26, kRed-7, !visible);
  //analyzer->addMCBkg("TTbarNonvis", "t#bar{t} others", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed-7, !dilepton);

  //when you use inclusive sample
  analyzer->addMCSig("TTbar", "t#bar{t}", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed+2, true);
  //analyzer->addMCSig("TTbarbb", "t#bar{t} + bb", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed+2, true, visible && sigcut);
  //analyzer->addMCBkg("TTbarcc", "t#bar{t} + cc", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed+1, visible && !sigcut && ttcc );
  //analyzer->addMCBkg("TTbarll", "t#bar{t} + ll", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed, visible && !sigcut && !ttcc);
  //analyzer->addMCBkg("TTbarOthers", "t#bar{t} others", mcPath+"/vallot_TTbarTuneZ2.root", 234, kRed-7, !visible);

  analyzer->addMCBkg("Wl", "W #rightarrow l#nu", mcPath+"/vallot_WJetsToLNu.root", 37509, kGreen-3);

  analyzer->addMCBkg("VV", "Dibosons", mcPath+"/vallot_ZZ.root", 8.059 , kGray+4);
  analyzer->addMCBkg("WW", "Dibosons", mcPath+"/vallot_WW.root", 54.8, kGray+4);
  analyzer->addMCBkg("WZ", "Dibosons", mcPath+"/vallot_WZ.root", 33.21, kGray+4);

  analyzer->addMCBkg("SingleTop", "Single top", mcPath+"/vallot_SingleToptW.root", 11.1, kMagenta);
  analyzer->addMCBkg("SingleTopBar", "Single top", mcPath+"/vallot_SingleTopBartW.root", 11.1, kMagenta);
  analyzer->addMCBkg("DYb", "Z/#gamma* + b", mcPath+"/vallot_ZJets.root", 3503, kAzure+7, hf);
  analyzer->addMCBkg("DYc", "Z/#gamma* + c", mcPath+"/vallot_ZJets.root", 3503, kAzure, !hf + cf);
  analyzer->addMCBkg("DYLF", "Z/#gamma* + LF", mcPath+"/vallot_ZJets.root", 3503, kAzure-2, !hf + !cf);
  //analyzer->addMCBkg("DYll", "Z/#gamma* #rightarrow ll", mcPath+"/vallot_ZJets.root", 3503, kAzure-2);
  //analyzer->addMCBkg("DYll10To50", "Z/#gamma* #rightarrow ll", mcPath+"/vallot_ZJets10To50.root", 860.5, kAzure-2);

  analyzer->addDataBkg("QCD", "QCD", rdPath+"/vallot_Run2012"+decayMode+".root", 1.0, kYellow);

  //addMonitorPlot
  //analyzer->addMonitorPlot("nbJet", "nbjets", "b-Jet Multiplicity;b-Jet Multiplicity;Events", 5, 0, 5, 0.1, 3,false);
  //use common histogram names for top analysis
  gROOT->ProcessLine(".L addVariables.h");
  addTopVariables(analyzer); //add Top analysis related variables for plotting

  TCut ZSel = "ZMass > 12 && lep1_relIso03 < 0.15 && lep2_relIso03 < 0.15 && PairSign < 0 && abs(ZMass-91) < 15 && MET < 30 && nJet30 >= 2";
  TCut Notag = "nbjets30_CSVT == 0";

  analyzer->addCutStep(ZSel, "jet1_bDisCSV,jet2_bDisCSV,jet1pt_bDisCSV,jet2pt_bDisCSV,jet1_bDis,jet2_bDis", 0.5, "bweight30CSVT", "ZSel");
  analyzer->addCutStep(Notag, "jet1_bDisCSV,jet2_bDisCSV,jet1pt_bDisCSV,jet2pt_bDisCSV,jet1_bDis,jet2_bDis", 0.5, "bweight30CSVT", "NoTag");

  //QCD invert isolation for base shape
  analyzer->replaceDataBkgCut("QCD", "ZMass > 12 && lep1_relIso03 < 0.15 && lep2_relIso03 < 0.15 && PairSign < 0", "ZMass > 12 && lep1_relIso03 > 0.15 && lep2_relIso03 > 0.15 && PairSign < 0");

  //global weight
  if( decayMode == "MuMu"){
    analyzer->setEventWeightVar("puweight*lepweight");
  }else if( decayMode == "MuEl"){
    analyzer->setEventWeightVar("puweight*lepweight");
  }else if( decayMode == "ElEl"){
    analyzer->setEventWeightVar("puweight*lepweight");
  }

  //TTBB weight for DY and QCD samples
  if( decayMode == "ElEl"){
    analyzer->setEventWeight("QCD", "ZSel", 0.657);
  }else if( decayMode == "MuMu") {
    analyzer->setEventWeight("QCD", "ZSel", 0.028);
  }else{
    analyzer->setEventWeight("QCD", "ZSel", 0.064);
  }

  analyzer->applyCutSteps();
  analyzer->saveHistograms();
  analyzer->printCutFlow();
}
