void matchingCheck()
{

  gStyle->SetOptStat(1111111);

  TFile* zg = TFile::Open("/pool/ciencias/HeppyTrees/RA7/Prod23Jan/trees/ZGTo2LG.root", "READ");
  //TFile* zg = TFile::Open("/pool/ciencias/HeppyTrees/RA7/Prod23Jan/trees/DYJetsToLL_M50_LO.root", "READ");
  
  TTree* t = (TTree*) zg->Get("tree");
  
  TH2D* h       = new TH2D("h", "Only when LepGood_mcMatchId==22;mcPromptGamma;pdgId", 6, -1., 5., 32, -15., 16.);
  TH2D* siempre = new TH2D("siempre", "Any event;mcPromptGamma;pdgId", 6, -1., 5., 32, -15., 16.);
  TH2D* matchedGamma = new TH2D("matchedGamma", "Only when LepGood_mcMatchId==22;mcPromptGamma;mcUCSXMatchId", 6, -1., 5., 6, -1., 5.);
  TH2D* always = new TH2D("always", "Any event;mcPromptGamma;mcUCSXMatchId", 6, -1., 5., 6, -1., 5.);
  TH2D* mcmatchid = new TH2D("mcmatchid", "Only when mcPromptGamma==1;mcMatchId;mcUCSXMatchId", 6, -1., 5., 6, -1., 5.);

  TH1D* pdgId = new TH1D("pdgId", "A ver;pdgId;Events", 32, -15., 16.);
  TH1D* mcPromptGamma = new TH1D("mcPromptGamma", "A ver;mcPromptGamma;Events", 6, -1., 5.);

  t->Draw("LepGood_pdgId:LepGood_mcPromptGamma >> h", "LepGood_mcMatchId==22");
  t->Draw("LepGood_pdgId:LepGood_mcPromptGamma >> siempre");
  t->Draw("LepGood_mcUCSXMatchId:LepGood_mcPromptGamma >> matchedGamma", "LepGood_mcMatchId==22");
  t->Draw("LepGood_mcUCSXMatchId:LepGood_mcPromptGamma >> always");
  t->Draw("LepGood_mcUCSXMatchId:LepGood_mcMatchId >> mcmatchid", "LepGood_mcPromptGamma==1");
  t->Draw("LepGood_pdgId >> pdgId");
  t->Draw("LepGood_mcPromptGamma >> mcPromptGamma");
    
  TCanvas* c = new TCanvas("c", "c", 1000, 800);
  c->Divide(3,2);
  c->cd(1);
  h->Draw("col z");
  c->cd(2);
  siempre->Draw("col z");
  c->cd(3);
  always->Draw("col z");
  c->cd(4);
  matchedGamma->Draw("col z");
  c->cd(5);
  mcmatchid->Draw("col z");
  c->Print("recoleptons.png");

  // Now for gen particles
  TH2D* gen   = new TH2D("gen", "Any genLep;genLep pgdId;genLep_motherId", 47, -23., 23., 47, -23., 23.);
  TH2D* genel = new TH2D("genel", "Only electrons;genLep_motherId;genLep_grandmotherId", 47, -23., 23., 47, -23., 23.);
  TH2D* genstatus = new TH2D("genstatus", "Only electrons;genLep_motherId;genLep_status", 47, -23., 23., 47, -23., 23.);

  t->Draw("genLep_motherId:genLep_pdgId >> gen");
  t->Draw("genLep_grandmotherId:genLep_motherId >> genel", "abs(genLep_pdgId)==11");
  t->Draw("genLep_status:genLep_motherId >> genstatus", "abs(genLep_pdgId)==11");

  TCanvas* c2 = new TCanvas("c2", "c2", 800, 800);
  c2->Divide(2,2);
  c2->cd(1);
  gen->Draw("col z");
  c2->cd(2);
  genel->Draw("col z");
  c2->cd(3);
  genstatus->Draw("col z");
  c2->Print("genleptons.png");

  //~/www/conversions_matchingCheck/

  
}
