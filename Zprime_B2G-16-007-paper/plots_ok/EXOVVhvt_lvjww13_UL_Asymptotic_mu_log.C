{
//=========Macro generated from canvas: c_lim_Asymptotic/c_lim_Asymptotic
//=========  (Fri Oct 14 10:18:08 2016) by ROOT version5.34/18
   TCanvas *c_lim_Asymptotic = new TCanvas("c_lim_Asymptotic", "c_lim_Asymptotic",0,0,600,630);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_lim_Asymptotic->SetHighLightColor(2);
   c_lim_Asymptotic->Range(0.21375,-2.592593,4.33875,2.345679);
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
   
   TH1F *hframe__19 = new TH1F("hframe__19","",1000,0.75,4.05);
   hframe__19->SetMinimum(0.01);
   hframe__19->SetMaximum(100);
   hframe__19->SetDirectory(0);
   hframe__19->SetStats(0);
   hframe__19->SetLineStyle(0);
   hframe__19->SetMarkerStyle(20);
   hframe__19->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__19->GetXaxis()->SetLabelFont(42);
   hframe__19->GetXaxis()->SetLabelOffset(0.007);
   hframe__19->GetXaxis()->SetLabelSize(0.035);
   hframe__19->GetXaxis()->SetTitleSize(0.045);
   hframe__19->GetXaxis()->SetTitleOffset(1.1);
   hframe__19->GetXaxis()->SetTitleFont(42);
   hframe__19->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__19->GetYaxis()->SetLabelFont(42);
   hframe__19->GetYaxis()->SetLabelOffset(0.007);
   hframe__19->GetYaxis()->SetLabelSize(0.035);
   hframe__19->GetYaxis()->SetTitleSize(0.045);
   hframe__19->GetYaxis()->SetTitleOffset(1.1);
   hframe__19->GetYaxis()->SetTitleFont(42);
   hframe__19->GetZaxis()->SetLabelFont(42);
   hframe__19->GetZaxis()->SetLabelOffset(0.007);
   hframe__19->GetZaxis()->SetLabelSize(0.05);
   hframe__19->GetZaxis()->SetTitleSize(0.06);
   hframe__19->GetZaxis()->SetTitleFont(42);
   hframe__19->Draw(" ");
   
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(66);
   grae->SetName("Limit95CLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(5);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.2747688);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.2242112);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.1796746);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.1836658);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.2218962);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.255537);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.3072166);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.3804588);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.4908013);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.6000781);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.7199693);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,0.8427286);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,0.9922028);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,1.261196);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.474056);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,1.704693);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,1.959019);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,2.250938);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,2.558327);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,2.892113);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,3.284187);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,3.729057);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,4.266357);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,4.85878);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,5.527496);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,6.334305);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,7.251434);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,8.271561);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,9.599152);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,11.12015);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,13.00049);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,15.21378);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,17.84775);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,145.4089);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,120.7744);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,100.878);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,84.44274);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,69.35902);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,57.39584);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,47.80468);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,39.68621);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,33.30677);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,27.87245);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,23.31338);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,19.56831);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,16.4666);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,13.85937);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,11.71337);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,9.924755);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,8.363302);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,7.031054);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,5.913116);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,4.984337);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,4.053345);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,3.442047);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,2.956355);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,2.487234);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,2.10271);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,1.743272);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,1.469236);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,1.269889);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,1.113543);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.9812232);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.9310291);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.9907451);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,1.402243);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Limit95CLs25 = new TH1F("Graph_Limit95CLs25","Graph",100,0.48,4.32);
   Graph_Limit95CLs25->SetMinimum(0.1617072);
   Graph_Limit95CLs25->SetMaximum(159.9318);
   Graph_Limit95CLs25->SetDirectory(0);
   Graph_Limit95CLs25->SetStats(0);
   Graph_Limit95CLs25->SetLineStyle(0);
   Graph_Limit95CLs25->SetMarkerStyle(20);
   Graph_Limit95CLs25->GetXaxis()->SetLabelFont(42);
   Graph_Limit95CLs25->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs25->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs25->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs25->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit95CLs25->GetXaxis()->SetTitleFont(42);
   Graph_Limit95CLs25->GetYaxis()->SetLabelFont(42);
   Graph_Limit95CLs25->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs25->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs25->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs25->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit95CLs25->GetYaxis()->SetTitleFont(42);
   Graph_Limit95CLs25->GetZaxis()->SetLabelFont(42);
   Graph_Limit95CLs25->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit95CLs25->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit95CLs25->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit95CLs25->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit95CLs25);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(66);
   grae->SetName("Limit68CLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(3);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.4096938);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.3192256);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.2693182);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.2763219);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.3274565);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.3742524);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.4433528);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.5387965);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.6753218);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,0.8109094);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,0.9651309);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.125233);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,1.317085);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,1.647939);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,1.928359);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,2.238402);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,2.59191);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,2.985148);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,3.419322);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,3.912168);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,4.471444);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,5.141901);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,5.947347);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,6.805119);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,7.857156);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,9.08016);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,10.4727);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,12.21757);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,14.21986);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,16.74035);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,19.73433);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,23.3917);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,27.84886);
   grae->SetPointError(32,0,0,0,0);
   grae->SetPoint(33,4,87.35708);
   grae->SetPointError(33,0,0,0,0);
   grae->SetPoint(34,3.9,71.92516);
   grae->SetPointError(34,0,0,0,0);
   grae->SetPoint(35,3.8,59.54803);
   grae->SetPointError(35,0,0,0,0);
   grae->SetPoint(36,3.7,49.28812);
   grae->SetPointError(36,0,0,0,0);
   grae->SetPoint(37,3.6,40.9502);
   grae->SetPointError(37,0,0,0,0);
   grae->SetPoint(38,3.5,34.307);
   grae->SetPointError(38,0,0,0,0);
   grae->SetPoint(39,3.4,28.71133);
   grae->SetPointError(39,0,0,0,0);
   grae->SetPoint(40,3.3,24.18143);
   grae->SetPointError(40,0,0,0,0);
   grae->SetPoint(41,3.2,20.44649);
   grae->SetPointError(41,0,0,0,0);
   grae->SetPoint(42,3.1,17.2529);
   grae->SetPointError(42,0,0,0,0);
   grae->SetPoint(43,3,14.68856);
   grae->SetPointError(43,0,0,0,0);
   grae->SetPoint(44,2.9,12.45243);
   grae->SetPointError(44,0,0,0,0);
   grae->SetPoint(45,2.8,10.57121);
   grae->SetPointError(45,0,0,0,0);
   grae->SetPoint(46,2.7,8.99999);
   grae->SetPointError(46,0,0,0,0);
   grae->SetPoint(47,2.6,7.700243);
   grae->SetPointError(47,0,0,0,0);
   grae->SetPoint(48,2.5,6.570311);
   grae->SetPointError(48,0,0,0,0);
   grae->SetPoint(49,2.4,5.604313);
   grae->SetPointError(49,0,0,0,0);
   grae->SetPoint(50,2.3,4.755205);
   grae->SetPointError(50,0,0,0,0);
   grae->SetPoint(51,2.2,4.038719);
   grae->SetPointError(51,0,0,0,0);
   grae->SetPoint(52,2.1,3.412289);
   grae->SetPointError(52,0,0,0,0);
   grae->SetPoint(53,2,2.768477);
   grae->SetPointError(53,0,0,0,0);
   grae->SetPoint(54,1.9,2.377633);
   grae->SetPointError(54,0,0,0,0);
   grae->SetPoint(55,1.8,2.035495);
   grae->SetPointError(55,0,0,0,0);
   grae->SetPoint(56,1.7,1.722342);
   grae->SetPointError(56,0,0,0,0);
   grae->SetPoint(57,1.6,1.457174);
   grae->SetPointError(57,0,0,0,0);
   grae->SetPoint(58,1.5,1.202481);
   grae->SetPointError(58,0,0,0,0);
   grae->SetPoint(59,1.4,1.014533);
   grae->SetPointError(59,0,0,0,0);
   grae->SetPoint(60,1.3,0.8704187);
   grae->SetPointError(60,0,0,0,0);
   grae->SetPoint(61,1.2,0.7698089);
   grae->SetPointError(61,0,0,0,0);
   grae->SetPoint(62,1.1,0.6699966);
   grae->SetPointError(62,0,0,0,0);
   grae->SetPoint(63,1,0.6402557);
   grae->SetPointError(63,0,0,0,0);
   grae->SetPoint(64,0.9,0.7002618);
   grae->SetPointError(64,0,0,0,0);
   grae->SetPoint(65,0.8,0.9678201);
   grae->SetPointError(65,0,0,0,0);
   
   TH1F *Graph_Limit68CLs26 = new TH1F("Graph_Limit68CLs26","Graph",100,0.48,4.32);
   Graph_Limit68CLs26->SetMinimum(0.2423864);
   Graph_Limit68CLs26->SetMaximum(96.06585);
   Graph_Limit68CLs26->SetDirectory(0);
   Graph_Limit68CLs26->SetStats(0);
   Graph_Limit68CLs26->SetLineStyle(0);
   Graph_Limit68CLs26->SetMarkerStyle(20);
   Graph_Limit68CLs26->GetXaxis()->SetLabelFont(42);
   Graph_Limit68CLs26->GetXaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs26->GetXaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs26->GetXaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs26->GetXaxis()->SetTitleOffset(0.9);
   Graph_Limit68CLs26->GetXaxis()->SetTitleFont(42);
   Graph_Limit68CLs26->GetYaxis()->SetLabelFont(42);
   Graph_Limit68CLs26->GetYaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs26->GetYaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs26->GetYaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs26->GetYaxis()->SetTitleOffset(1.25);
   Graph_Limit68CLs26->GetYaxis()->SetTitleFont(42);
   Graph_Limit68CLs26->GetZaxis()->SetLabelFont(42);
   Graph_Limit68CLs26->GetZaxis()->SetLabelOffset(0.007);
   Graph_Limit68CLs26->GetZaxis()->SetLabelSize(0.05);
   Graph_Limit68CLs26->GetZaxis()->SetTitleSize(0.06);
   Graph_Limit68CLs26->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Limit68CLs26);
   
   grae->Draw("f");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("LimitExpectedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineStyle(2);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   grae->SetPoint(0,0.8,0.6308594);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.4724121);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.4162598);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.4333496);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.5004883);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.5688477);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.6665039);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.7983398);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,0.9777832);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.168213);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.380615);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.604004);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,1.867676);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,2.314453);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,2.724609);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,3.173828);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,3.701172);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,4.316406);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,4.980469);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,5.761719);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,6.699219);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,7.792969);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,9.101562);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,10.58594);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,12.30469);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,14.41406);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,16.95312);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,19.88281);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,23.51562);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,28.04688);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,33.28125);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,39.84375);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,47.96875);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_LimitExpectedCLs27 = new TH1F("Graph_LimitExpectedCLs27","Graph",100,0.48,4.32);
   Graph_LimitExpectedCLs27->SetMinimum(0.3746338);
   Graph_LimitExpectedCLs27->SetMaximum(52.724);
   Graph_LimitExpectedCLs27->SetDirectory(0);
   Graph_LimitExpectedCLs27->SetStats(0);
   Graph_LimitExpectedCLs27->SetLineStyle(0);
   Graph_LimitExpectedCLs27->SetMarkerStyle(20);
   Graph_LimitExpectedCLs27->GetXaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs27->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs27->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs27->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs27->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitExpectedCLs27->GetXaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs27->GetYaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs27->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs27->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs27->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs27->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitExpectedCLs27->GetYaxis()->SetTitleFont(42);
   Graph_LimitExpectedCLs27->GetZaxis()->SetLabelFont(42);
   Graph_LimitExpectedCLs27->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitExpectedCLs27->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitExpectedCLs27->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitExpectedCLs27->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitExpectedCLs27);
   
   grae->Draw("l");
   
   grae = new TGraphAsymmErrors(33);
   grae->SetName("LimitObservedCLs");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetLineWidth(3);
   grae->SetMarkerStyle(20);
   grae->SetPoint(0,0.8,0.709001);
   grae->SetPointError(0,0,0,0,0);
   grae->SetPoint(1,0.9,0.6635828);
   grae->SetPointError(1,0,0,0,0);
   grae->SetPoint(2,1,0.6224097);
   grae->SetPointError(2,0,0,0,0);
   grae->SetPoint(3,1.1,0.4993706);
   grae->SetPointError(3,0,0,0,0);
   grae->SetPoint(4,1.2,0.7099198);
   grae->SetPointError(4,0,0,0,0);
   grae->SetPoint(5,1.3,0.7037614);
   grae->SetPointError(5,0,0,0,0);
   grae->SetPoint(6,1.4,0.6247127);
   grae->SetPointError(6,0,0,0,0);
   grae->SetPoint(7,1.5,0.7957156);
   grae->SetPointError(7,0,0,0,0);
   grae->SetPoint(8,1.6,1.189479);
   grae->SetPointError(8,0,0,0,0);
   grae->SetPoint(9,1.7,1.304836);
   grae->SetPointError(9,0,0,0,0);
   grae->SetPoint(10,1.8,1.238198);
   grae->SetPointError(10,0,0,0,0);
   grae->SetPoint(11,1.9,1.68745);
   grae->SetPointError(11,0,0,0,0);
   grae->SetPoint(12,2,2.231974);
   grae->SetPointError(12,0,0,0,0);
   grae->SetPoint(13,2.1,2.414866);
   grae->SetPointError(13,0,0,0,0);
   grae->SetPoint(14,2.2,2.273645);
   grae->SetPointError(14,0,0,0,0);
   grae->SetPoint(15,2.3,2.14006);
   grae->SetPointError(15,0,0,0,0);
   grae->SetPoint(16,2.4,2.299448);
   grae->SetPointError(16,0,0,0,0);
   grae->SetPoint(17,2.5,3.028165);
   grae->SetPointError(17,0,0,0,0);
   grae->SetPoint(18,2.6,4.471311);
   grae->SetPointError(18,0,0,0,0);
   grae->SetPoint(19,2.7,7.161462);
   grae->SetPointError(19,0,0,0,0);
   grae->SetPoint(20,2.8,10.15419);
   grae->SetPointError(20,0,0,0,0);
   grae->SetPoint(21,2.9,12.15182);
   grae->SetPointError(21,0,0,0,0);
   grae->SetPoint(22,3,13.43039);
   grae->SetPointError(22,0,0,0,0);
   grae->SetPoint(23,3.1,15.00552);
   grae->SetPointError(23,0,0,0,0);
   grae->SetPoint(24,3.2,16.1555);
   grae->SetPointError(24,0,0,0,0);
   grae->SetPoint(25,3.3,15.90658);
   grae->SetPointError(25,0,0,0,0);
   grae->SetPoint(26,3.4,15.30664);
   grae->SetPointError(26,0,0,0,0);
   grae->SetPoint(27,3.5,16.25924);
   grae->SetPointError(27,0,0,0,0);
   grae->SetPoint(28,3.6,18.58541);
   grae->SetPointError(28,0,0,0,0);
   grae->SetPoint(29,3.7,22.03256);
   grae->SetPointError(29,0,0,0,0);
   grae->SetPoint(30,3.8,26.5786);
   grae->SetPointError(30,0,0,0,0);
   grae->SetPoint(31,3.9,32.34899);
   grae->SetPointError(31,0,0,0,0);
   grae->SetPoint(32,4,39.57038);
   grae->SetPointError(32,0,0,0,0);
   
   TH1F *Graph_LimitObservedCLs28 = new TH1F("Graph_LimitObservedCLs28","Graph",100,0.48,4.32);
   Graph_LimitObservedCLs28->SetMinimum(0.4494335);
   Graph_LimitObservedCLs28->SetMaximum(43.47748);
   Graph_LimitObservedCLs28->SetDirectory(0);
   Graph_LimitObservedCLs28->SetStats(0);
   Graph_LimitObservedCLs28->SetLineStyle(0);
   Graph_LimitObservedCLs28->SetMarkerStyle(20);
   Graph_LimitObservedCLs28->GetXaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs28->GetXaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs28->GetXaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs28->GetXaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs28->GetXaxis()->SetTitleOffset(0.9);
   Graph_LimitObservedCLs28->GetXaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs28->GetYaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs28->GetYaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs28->GetYaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs28->GetYaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs28->GetYaxis()->SetTitleOffset(1.25);
   Graph_LimitObservedCLs28->GetYaxis()->SetTitleFont(42);
   Graph_LimitObservedCLs28->GetZaxis()->SetLabelFont(42);
   Graph_LimitObservedCLs28->GetZaxis()->SetLabelOffset(0.007);
   Graph_LimitObservedCLs28->GetZaxis()->SetLabelSize(0.05);
   Graph_LimitObservedCLs28->GetZaxis()->SetTitleSize(0.06);
   Graph_LimitObservedCLs28->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_LimitObservedCLs28);
   
   grae->Draw("lp");
   
   TGraph *graph = new TGraph(33);
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
   graph->SetPoint(0,0.8,1);
   graph->SetPoint(1,0.9,1);
   graph->SetPoint(2,1,1);
   graph->SetPoint(3,1.1,1);
   graph->SetPoint(4,1.2,1);
   graph->SetPoint(5,1.3,1);
   graph->SetPoint(6,1.4,1);
   graph->SetPoint(7,1.5,1);
   graph->SetPoint(8,1.6,1);
   graph->SetPoint(9,1.7,1);
   graph->SetPoint(10,1.8,1);
   graph->SetPoint(11,1.9,1);
   graph->SetPoint(12,2,1);
   graph->SetPoint(13,2.1,1);
   graph->SetPoint(14,2.2,1);
   graph->SetPoint(15,2.3,1);
   graph->SetPoint(16,2.4,1);
   graph->SetPoint(17,2.5,1);
   graph->SetPoint(18,2.6,1);
   graph->SetPoint(19,2.7,1);
   graph->SetPoint(20,2.8,1);
   graph->SetPoint(21,2.9,1);
   graph->SetPoint(22,3,1);
   graph->SetPoint(23,3.1,1);
   graph->SetPoint(24,3.2,1);
   graph->SetPoint(25,3.3,1);
   graph->SetPoint(26,3.4,1);
   graph->SetPoint(27,3.5,1);
   graph->SetPoint(28,3.6,1);
   graph->SetPoint(29,3.7,1);
   graph->SetPoint(30,3.8,1);
   graph->SetPoint(31,3.9,1);
   graph->SetPoint(32,4,1);
   
   TH1F *Graph_CrossSectionTheo7 = new TH1F("Graph_CrossSectionTheo7","Graph",100,0.48,4.32);
   Graph_CrossSectionTheo7->SetMinimum(0.9);
   Graph_CrossSectionTheo7->SetMaximum(2.1);
   Graph_CrossSectionTheo7->SetDirectory(0);
   Graph_CrossSectionTheo7->SetStats(0);
   Graph_CrossSectionTheo7->SetLineStyle(0);
   Graph_CrossSectionTheo7->SetMarkerStyle(20);
   Graph_CrossSectionTheo7->GetXaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo7->GetXaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo7->GetXaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo7->GetXaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo7->GetXaxis()->SetTitleOffset(0.9);
   Graph_CrossSectionTheo7->GetXaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo7->GetYaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo7->GetYaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo7->GetYaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo7->GetYaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo7->GetYaxis()->SetTitleOffset(1.25);
   Graph_CrossSectionTheo7->GetYaxis()->SetTitleFont(42);
   Graph_CrossSectionTheo7->GetZaxis()->SetLabelFont(42);
   Graph_CrossSectionTheo7->GetZaxis()->SetLabelOffset(0.007);
   Graph_CrossSectionTheo7->GetZaxis()->SetLabelSize(0.05);
   Graph_CrossSectionTheo7->GetZaxis()->SetTitleSize(0.06);
   Graph_CrossSectionTheo7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_CrossSectionTheo7);
   
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
   entry=leg->AddEntry("CrossSectionTheo"," HVT_{B} (g_{V}=3)","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.93,0.944,"2.3 fb^{-1} (13 TeV)");
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
      tex = new TLatex(0.234,0.944,"Preliminary");
tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetTextSize(0.02548);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1F *hframe__20 = new TH1F("hframe__20","",1000,0.75,4.05);
   hframe__20->SetMinimum(0.01);
   hframe__20->SetMaximum(100);
   hframe__20->SetDirectory(0);
   hframe__20->SetStats(0);
   hframe__20->SetLineStyle(0);
   hframe__20->SetMarkerStyle(20);
   hframe__20->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__20->GetXaxis()->SetLabelFont(42);
   hframe__20->GetXaxis()->SetLabelOffset(0.007);
   hframe__20->GetXaxis()->SetLabelSize(0.035);
   hframe__20->GetXaxis()->SetTitleSize(0.045);
   hframe__20->GetXaxis()->SetTitleOffset(1.1);
   hframe__20->GetXaxis()->SetTitleFont(42);
   hframe__20->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__20->GetYaxis()->SetLabelFont(42);
   hframe__20->GetYaxis()->SetLabelOffset(0.007);
   hframe__20->GetYaxis()->SetLabelSize(0.035);
   hframe__20->GetYaxis()->SetTitleSize(0.045);
   hframe__20->GetYaxis()->SetTitleOffset(1.1);
   hframe__20->GetYaxis()->SetTitleFont(42);
   hframe__20->GetZaxis()->SetLabelFont(42);
   hframe__20->GetZaxis()->SetLabelOffset(0.007);
   hframe__20->GetZaxis()->SetLabelSize(0.05);
   hframe__20->GetZaxis()->SetTitleSize(0.06);
   hframe__20->GetZaxis()->SetTitleFont(42);
   hframe__20->Draw("sameaxis");
   
   TH1F *hframe__21 = new TH1F("hframe__21","",1000,0.75,4.05);
   hframe__21->SetMinimum(0.01);
   hframe__21->SetMaximum(100);
   hframe__21->SetDirectory(0);
   hframe__21->SetStats(0);
   hframe__21->SetLineStyle(0);
   hframe__21->SetMarkerStyle(20);
   hframe__21->GetXaxis()->SetTitle("M_{Z'} (TeV)");
   hframe__21->GetXaxis()->SetLabelFont(42);
   hframe__21->GetXaxis()->SetLabelOffset(0.007);
   hframe__21->GetXaxis()->SetLabelSize(0.035);
   hframe__21->GetXaxis()->SetTitleSize(0.045);
   hframe__21->GetXaxis()->SetTitleOffset(1.1);
   hframe__21->GetXaxis()->SetTitleFont(42);
   hframe__21->GetYaxis()->SetTitle("#sigma_{95%} #times BR_{Z' #rightarrow WW/ZH} (pb)");
   hframe__21->GetYaxis()->SetLabelFont(42);
   hframe__21->GetYaxis()->SetLabelOffset(0.007);
   hframe__21->GetYaxis()->SetLabelSize(0.035);
   hframe__21->GetYaxis()->SetTitleSize(0.045);
   hframe__21->GetYaxis()->SetTitleOffset(1.1);
   hframe__21->GetYaxis()->SetTitleFont(42);
   hframe__21->GetZaxis()->SetLabelFont(42);
   hframe__21->GetZaxis()->SetLabelOffset(0.007);
   hframe__21->GetZaxis()->SetLabelSize(0.05);
   hframe__21->GetZaxis()->SetTitleSize(0.06);
   hframe__21->GetZaxis()->SetTitleFont(42);
   hframe__21->Draw("sameaxig");
   
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
   entry=leg->AddEntry("CrossSectionTheo"," HVT_{B} (g_{V}=3)","L");

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
   text = pt->AddText("lvqq (13 TeV)");
   text->SetTextFont(62);
   pt->Draw();
   c_lim_Asymptotic->Modified();
   c_lim_Asymptotic->cd();
   c_lim_Asymptotic->SetSelected(c_lim_Asymptotic);
}
