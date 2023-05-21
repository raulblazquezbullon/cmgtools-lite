/* 
Script to launch TMVA training for lepton MVA used in Run2. Adapted to
be used in Run3 as well.

author: carlos.vico.villalba@cern.ch
*/

// Import libraries
#include <assert.h>
using namespace std;


// Main macro implementation
void plot_inputVars() {

  // To keep track of all samples used
  std::vector<TString> files_names_strings;
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_1.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_2.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_3.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_4.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_5.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_6.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_7.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_8.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_9.root");
  files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/0000/step0_10.root");
  //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305/ttsemilep_file1_train.root");
  
  TChain *tree = new TChain("Events");
  for (int i = 0; i < files_names_strings.size(); ++i){
    tree -> AddFile(files_names_strings.at(i));
    cout << "Adding file " << files_names_strings.at(i) << endl;
  }
  
  cout << "Chain has " << tree->GetEntries() << " events" << endl;

  // Define the preselection
  TCut lepton = "1";
  std::vector<TString> variables;
  /*
  // This is using nanoAOD variables
  

  variables.push_back("Muon_pt");
  variables.push_back("Muon_pt"); // pt
  variables.push_back("Muon_eta"); // eta
  variables.push_back("Muon_pfRelIso03_all"); // PF relative isolation
  variables.push_back("Muon_miniPFRelIso_chg"); // mini relative isolation - charged component
  variables.push_back("Muon_miniRelIsoNeutral"); // mini relative isolation - neutral component
  variables.push_back("Muon_jetNDauCharged"); // number of charged daughters of the closest jet
  variables.push_back("Muon_jetPtRelv2"); // relative momentum of the lepton with respect to the closest jet after subtracting the lepton
  variables.push_back("Muon_sip3d"); // 3D impact parameter significance wrt first PV
  variables.push_back("Muon_segmentComp"); // segment compatibility
  std::vector<TString> variables;
  */

  
  // This is using MiniAOD variables
  //lepton += "(Muon_LepGood_miniRelIsoNeutral + Muon_LepGood_miniRelIsoCharged) < 0.4 && Muon_LepGood_sip3d < 8";
  //lepton += "abs(Muon_LepGood_eta) < 2.4 && Muon_LepGood_pt > 5 ";
  //lepton += "abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1";
  lepton += "abs(Muon_eta) < 2.4 && Muon_pt > 5 && Muon_miniPFRelIso_all < 0.4 && Muon_sip3d < 8 && abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1"; // line 18 
  lepton += "Muon_looseId == 1"; 
  variables.push_back("Muon_LepGood_pt"); // pt
  

  variables.push_back("Muon_LepGood_eta"); // eta
  variables.push_back("Muon_LepGood_miniRelIsoCharged"); // mini relative isolation - charged component
  variables.push_back("Muon_LepGood_miniRelIsoNeutral"); // mini relative isolation - neutral component
  variables.push_back("Muon_LepGood_jetNDauChargedMVASel"); // number of charged daughters of the closest jet
  variables.push_back("Muon_LepGood_jetPtRelv2"); // relative momentum of the lepton with respect to the closest jet after subtracting the lepton
  variables.push_back("Muon_LepGood_sip3d"); // 3D impact parameter significance wrt first PV
  variables.push_back("Muon_LepGood_segmentComp"); // segment compatibility
  
  

  for (int ivar = 0; ivar < variables.size(); ivar++) {
    auto varname = variables.at(ivar);
    TCanvas * c = new TCanvas(varname, varname, 800, 800);
    c->Clear();

    std::cout << "Drawing variable: " << varname << std::endl;
    tree->Draw(varname + ">>signalHisto_" + varname, lepton + " Muon_genPartFlav == 1 || Muon_genPartFlav == 15", "hist");
    tree->Draw(varname + ">>bkgHisto_" + varname, lepton + " Muon_genPartFlav != 1 && Muon_genPartFlav != 15", "hist same");
    auto signalHisto = gDirectory->Get("signalHisto_" + varname);
    auto bkgHisto = (TH1F*)gDirectory->Get("bkgHisto_" + varname);
    bkgHisto->SetLineColor(kRed);

    signalHisto->Draw("hist");
    bkgHisto->Draw("hist same");

    c->SaveAs(varname + ".png");
    c->Clear();
  }
  
}
