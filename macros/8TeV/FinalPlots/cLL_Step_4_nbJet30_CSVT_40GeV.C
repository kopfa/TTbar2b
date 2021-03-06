{
//=========Macro generated from canvas: cLL_Step_4_nbJet30_CSVT/cLL_Step_4_nbJet30_CSVT
//=========  (Sat Sep 14 19:30:19 2013) by ROOT version5.34/02
   TCanvas *cLL_Step_4_nbJet30_CSVT = new TCanvas("cLL_Step_4_nbJet30_CSVT", "cLL_Step_4_nbJet30_CSVT",0,0,400,400);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   cLL_Step_4_nbJet30_CSVT->Range(0,0,1,1);
   cLL_Step_4_nbJet30_CSVT->SetFillColor(0);
   cLL_Step_4_nbJet30_CSVT->SetBorderMode(0);
   cLL_Step_4_nbJet30_CSVT->SetBorderSize(2);
   cLL_Step_4_nbJet30_CSVT->SetTickx(1);
   cLL_Step_4_nbJet30_CSVT->SetTicky(1);
   cLL_Step_4_nbJet30_CSVT->SetLeftMargin(0.15);
   cLL_Step_4_nbJet30_CSVT->SetRightMargin(0.05);
   cLL_Step_4_nbJet30_CSVT->SetBottomMargin(0.15);
   cLL_Step_4_nbJet30_CSVT->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "",0,0.3,1,1);
   pad1->Draw();
   pad1->cd();
   pad1->Range(-1.072875,-1.39794,5.364372,6.961202);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLogy();
   pad1->SetTickx(1);
   pad1->SetTicky(1);
   pad1->SetLeftMargin(0.1666667);
   pad1->SetRightMargin(0.05660377);
   pad1->SetBottomMargin(0);
   pad1->SetFrameBorderMode(0);
   pad1->SetFrameBorderMode(0);
   Double_t xAxis66[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hData_Step_4_nbJet30_CSVT = new TH1F("hData_Step_4_nbJet30_CSVT","",5, xAxis66);
   hData_Step_4_nbJet30_CSVT->SetBinContent(1,969);
   hData_Step_4_nbJet30_CSVT->SetBinContent(2,1228);
   hData_Step_4_nbJet30_CSVT->SetBinContent(3,519);
   hData_Step_4_nbJet30_CSVT->SetBinContent(4,28);
   hData_Step_4_nbJet30_CSVT->SetBinContent(5,2);
   hData_Step_4_nbJet30_CSVT->SetBinError(1,31.12876);
   hData_Step_4_nbJet30_CSVT->SetBinError(2,35.04283);
   hData_Step_4_nbJet30_CSVT->SetBinError(3,22.78157);
   hData_Step_4_nbJet30_CSVT->SetBinError(4,5.291503);
   hData_Step_4_nbJet30_CSVT->SetBinError(5,1.414214);
   hData_Step_4_nbJet30_CSVT->SetMinimum(0.4);
   hData_Step_4_nbJet30_CSVT->SetMaximum(100000);
   hData_Step_4_nbJet30_CSVT->SetEntries(2746);
   hData_Step_4_nbJet30_CSVT->SetStats(0);
   hData_Step_4_nbJet30_CSVT->SetMarkerStyle(20);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->Draw("");
   
   TLegend *leg = new TLegend(0.75,0.53,0.87,0.87,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hData_Step_4_nbJet30_CSVT","Data","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_DYll_Step_4_nbJet30_CSVT","Z/#gamma* #rightarrow ll","f");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#3366ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_SingleTop_Step_4_nbJet30_CSVT","Single top","f");

   ci = TColor::GetColor("#00ff00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_TTbarOthers_Step_4_nbJet30_CSVT","t#bar{t} others","f");

   ci = TColor::GetColor("#ff6666");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_TTbarll_Step_4_nbJet30_CSVT","t#bar{t}+LF","f");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_TTbarcc_Step_4_nbJet30_CSVT","t#bar{t}+cc","f");

   ci = TColor::GetColor("#cc6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMC_TTbarb_Step_4_nbJet30_CSVT","t#bar{t}+bj","f");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMCSig_TTbarbb_Step_4_nbJet30_CSVT","t#bar{t}+bb","f");

   ci = TColor::GetColor("#660000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.21,0.74,0.21,0.86,"brNDC");
   pt->SetBorderSize(1);
   pt->SetFillColor(0);
   pt->SetLineColor(0);
   pt->SetTextAlign(12);
   pt->SetTextFont(42);
   pt->SetTextSize(0.04);
   TText *text = pt->AddText("CMS Preliminary");
   text = pt->AddText("19.6 fb^{-1} at  #sqrt{s} = 8 TeV");
   text = pt->AddText("");
   pt->Draw();
   
   THStack *hLL_Step_4_nbJet30_CSVT = new THStack();
   hLL_Step_4_nbJet30_CSVT->SetName("hLL_Step_4_nbJet30_CSVT");
   hLL_Step_4_nbJet30_CSVT->SetTitle("b-Tag Multiplicity;b-Tag Multiplicity;Events");
   
   TH1F *hLL_Step_4_nbJet30_CSVT_stack_6 = new TH1F("hLL_Step_4_nbJet30_CSVT_stack_6","b-Tag Multiplicity",5,0,5);
   hLL_Step_4_nbJet30_CSVT_stack_6->SetMinimum(0.4742184);
   hLL_Step_4_nbJet30_CSVT_stack_6->SetMaximum(1896.874);
   hLL_Step_4_nbJet30_CSVT_stack_6->SetDirectory(0);
   hLL_Step_4_nbJet30_CSVT_stack_6->SetStats(0);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetTitle("b-Tag Multiplicity");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetBinLabel(1,"0");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetBinLabel(2,"1");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetBinLabel(3,"2");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetBinLabel(4,"3");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetBinLabel(5,"#geq4");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetLabelFont(42);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetLabelOffset(0.007);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetLabelSize(0.05);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetTitleSize(0.06);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetTitleOffset(0.9);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetXaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetTitle("Events");
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetLabelFont(42);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetLabelOffset(0.007);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetLabelSize(0.05);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetTitleSize(0.06);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetTitleOffset(1.2);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetYaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetZaxis()->SetLabelFont(42);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetZaxis()->SetLabelOffset(0.007);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetZaxis()->SetLabelSize(0.05);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetZaxis()->SetTitleSize(0.06);
   hLL_Step_4_nbJet30_CSVT_stack_6->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->SetHistogram(hLL_Step_4_nbJet30_CSVT_stack_6);
   
   Double_t xAxis67[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMCSig_TTbarbb_Step_4_nbJet30_CSVT = new TH1F("hMCSig_TTbarbb_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis67);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(1,7.791804);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(2,23.74101);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(3,23.27416);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(4,9.657867);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(5,2.822077);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetEntries(679);

   ci = TColor::GetColor("#660000");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMCSig_TTbarbb_Step_4_nbJet30_CSVT,"");
   Double_t xAxis68[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_TTbarb_Step_4_nbJet30_CSVT = new TH1F("hMC_TTbarb_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis68);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetBinContent(1,47.64603);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetBinContent(2,118.4639);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetBinContent(3,83.9352);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetBinContent(4,20.25);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetBinContent(5,0.9484389);
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetEntries(2725);

   ci = TColor::GetColor("#ffcc00");
   hMC_TTbarb_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_TTbarb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_TTbarb_Step_4_nbJet30_CSVT,"");
   Double_t xAxis69[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_TTbarcc_Step_4_nbJet30_CSVT = new TH1F("hMC_TTbarcc_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis69);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetBinContent(1,17.8348);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetBinContent(2,29.83185);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetBinContent(3,15.08897);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetBinContent(4,0.7147708);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetBinContent(5,0.02474218);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetEntries(1603);

   ci = TColor::GetColor("#cc6600");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_TTbarcc_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_TTbarcc_Step_4_nbJet30_CSVT,"");
   Double_t xAxis70[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_TTbarll_Step_4_nbJet30_CSVT = new TH1F("hMC_TTbarll_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis70);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetBinContent(1,380.4341);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetBinContent(2,693.7227);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetBinContent(3,331.8086);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetBinContent(4,4.673101);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetBinContent(5,0.03240565);
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetEntries(41197);

   ci = TColor::GetColor("#ff0000");
   hMC_TTbarll_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_TTbarll_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_TTbarll_Step_4_nbJet30_CSVT,"");
   Double_t xAxis71[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_TTbarOthers_Step_4_nbJet30_CSVT = new TH1F("hMC_TTbarOthers_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis71);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetBinContent(1,260.5366);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetBinContent(2,269.6172);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetBinContent(3,48.30571);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetBinContent(4,0.930607);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetBinContent(5,0.03024244);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetEntries(14142);

   ci = TColor::GetColor("#ff6666");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_TTbarOthers_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_TTbarOthers_Step_4_nbJet30_CSVT,"");
   Double_t xAxis72[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_SingleTop_Step_4_nbJet30_CSVT = new TH1F("hMC_SingleTop_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis72);
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetBinContent(1,20.37396);
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetBinContent(2,28.59436);
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetBinContent(3,9.968685);
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetBinContent(4,0.09431654);
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetEntries(140);

   ci = TColor::GetColor("#00ff00");
   hMC_SingleTop_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_SingleTop_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_SingleTop_Step_4_nbJet30_CSVT,"");
   Double_t xAxis73[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMC_DYll_Step_4_nbJet30_CSVT = new TH1F("hMC_DYll_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis73);
   hMC_DYll_Step_4_nbJet30_CSVT->SetBinContent(1,273.729);
   hMC_DYll_Step_4_nbJet30_CSVT->SetBinContent(2,21.57503);
   hMC_DYll_Step_4_nbJet30_CSVT->SetBinContent(3,4.817089);
   hMC_DYll_Step_4_nbJet30_CSVT->SetEntries(111);

   ci = TColor::GetColor("#3366ff");
   hMC_DYll_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMC_DYll_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMC_DYll_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMC_DYll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMC_DYll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMC_DYll_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMC_DYll_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMC_DYll_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hLL_Step_4_nbJet30_CSVT->Add(hMC_DYll_Step_4_nbJet30_CSVT,"");
   hLL_Step_4_nbJet30_CSVT->Draw("same");
   Double_t xAxis74[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMCSig_TTbarbb_Step_4_nbJet30_CSVT = new TH1F("hMCSig_TTbarbb_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis74);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(1,7.791804);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(2,23.74101);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(3,23.27416);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(4,9.657867);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(5,2.822077);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetEntries(679);

   ci = TColor::GetColor("#660000");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->Draw("same");
   Double_t xAxis75[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hData_Step_4_nbJet30_CSVT = new TH1F("hData_Step_4_nbJet30_CSVT","",5, xAxis75);
   hData_Step_4_nbJet30_CSVT->SetBinContent(1,969);
   hData_Step_4_nbJet30_CSVT->SetBinContent(2,1228);
   hData_Step_4_nbJet30_CSVT->SetBinContent(3,519);
   hData_Step_4_nbJet30_CSVT->SetBinContent(4,28);
   hData_Step_4_nbJet30_CSVT->SetBinContent(5,2);
   hData_Step_4_nbJet30_CSVT->SetBinError(1,31.12876);
   hData_Step_4_nbJet30_CSVT->SetBinError(2,35.04283);
   hData_Step_4_nbJet30_CSVT->SetBinError(3,22.78157);
   hData_Step_4_nbJet30_CSVT->SetBinError(4,5.291503);
   hData_Step_4_nbJet30_CSVT->SetBinError(5,1.414214);
   hData_Step_4_nbJet30_CSVT->SetMinimum(0.4);
   hData_Step_4_nbJet30_CSVT->SetMaximum(100000);
   hData_Step_4_nbJet30_CSVT->SetEntries(2746);
   hData_Step_4_nbJet30_CSVT->SetStats(0);
   hData_Step_4_nbJet30_CSVT->SetMarkerStyle(20);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->Draw("same");
   Double_t xAxis76[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hData_Step_4_nbJet30_CSVT = new TH1F("hData_Step_4_nbJet30_CSVT","",5, xAxis76);
   hData_Step_4_nbJet30_CSVT->SetBinContent(1,969);
   hData_Step_4_nbJet30_CSVT->SetBinContent(2,1228);
   hData_Step_4_nbJet30_CSVT->SetBinContent(3,519);
   hData_Step_4_nbJet30_CSVT->SetBinContent(4,28);
   hData_Step_4_nbJet30_CSVT->SetBinContent(5,2);
   hData_Step_4_nbJet30_CSVT->SetBinError(1,31.12876);
   hData_Step_4_nbJet30_CSVT->SetBinError(2,35.04283);
   hData_Step_4_nbJet30_CSVT->SetBinError(3,22.78157);
   hData_Step_4_nbJet30_CSVT->SetBinError(4,5.291503);
   hData_Step_4_nbJet30_CSVT->SetBinError(5,1.414214);
   hData_Step_4_nbJet30_CSVT->SetMinimum(0.4);
   hData_Step_4_nbJet30_CSVT->SetMaximum(100000);
   hData_Step_4_nbJet30_CSVT->SetEntries(2746);
   hData_Step_4_nbJet30_CSVT->SetStats(0);
   hData_Step_4_nbJet30_CSVT->SetMarkerStyle(20);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hData_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hData_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hData_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hData_Step_4_nbJet30_CSVT->Draw("sameaxis");
   Double_t xAxis77[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMCSig_TTbarbb_Step_4_nbJet30_CSVT = new TH1F("hMCSig_TTbarbb_Step_4_nbJet30_CSVT","b-Tag Multiplicity",5, xAxis77);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(1,1008.346);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(2,1185.546);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(3,517.1984);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(4,36.32067);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(5,3.857906);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(1,115.3741);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(2,134.8789);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(3,61.2689);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(4,7.23069);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(5,2.009477);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetEntries(60597);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetFillColor(1);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetFillStyle(3004);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Events");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(1.2);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->Draw("same e2");
   pad1->Modified();
   cLL_Step_4_nbJet30_CSVT->cd();
  
// ------------>Primitives in pad: pad2
   pad2 = new TPad("pad2", "",0,0,1,0.3);
   pad2->Draw();
   pad2->cd();
   pad2->Range(-1.072875,-1,5.364372,2.333333);
   pad2->SetFillColor(0);
   pad2->SetBorderMode(0);
   pad2->SetBorderSize(2);
   pad2->SetTickx(1);
   pad2->SetTicky(1);
   pad2->SetLeftMargin(0.1666667);
   pad2->SetRightMargin(0.05660377);
   pad2->SetBottomMargin(0.3);
   pad2->SetFrameBorderMode(0);
   pad2->SetFrameBorderMode(0);
   Double_t xAxis78[6] = {0, 1, 2, 3, 4, 5}; 
   
   TH1F *hMCSig_TTbarbb_Step_4_nbJet30_CSVT = new TH1F("hMCSig_TTbarbb_Step_4_nbJet30_CSVT","",5, xAxis78);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(1,0.9609793);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(2,1.03581);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(3,1.003483);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(4,0.7709109);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinContent(5,0.5184159);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(1,0.04323034);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(2,0.04217444);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(3,0.06234755);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(4,0.1938758);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetBinError(5,0.4517089);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetMinimum(0);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetMaximum(2);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetEntries(73.84973);

   ci = TColor::GetColor("#660000");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetFillColor(ci);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->SetMarkerStyle(20);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitle("Number of b-Jets");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(1,"0");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(2,"1");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(3,"2");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(4,"3");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetBinLabel(5,"#geq4");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetLabelSize(0.13);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleSize(0.14);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleOffset(0.9);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetXaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitle("Data/MC");
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetNdivisions(505);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetLabelSize(0.1);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleSize(0.14);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleOffset(0.4);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetYaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelOffset(0.007);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetLabelSize(0.05);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleSize(0.06);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->GetZaxis()->SetTitleFont(42);
   hMCSig_TTbarbb_Step_4_nbJet30_CSVT->Draw("");
   TLine *line = new TLine(0,1,5,1);

   ci = TColor::GetColor("#ff0000");
   line->SetLineColor(ci);
   line->Draw();
   pad2->Modified();
   cLL_Step_4_nbJet30_CSVT->cd();
   cLL_Step_4_nbJet30_CSVT->Modified();
   cLL_Step_4_nbJet30_CSVT->cd();
   cLL_Step_4_nbJet30_CSVT->SetSelected(cLL_Step_4_nbJet30_CSVT);
  
   cLL_Step_4_nbJet30_CSVT->Print("cLL_Step_4_nbJet30_CSVT_40GeV.eps");
}
