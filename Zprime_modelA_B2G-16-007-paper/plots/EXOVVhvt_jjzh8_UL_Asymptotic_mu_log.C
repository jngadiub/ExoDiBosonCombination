{
//=========Macro generated from canvas: c_lim_Asymptotic/c_lim_Asymptotic
//=========  (Fri Oct 21 13:02:00 2016) by ROOT version5.34/18
   TCanvas *c_lim_Asymptotic = new TCanvas("c_lim_Asymptotic", "c_lim_Asymptotic",0,0,600,630);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_lim_Asymptotic->SetHighLightColor(2);
   c_lim_Asymptotic->Range(0.20875,-2.592593,2.83375,2.345679);
   c_lim_Asymptotic->SetFillColor(0);
   c_lim_Asymptotic->SetBorderMode(0);
   c_lim_Asymptotic->SetBorderSize(2);
   c_lim_Asymptotic->SetLogy();
   c_lim_Asymptotic->SetTickx(1);
   c_lim_Asymptotic->SetTicky(1);
   c_lim_Asymptotic->SetLeftMargin(0.13);
   c_lim_Asymptotic->SetRightMargin(0.07);
   c_lim_Asymptotic->SetTopMargin(0.07);
   c_lim_Asymptotic->SetBottomMargin(0.12);
   c_lim_Asymptotic->SetFrameFillStyle(0);
   c_lim_Asymptotic->SetFrameBorderMode(0);
   c_lim_Asymptotic->SetFrameFillStyle(0);
   c_lim_Asymptotic->SetFrameBorderMode(0);
   
   TH1F *hframe__13 = new TH1F("hframe__13","",1000,0.55,2.65);
   hframe__13->SetMinimum(0.01);
   hframe__13->SetMaximum(100);
   hframe__13->SetDirectory(0);
   hframe__13->SetStats(0);
   hframe__13->SetLineStyle(0);
   hframe__13->SetMarkerStyle(20);
   hframe__13->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__13->GetXaxis()->SetLabelFont(42);
   hframe__13->GetXaxis()->SetLabelOffset(0.007);
   hframe__13->GetXaxis()->SetLabelSize(0.035);
   hframe__13->GetXaxis()->SetTitleSize(0.045);
   hframe__13->GetXaxis()->SetTitleOffset(1.1);
   hframe__13->GetXaxis()->SetTitleFont(42);
   hframe__13->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__13->GetYaxis()->SetLabelFont(42);
   hframe__13->GetYaxis()->SetLabelOffset(0.007);
   hframe__13->GetYaxis()->SetLabelSize(0.035);
   hframe__13->GetYaxis()->SetTitleSize(0.045);
   hframe__13->GetYaxis()->SetTitleOffset(1.1);
   hframe__13->GetYaxis()->SetTitleFont(42);
   hframe__13->GetZaxis()->SetLabelFont(42);
   hframe__13->GetZaxis()->SetLabelOffset(0.007);
   hframe__13->GetZaxis()->SetLabelSize(0.05);
   hframe__13->GetZaxis()->SetTitleSize(0.06);
   hframe__13->GetZaxis()->SetTitleFont(42);
   hframe__13->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(34);
   grae->SetName("Limit95CLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(5);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,1,1.22961);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1.1,1.414223);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1.2,1.717472);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.3,2.009773);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.4,2.324867);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.5,2.962914);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.6,3.247261);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.7,3.858433);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.8,4.407749);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.9,5.333519);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,2,6.804085);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,2.1,8.676453);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2.2,11.70578);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.3,14.75555);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.4,20.50781);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.5,26.10077);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.6,34.83337);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.6,240.517);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.5,171.7837);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.4,129.0609);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.3,90.08688);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.2,69.60089);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,2.1,49.56672);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,2,37.55816);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,1.9,28.38047);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,1.8,22.61533);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,1.7,19.23868);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,1.6,15.66523);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,1.5,13.90395);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,1.4,10.62234);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,1.3,8.93503);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,1.2,7.42313);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,1.1,6.043677);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,1,5.30409);
   grae->SetPointError(33,0,0,0,0);
   
   TH1F *Graph_Limit95CLs17 = new TH1F("Graph_Limit95CLs17","Graph",100,0.84,2.76);
   Graph_Limit95CLs17->SetMinimum(1.106649);
   Graph_Limit95CLs17->SetMaximum(264.4457);
   Graph_Limit95CLs17->SetDirectory(0);
   Graph_Limit95CLs17->SetStats(0);
   Graph_Limit95CLs17->SetLineStyle(0);
   Graph_Limit95CLs17->SetMarkerStyle(20);
   Graph_Limit95CLs17->GetXaxis()->SetLabelFont(42);
   Graph_Limit95CLs17->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs17->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs17->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs17->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit95CLs17->GetXaxis()->SetTitleFont(42);
   Graph_Limit95CLs17->GetYaxis()->SetLabelFont(42);
   Graph_Limit95CLs17->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs17->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs17->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs17->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit95CLs17->GetYaxis()->SetTitleFont(42);
   Graph_Limit95CLs17->GetZaxis()->SetLabelFont(42);
   Graph_Limit95CLs17->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs17->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs17->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs17->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit95CLs17);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(34);
   grae->SetName("Limit68CLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(3);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,1,1.668428);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1.1,1.914995);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1.2,2.330396);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.3,2.749784);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.4,3.194378);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.5,4.076659);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.6,4.483554);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.7,5.362277);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.8,6.180329);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.9,7.522926);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,2,9.654992);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,2.1,12.3406);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2.2,16.84802);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.3,21.34086);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.4,29.67453);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.5,38.04901);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.6,50.92638);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.6,140.5008);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.5,102.4081);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.4,78.63878);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.3,55.30289);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.2,43.07207);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,2.1,30.94064);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,2,23.68771);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,1.9,18.1207);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,1.8,14.65484);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,1.7,12.49321);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,1.6,10.33511);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,1.5,9.222687);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,1.4,7.10545);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,1.3,6.030794);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,1.2,5.047833);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,1.1,4.118654);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,1,3.594726);
   grae->SetPointError(33,0,0,0,0);
   
   TH1F *Graph_Limit68CLs18 = new TH1F("Graph_Limit68CLs18","Graph",100,0.84,2.76);
   Graph_Limit68CLs18->SetMinimum(1.501586);
   Graph_Limit68CLs18->SetMaximum(154.384);
   Graph_Limit68CLs18->SetDirectory(0);
   Graph_Limit68CLs18->SetStats(0);
   Graph_Limit68CLs18->SetLineStyle(0);
   Graph_Limit68CLs18->SetMarkerStyle(20);
   Graph_Limit68CLs18->GetXaxis()->SetLabelFont(42);
   Graph_Limit68CLs18->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs18->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs18->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs18->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit68CLs18->GetXaxis()->SetTitleFont(42);
   Graph_Limit68CLs18->GetYaxis()->SetLabelFont(42);
   Graph_Limit68CLs18->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs18->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs18->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs18->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit68CLs18->GetYaxis()->SetTitleFont(42);
   Graph_Limit68CLs18->GetZaxis()->SetLabelFont(42);
   Graph_Limit68CLs18->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs18->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs18->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs18->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit68CLs18);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(17);
   grae->SetName("LimitExpectedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,1,2.412109);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1.1,2.763672);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1.2,3.369141);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.3,4.003906);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.4,4.667969);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.5,5.996094);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.6,6.650391);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.7,7.998047);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.8,9.287109);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.9,11.42578);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,2,14.82422);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,2.1,18.98438);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2.2,26.17188);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.3,33.28125);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.4,46.875);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.5,60.46875);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.6,82.1875);
   grae->SetPointError(16,0,0,0,0);
   
   TH1F *Graph_LimitExpectedCLs19 = new TH1F("Graph_LimitExpectedCLs19","Graph",100,0.84,2.76);
   Graph_LimitExpectedCLs19->SetMinimum(2.170898);
   Graph_LimitExpectedCLs19->SetMaximum(90.16504);
   Graph_LimitExpectedCLs19->SetDirectory(0);
   Graph_LimitExpectedCLs19->SetStats(0);
   Graph_LimitExpectedCLs19->SetLineStyle(0);
   Graph_LimitExpectedCLs19->SetMarkerStyle(20);
   Graph_LimitExpectedCLs19->GetXaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs19->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs19->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs19->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs19->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitExpectedCLs19->GetXaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs19->GetYaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs19->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs19->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs19->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs19->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitExpectedCLs19->GetYaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs19->GetZaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs19->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs19->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs19->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs19->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitExpectedCLs19);
   
   grae->Draw("l");
   
   grae = new TGraphAsymmErrors(17);
   grae->SetName("LimitObservedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,1,1.647638);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,1.1,3.844684);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1.2,4.658874);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.3,3.234637);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.4,2.78457);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.5,4.459224);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.6,6.125844);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.7,12.62106);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.8,14.88707);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.9,14.67206);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,2,15.94832);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,2.1,28.95389);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2.2,49.50318);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.3,64.51726);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.4,88.60552);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.5,91.68164);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.6,73.20932);
   grae->SetPointError(16,0,0,0,0);
   
   TH1F *Graph_LimitObservedCLs20 = new TH1F("Graph_LimitObservedCLs20","Graph",100,0.84,2.76);
   Graph_LimitObservedCLs20->SetMinimum(1.482874);
   Graph_LimitObservedCLs20->SetMaximum(100.685);
   Graph_LimitObservedCLs20->SetDirectory(0);
   Graph_LimitObservedCLs20->SetStats(0);
   Graph_LimitObservedCLs20->SetLineStyle(0);
   Graph_LimitObservedCLs20->SetMarkerStyle(20);
   Graph_LimitObservedCLs20->GetXaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs20->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs20->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs20->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs20->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitObservedCLs20->GetXaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs20->GetYaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs20->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs20->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs20->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs20->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitObservedCLs20->GetYaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs20->GetZaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs20->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs20->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs20->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs20->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitObservedCLs20);
   
   grae->Draw("lp");
   
   TGraph *graph = new TGraph(17);
   graph->SetName("CrossSectionTheo");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetFillStyle(3344);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetLineColor(ci);
   graph->SetLineWidth(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(2);
   graph->SetPoint(0,1,1);
   graph->SetPoint(1,1.1,1);
   graph->SetPoint(2,1.2,1);
   graph->SetPoint(3,1.3,1);
   graph->SetPoint(4,1.4,1);
   graph->SetPoint(5,1.5,1);
   graph->SetPoint(6,1.6,1);
   graph->SetPoint(7,1.7,1);
   graph->SetPoint(8,1.8,1);
   graph->SetPoint(9,1.9,1);
   graph->SetPoint(10,2,1);
   graph->SetPoint(11,2.1,1);
   graph->SetPoint(12,2.2,1);
   graph->SetPoint(13,2.3,1);
   graph->SetPoint(14,2.4,1);
   graph->SetPoint(15,2.5,1);
   graph->SetPoint(16,2.6,1);
   
   TH1F *Graph_CrossSectionTheo5 = new TH1F("Graph_CrossSectionTheo5","Graph",100,0.84,2.76);
   Graph_CrossSectionTheo5->SetMinimum(0.9);
   Graph_CrossSectionTheo5->SetMaximum(2.1);
   Graph_CrossSectionTheo5->SetDirectory(0);
   Graph_CrossSectionTheo5->SetStats(0);
   Graph_CrossSectionTheo5->SetLineStyle(0);
   Graph_CrossSectionTheo5->SetMarkerStyle(20);
   Graph_CrossSectionTheo5->GetXaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo5->GetXaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo5->GetXaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo5->GetXaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo5->GetXaxis()->SetTitleOffset(0.9);
   Graph_CrossSectionTheo5->GetXaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo5->GetYaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo5->GetYaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo5->GetYaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo5->GetYaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo5->GetYaxis()->SetTitleOffset(1.25);
   Graph_CrossSectionTheo5->GetYaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo5->GetZaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo5->GetZaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo5->GetZaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo5->GetZaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_CrossSectionTheo5);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.3691275,0.1993355,0.8842282,0.4003322,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("LimitObservedCLs","Asympt. CL_{S} Observed","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit68CLs","Asympt. CL_{S} Expected #pm 1#sigma","LF");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit95CLs","Asympt. CL_{S} Expected #pm 2#sigma","LF");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CrossSectionTheo"," HVT_{A} (g_{V}=1)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.93,0.944,"19.7 fb^{-1} (8 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.0371);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.13,0.944,"CMS");
tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.0455);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__14 = new TH1F("hframe__14","",1000,0.55,2.65);
   hframe__14->SetMinimum(0.01);
   hframe__14->SetMaximum(100);
   hframe__14->SetDirectory(0);
   hframe__14->SetStats(0);
   hframe__14->SetLineStyle(0);
   hframe__14->SetMarkerStyle(20);
   hframe__14->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__14->GetXaxis()->SetLabelFont(42);
   hframe__14->GetXaxis()->SetLabelOffset(0.007);
   hframe__14->GetXaxis()->SetLabelSize(0.035);
   hframe__14->GetXaxis()->SetTitleSize(0.045);
   hframe__14->GetXaxis()->SetTitleOffset(1.1);
   hframe__14->GetXaxis()->SetTitleFont(42);
   hframe__14->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__14->GetYaxis()->SetLabelFont(42);
   hframe__14->GetYaxis()->SetLabelOffset(0.007);
   hframe__14->GetYaxis()->SetLabelSize(0.035);
   hframe__14->GetYaxis()->SetTitleSize(0.045);
   hframe__14->GetYaxis()->SetTitleOffset(1.1);
   hframe__14->GetYaxis()->SetTitleFont(42);
   hframe__14->GetZaxis()->SetLabelFont(42);
   hframe__14->GetZaxis()->SetLabelOffset(0.007);
   hframe__14->GetZaxis()->SetLabelSize(0.05);
   hframe__14->GetZaxis()->SetTitleSize(0.06);
   hframe__14->GetZaxis()->SetTitleFont(42);
   hframe__14->Draw("sameaxis");
   
   TH1F *hframe__15 = new TH1F("hframe__15","",1000,0.55,2.65);
   hframe__15->SetMinimum(0.01);
   hframe__15->SetMaximum(100);
   hframe__15->SetDirectory(0);
   hframe__15->SetStats(0);
   hframe__15->SetLineStyle(0);
   hframe__15->SetMarkerStyle(20);
   hframe__15->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__15->GetXaxis()->SetLabelFont(42);
   hframe__15->GetXaxis()->SetLabelOffset(0.007);
   hframe__15->GetXaxis()->SetLabelSize(0.035);
   hframe__15->GetXaxis()->SetTitleSize(0.045);
   hframe__15->GetXaxis()->SetTitleOffset(1.1);
   hframe__15->GetXaxis()->SetTitleFont(42);
   hframe__15->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__15->GetYaxis()->SetLabelFont(42);
   hframe__15->GetYaxis()->SetLabelOffset(0.007);
   hframe__15->GetYaxis()->SetLabelSize(0.035);
   hframe__15->GetYaxis()->SetTitleSize(0.045);
   hframe__15->GetYaxis()->SetTitleOffset(1.1);
   hframe__15->GetYaxis()->SetTitleFont(42);
   hframe__15->GetZaxis()->SetLabelFont(42);
   hframe__15->GetZaxis()->SetLabelOffset(0.007);
   hframe__15->GetZaxis()->SetLabelSize(0.05);
   hframe__15->GetZaxis()->SetTitleSize(0.06);
   hframe__15->GetZaxis()->SetTitleFont(42);
   hframe__15->Draw("sameaxig");
   
   leg = new TLegend(0.3691275,0.1993355,0.8842282,0.4003322,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.031);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("LimitObservedCLs","Asympt. CL_{S} Observed","LP");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit68CLs","Asympt. CL_{S} Expected #pm 1#sigma","LF");
   entry->SetFillColor(3);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Limit95CLs","Asympt. CL_{S} Expected #pm 2#sigma","LF");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(2);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("CrossSectionTheo"," HVT_{A} (g_{V}=1)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.5486577,0.8355482,0.8993289,0.8920266,"brNDC");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextAlign(32);
   pt->SetTextFont(42);
   pt->SetTextSize(0.031);
   text = pt->AddText("qqbb(4q) (8 TeV)");
   text->SetTextFont(62);
   pt->Draw();
   c_lim_Asymptotic->Modified();
   c_lim_Asymptotic->cd();
   c_lim_Asymptotic->SetSelected(c_lim_Asymptotic);
}
