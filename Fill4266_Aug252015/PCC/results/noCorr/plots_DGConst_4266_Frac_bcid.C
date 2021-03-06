{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Feb  7 16:33:52 2016) by ROOT version5.34/32
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,700,476);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   c1->SetHighLightColor(2);
   c1->Range(-367.0375,-0.1512499,3303.338,1.361249);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.01149498);
   gre->SetPointError(0,0,0.003055581);
   gre->SetPoint(1,2211,0.01156823);
   gre->SetPointError(1,0,0.009656127);
   gre->SetPoint(2,771,0.02788543);
   gre->SetPointError(2,0,0.02774939);
   gre->SetPoint(3,51,0.02737124);
   gre->SetPointError(3,0,0.06522784);
   gre->SetPoint(4,2674,0.9912069);
   gre->SetPointError(4,0,0.003176124);
   
   TH1F *Graph_Graph41 = new TH1F("Graph_Graph41","4266 PCC DGConst Frac",100,0,2936.3);
   Graph_Graph41->SetMinimum(0);
   Graph_Graph41->SetMaximum(1.209999);
   Graph_Graph41->SetDirectory(0);
   Graph_Graph41->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph41->SetLineColor(ci);
   Graph_Graph41->GetXaxis()->SetTitle("BCID");
   Graph_Graph41->GetXaxis()->SetLabelFont(42);
   Graph_Graph41->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetXaxis()->SetTitleFont(42);
   Graph_Graph41->GetYaxis()->SetTitle("Frac");
   Graph_Graph41->GetYaxis()->SetLabelFont(42);
   Graph_Graph41->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetYaxis()->SetTitleFont(42);
   Graph_Graph41->GetZaxis()->SetLabelFont(42);
   Graph_Graph41->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph41->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph41);
   
   gre->Draw("ap");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 2");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.9999616);
   gre->SetPointError(0,0,0.7159923);
   gre->SetPoint(1,2211,0.3572212);
   gre->SetPointError(1,0,0.5679145);
   gre->SetPoint(2,771,0.9968343);
   gre->SetPointError(2,0,0.002348724);
   gre->SetPoint(3,51,0.9992503);
   gre->SetPointError(3,0,0.7242151);
   gre->SetPoint(4,2674,0.9909869);
   gre->SetPointError(4,0,0.002577843);
   
   TH1F *Graph_Graph42 = new TH1F("Graph_Graph42","4266 PCC DGConst Frac  Scan 2",100,0,2936.3);
   Graph_Graph42->SetMinimum(-0.4041092);
   Graph_Graph42->SetMaximum(1.916881);
   Graph_Graph42->SetDirectory(0);
   Graph_Graph42->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph42->SetLineColor(ci);
   Graph_Graph42->GetXaxis()->SetLabelFont(42);
   Graph_Graph42->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetXaxis()->SetTitleFont(42);
   Graph_Graph42->GetYaxis()->SetLabelFont(42);
   Graph_Graph42->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetYaxis()->SetTitleFont(42);
   Graph_Graph42->GetZaxis()->SetLabelFont(42);
   Graph_Graph42->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph42->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph42);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 3");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(22);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.9900014);
   gre->SetPointError(0,0,0.7559317);
   gre->SetPoint(1,2211,7.738807e-06);
   gre->SetPointError(1,0,0.9835048);
   gre->SetPoint(2,771,0.9900024);
   gre->SetPointError(2,0,0.7559298);
   gre->SetPoint(3,51,0.9993701);
   gre->SetPointError(3,0,0.7231396);
   gre->SetPoint(4,2674,0.9999988);
   gre->SetPointError(4,0,0.7115641);
   
   TH1F *Graph_Graph43 = new TH1F("Graph_Graph43","4266 PCC DGConst Frac  Scan 3",100,0,2936.3);
   Graph_Graph43->SetMinimum(-1.25644);
   Graph_Graph43->SetMaximum(2.018876);
   Graph_Graph43->SetDirectory(0);
   Graph_Graph43->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph43->SetLineColor(ci);
   Graph_Graph43->GetXaxis()->SetLabelFont(42);
   Graph_Graph43->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetXaxis()->SetTitleFont(42);
   Graph_Graph43->GetYaxis()->SetLabelFont(42);
   Graph_Graph43->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetYaxis()->SetTitleFont(42);
   Graph_Graph43->GetZaxis()->SetLabelFont(42);
   Graph_Graph43->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph43->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph43);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 4");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(23);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.01185005);
   gre->SetPointError(0,0,0.002804071);
   gre->SetPoint(1,2211,0.01402741);
   gre->SetPointError(1,0,0.003095468);
   gre->SetPoint(2,771,0.9781067);
   gre->SetPointError(2,0,0.004310195);
   gre->SetPoint(3,51,0.9900007);
   gre->SetPointError(3,0,0.755933);
   gre->SetPoint(4,2674,0.9820855);
   gre->SetPointError(4,0,0.003082699);
   
   TH1F *Graph_Graph44 = new TH1F("Graph_Graph44","4266 PCC DGConst Frac  Scan 4",100,0,2936.3);
   Graph_Graph44->SetMinimum(0);
   Graph_Graph44->SetMaximum(1.919623);
   Graph_Graph44->SetDirectory(0);
   Graph_Graph44->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph44->SetLineColor(ci);
   Graph_Graph44->GetXaxis()->SetLabelFont(42);
   Graph_Graph44->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetXaxis()->SetTitleFont(42);
   Graph_Graph44->GetYaxis()->SetLabelFont(42);
   Graph_Graph44->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetYaxis()->SetTitleFont(42);
   Graph_Graph44->GetZaxis()->SetLabelFont(42);
   Graph_Graph44->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph44->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph44);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 5");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.01061536);
   gre->SetPointError(0,0,0.00736693);
   gre->SetPoint(1,2211,0.9769114);
   gre->SetPointError(1,0,0.006781993);
   gre->SetPoint(2,771,0.01356289);
   gre->SetPointError(2,0,0.006736714);
   gre->SetPoint(3,51,0.97781);
   gre->SetPointError(3,0,0.007245113);
   gre->SetPoint(4,2674,0.02525706);
   gre->SetPointError(4,0,0.969592);
   
   TH1F *Graph_Graph45 = new TH1F("Graph_Graph45","4266 PCC DGConst Frac  Scan 5",100,0,2936.3);
   Graph_Graph45->SetMinimum(-1.138253);
   Graph_Graph45->SetMaximum(1.188767);
   Graph_Graph45->SetDirectory(0);
   Graph_Graph45->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph45->SetLineColor(ci);
   Graph_Graph45->GetXaxis()->SetLabelFont(42);
   Graph_Graph45->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetXaxis()->SetTitleFont(42);
   Graph_Graph45->GetYaxis()->SetLabelFont(42);
   Graph_Graph45->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetYaxis()->SetTitleFont(42);
   Graph_Graph45->GetZaxis()->SetLabelFont(42);
   Graph_Graph45->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph45->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph45);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 6");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.997643);
   gre->SetPointError(0,0,0.9867827);
   gre->SetPoint(1,2211,0.9890417);
   gre->SetPointError(1,0,0.004652597);
   gre->SetPoint(2,771,0.5035199);
   gre->SetPointError(2,0,0.6031561);
   gre->SetPoint(3,51,0.9908127);
   gre->SetPointError(3,0,0.9883704);
   gre->SetPoint(4,2674,1);
   gre->SetPointError(4,0,0.006721293);
   
   TH1F *Graph_Graph46 = new TH1F("Graph_Graph46","4266 PCC DGConst Frac  Scan 6",100,0,2936.3);
   Graph_Graph46->SetMinimum(-0.3080424);
   Graph_Graph46->SetMaximum(2.192832);
   Graph_Graph46->SetDirectory(0);
   Graph_Graph46->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph46->SetLineColor(ci);
   Graph_Graph46->GetXaxis()->SetLabelFont(42);
   Graph_Graph46->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetXaxis()->SetTitleFont(42);
   Graph_Graph46->GetYaxis()->SetLabelFont(42);
   Graph_Graph46->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetYaxis()->SetTitleFont(42);
   Graph_Graph46->GetZaxis()->SetLabelFont(42);
   Graph_Graph46->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph46->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph46);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 7");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(26);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.9601911);
   gre->SetPointError(0,0,0.01491304);
   gre->SetPoint(1,2211,0.02767868);
   gre->SetPointError(1,0,0.002089171);
   gre->SetPoint(2,771,0.9821835);
   gre->SetPointError(2,0,0.006893679);
   gre->SetPoint(3,51,0.01669805);
   gre->SetPointError(3,0,0.007533053);
   gre->SetPoint(4,2674,0.04200481);
   gre->SetPointError(4,0,0.01233239);
   
   TH1F *Graph_Graph47 = new TH1F("Graph_Graph47","4266 PCC DGConst Frac  Scan 7",100,0,2936.3);
   Graph_Graph47->SetMinimum(0);
   Graph_Graph47->SetMaximum(1.087068);
   Graph_Graph47->SetDirectory(0);
   Graph_Graph47->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph47->SetLineColor(ci);
   Graph_Graph47->GetXaxis()->SetLabelFont(42);
   Graph_Graph47->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetXaxis()->SetTitleFont(42);
   Graph_Graph47->GetYaxis()->SetLabelFont(42);
   Graph_Graph47->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetYaxis()->SetTitleFont(42);
   Graph_Graph47->GetZaxis()->SetLabelFont(42);
   Graph_Graph47->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph47->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph47);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 8");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(27);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,1);
   gre->SetPointError(0,0,0.02297953);
   gre->SetPoint(1,2211,1);
   gre->SetPointError(1,0,0.007397039);
   gre->SetPoint(2,771,0.9998774);
   gre->SetPointError(2,0,0.7229394);
   gre->SetPoint(3,51,0.9999998);
   gre->SetPointError(3,0,0.9798661);
   gre->SetPoint(4,2674,0.9874549);
   gre->SetPointError(4,0,0.9451814);
   
   TH1F *Graph_Graph48 = new TH1F("Graph_Graph48","4266 PCC DGConst Frac  Scan 8",100,0,2936.3);
   Graph_Graph48->SetMinimum(0);
   Graph_Graph48->SetMaximum(2.175839);
   Graph_Graph48->SetDirectory(0);
   Graph_Graph48->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph48->SetLineColor(ci);
   Graph_Graph48->GetXaxis()->SetLabelFont(42);
   Graph_Graph48->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetXaxis()->SetTitleFont(42);
   Graph_Graph48->GetYaxis()->SetLabelFont(42);
   Graph_Graph48->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetYaxis()->SetTitleFont(42);
   Graph_Graph48->GetZaxis()->SetLabelFont(42);
   Graph_Graph48->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph48->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph48);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 9");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(28);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.05682143);
   gre->SetPointError(0,0,0.03252401);
   gre->SetPoint(1,2211,0.07573841);
   gre->SetPointError(1,0,0.03961095);
   gre->SetPoint(2,771,0.959541);
   gre->SetPointError(2,0,0.00876371);
   gre->SetPoint(3,51,0.9655079);
   gre->SetPointError(3,0,0.019738);
   gre->SetPoint(4,2674,0.04669487);
   gre->SetPointError(4,0,0.01792779);
   
   TH1F *Graph_Graph49 = new TH1F("Graph_Graph49","4266 PCC DGConst Frac  Scan 9",100,0,2936.3);
   Graph_Graph49->SetMinimum(0);
   Graph_Graph49->SetMaximum(1.081341);
   Graph_Graph49->SetDirectory(0);
   Graph_Graph49->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph49->SetLineColor(ci);
   Graph_Graph49->GetXaxis()->SetLabelFont(42);
   Graph_Graph49->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetXaxis()->SetTitleFont(42);
   Graph_Graph49->GetYaxis()->SetLabelFont(42);
   Graph_Graph49->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetYaxis()->SetTitleFont(42);
   Graph_Graph49->GetZaxis()->SetLabelFont(42);
   Graph_Graph49->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph49->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph49->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph49);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("");
   gre->SetTitle("4266 PCC DGConst Frac  Scan 10");
   gre->SetFillColor(1);
   gre->SetMarkerColor(7);
   gre->SetMarkerStyle(29);
   gre->SetMarkerSize(0.4);
   gre->SetPoint(0,1631,0.0287882);
   gre->SetPointError(0,0,0.05039147);
   gre->SetPoint(1,2211,0.9901035);
   gre->SetPointError(1,0,0.7557258);
   gre->SetPoint(2,771,0.003613489);
   gre->SetPointError(2,0,0.002321118);
   gre->SetPoint(3,51,0.9900102);
   gre->SetPointError(3,0,0.7559139);
   gre->SetPoint(4,2674,0.01936714);
   gre->SetPointError(4,0,0.07014657);
   
   TH1F *Graph_Graph50 = new TH1F("Graph_Graph50","4266 PCC DGConst Frac  Scan 10",100,0,2936.3);
   Graph_Graph50->SetMinimum(-0.2304498);
   Graph_Graph50->SetMaximum(1.925595);
   Graph_Graph50->SetDirectory(0);
   Graph_Graph50->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph50->SetLineColor(ci);
   Graph_Graph50->GetXaxis()->SetLabelFont(42);
   Graph_Graph50->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph50->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph50->GetXaxis()->SetTitleFont(42);
   Graph_Graph50->GetYaxis()->SetLabelFont(42);
   Graph_Graph50->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph50->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph50->GetYaxis()->SetTitleFont(42);
   Graph_Graph50->GetZaxis()->SetLabelFont(42);
   Graph_Graph50->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph50->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph50->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph50);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.65,0.8,0.95,0.95,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("","4266 PCC DGConst Frac Scan  1","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 2","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 3","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 4","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 5","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 6","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 7","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 8","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 9","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(6);
   entry->SetMarkerStyle(28);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   entry=leg->AddEntry("","4266 PCC DGConst Frac  Scan 10","lpf");
   entry->SetFillColor(1);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(7);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(0.4);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2902874,0.94,0.7097126,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("4266 PCC DGConst Frac");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
