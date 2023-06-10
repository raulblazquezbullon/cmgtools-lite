/* 
Script to launch TMVA training for lepton MVA used in Run2. Adapted to
be used in Run3 as well.

author: carlos.vico.villalba@cern.ch
*/

// Import libraries
#include <assert.h>
using namespace std;


// Main macro implementation
void plot_inputVars(TString name) {
  gStyle->SetOptStat(false);

  // To keep track of all samples used
  std::vector<TString> files_names_strings_fileRun3;
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_1.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_2.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_3.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_4.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_5.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_6.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_7.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_8.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_9.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_10.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_11.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_12.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_13.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_14.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_15.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_16.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_17.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_18.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_19.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_20.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_21.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_22.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_23.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_24.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_25.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_26.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_27.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_28.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_29.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_30.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_31.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_32.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_33.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_34.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_35.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_36.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_37.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_38.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_39.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_40.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_41.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_42.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_43.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_44.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_45.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_46.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_47.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_48.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_49.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_50.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_51.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_52.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_53.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_54.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_55.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_56.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_57.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_58.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_59.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_60.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_61.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_62.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_63.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_64.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_65.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_66.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_67.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_68.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_69.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_70.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_71.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_72.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_73.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_74.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_75.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_76.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_77.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_78.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_79.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_80.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_81.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_82.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_83.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_84.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_85.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_86.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_87.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_88.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_89.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_90.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_91.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_92.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_93.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_94.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_95.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_96.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_97.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_98.root");
  files_names_strings_fileRun3.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_99.root");
  
  TString file_name_string_Run2 = "/beegfs/data/nanoAODv11/wz-run3/rereco_file_ttsemilep/08416C61-A8F8-0843-948C-5F03E08CEA8C.root";
  TString file_name_string_Run2_ul = "/beegfs/data/nanoAODv11/wz-run3/ul_file_ttsemilep/0520A050-AF68-EF43-AA5B-5AA77C74ED73.root";
  // Open tree for Run3 file
  TChain *treeRun3 = new TChain("Events");
  for (int i = 0; i < files_names_strings_fileRun3.size(); ++i){
    treeRun3 -> AddFile(files_names_strings_fileRun3.at(i));
    cout << "Adding file " << files_names_strings_fileRun3.at(i) << endl;
  }

  // Open tree for Run2 file
  TChain *treeRun2 = new TChain("Events");
  treeRun2->AddFile(file_name_string_Run2);

  TChain *treeRun2_ul = new TChain("Events");
  treeRun2_ul->AddFile(file_name_string_Run2_ul);
  cout << "Trees for Run2 has bene loaded" << endl;

  // Define the preselection
  TCut lepton = "1";

  TCut match_sig; 
  TCut match_bkg;
  if (name.Contains("el")) {
    lepton += "Electron_miniPFRelIso_all < 0.4 && Electron_sip3d < 8";
    lepton += "Electron_lostHits <= 1"; 
    lepton += "abs(Electron_dxy) < 0.05 && abs(Electron_dz) < 0.1";
    lepton += "Electron_pt > 10 && abs(Electron_eta) < 2.5";

    match_sig = " Electron_genPartFlav == 1 || Electron_genPartFlav == 15";
    match_bkg = " Electron_genPartFlav != 1 && Electron_genPartFlav != 15";
  }
  else {
    lepton += "Muon_miniPFRelIso_all < 0.4 && Muon_sip3d < 8 && abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1"; // line 18 
    lepton += "Muon_pt > 10 && abs(Muon_eta) < 2.4";
    lepton += "Muon_mediumId == 1";

    match_sig = " Muon_genPartFlav == 1 || Muon_genPartFlav == 15";
    match_bkg = " Muon_genPartFlav != 1 && Muon_genPartFlav != 15";
  }

  //////// Plotting block
  TString varname = name.Contains("el")? "Electron_mvaTTH" : "Muon_mvaTTH";
  TCanvas * c = new TCanvas(varname, "", 800, 800);
  c->Clear();
  c->SetLogy();
  
  TLegend* leg = new TLegend(0.55, 0.75, 0.85, 0.85);
  leg->SetNColumns(2);
  leg->SetLineWidth(0);
  
  std::cout << "Drawing variable: " << varname << std::endl;
  
  treeRun3->Draw(varname + ">>r3_signalHisto_" + varname, lepton + match_sig , "hist");
  treeRun3->Draw(varname + ">>r3_bkgHisto_" + varname, lepton + match_bkg, "hist same");
  treeRun2->Draw(varname + ">>r2_signalHisto_" + varname, lepton + match_sig, "hist");
  treeRun2->Draw(varname + ">>r2_bkgHisto_" + varname, lepton + match_bkg, "hist same");
  treeRun2_ul->Draw(varname + ">>r2_signalHisto_ul_" + varname, lepton + match_sig, "hist");
  treeRun2_ul->Draw(varname + ">>r2_bkgHisto_ul_" + varname, lepton + match_bkg, "hist same");


  auto signalHisto = (TH1F*)gDirectory->Get("r3_signalHisto_" + varname);
  auto bkgHisto = (TH1F*)gDirectory->Get("r3_bkgHisto_" + varname);
  auto signalHisto_r2 = (TH1F*)gDirectory->Get("r2_signalHisto_" + varname);
  auto bkgHisto_r2 = (TH1F*)gDirectory->Get("r2_bkgHisto_" + varname);
  auto signalHisto_r2_ul = (TH1F*)gDirectory->Get("r2_signalHisto_ul_" + varname);
  auto bkgHisto_r2_ul = (TH1F*)gDirectory->Get("r2_bkgHisto_ul_" + varname);
  

  // Histo cosmetics
  signalHisto->SetLineColor(kRed);
  signalHisto_r2->SetLineColor(kOrange);
  signalHisto_r2_ul->SetLineColor(kOrange+4);

  bkgHisto->SetLineColor(kBlue);
  bkgHisto_r2->SetLineColor(kGreen);
  bkgHisto_r2_ul->SetLineColor(kGreen+4);

  signalHisto->SetLineWidth(2);
  signalHisto_r2->SetLineWidth(2);
  signalHisto_r2_ul->SetLineWidth(2);

  bkgHisto->SetLineWidth(2);
  bkgHisto_r2->SetLineWidth(2);
  bkgHisto_r2_ul->SetLineWidth(2);

  // Axis cosmetics
  signalHisto->GetXaxis()->SetTitle(varname);
  signalHisto->GetXaxis()->SetRangeUser(-1, 1);
  signalHisto->GetYaxis()->SetTitle("Normalized events");

  // Normalize distributions
  signalHisto->Scale(1/signalHisto->Integral());
  bkgHisto->Scale(1/bkgHisto->Integral());
  signalHisto_r2->Scale(1/signalHisto_r2->Integral());
  bkgHisto_r2->Scale(1/bkgHisto_r2->Integral());
  signalHisto_r2_ul->Scale(1/signalHisto_r2_ul->Integral());
  bkgHisto_r2_ul->Scale(1/bkgHisto_r2_ul->Integral());

  // Nice legend
  leg->AddEntry(signalHisto, "Sig (2022)", "l");
  leg->AddEntry(bkgHisto, "Bkg (2022)", "l");
  leg->AddEntry(signalHisto_r2, "Sig (Legacy)", "l");
  leg->AddEntry(bkgHisto_r2, "Bkg (Legacy)", "l");
  leg->AddEntry(signalHisto_r2_ul, "Sig (UL)", "l");
  leg->AddEntry(bkgHisto_r2_ul, "Bkg (UL)", "l");

  // Finally draw the histograms
  signalHisto->Draw("hist");
  bkgHisto->Draw("hist same");
  signalHisto_r2->Draw("hist same");
  bkgHisto_r2->Draw("hist same");
  signalHisto_r2_ul->Draw("hist same");
  bkgHisto_r2_ul->Draw("hist same");
  leg->Draw("same");

  // Save histogram
  c->SaveAs(varname + ".png");
  c->Clear();
  // End of plotting block

  //////// Plotting block
  TString varname_2 = name.Contains("el")? "Electron_pt" : "Muon_pt";
  TCanvas * c_2 = new TCanvas(varname_2, "", 800, 800);
  c_2->Clear();
  
  TLegend* leg_2 = new TLegend(0.55, 0.75, 0.85, 0.85);
  leg_2->SetNColumns(2);
  leg_2->SetLineWidth(0);
  
  std::cout << "Drawing variable: " << varname_2 << std::endl;
  
  treeRun3->Draw(varname_2 + ">>r3_signalHisto_2" + varname_2, lepton + match_sig , "hist");
  treeRun3->Draw(varname_2 + ">>r3_bkgHisto_2" + varname_2, lepton + match_bkg, "hist same");
  treeRun2->Draw(varname_2 + ">>r2_signalHisto_2" + varname_2, lepton + match_sig, "hist");
  treeRun2->Draw(varname_2 + ">>r2_bkgHisto_2" + varname_2, lepton + match_bkg, "hist same");
  treeRun2_ul->Draw(varname_2 + ">>r2_signalHisto_ul_2" + varname_2, lepton + match_sig, "hist");
  treeRun2_ul->Draw(varname_2 + ">>r2_bkgHisto_ul_2" + varname_2, lepton + match_bkg, "hist same");


  auto signalHisto_2 = (TH1F*)gDirectory->Get("r3_signalHisto_2" + varname_2);
  auto bkgHisto_2 = (TH1F*)gDirectory->Get("r3_bkgHisto_2" + varname_2);
  auto signalHisto_r2_2 = (TH1F*)gDirectory->Get("r2_signalHisto_2" + varname_2);
  auto bkgHisto_r2_2 = (TH1F*)gDirectory->Get("r2_bkgHisto_2" + varname_2);
  auto signalHisto_r2_ul_2 = (TH1F*)gDirectory->Get("r2_signalHisto_ul_2" + varname_2);
  auto bkgHisto_r2_ul_2 = (TH1F*)gDirectory->Get("r2_bkgHisto_ul_2" + varname_2);
  

  // Histo cosmetics
  signalHisto_2->SetLineColor(kRed);
  signalHisto_r2_2->SetLineColor(kOrange);
  signalHisto_r2_ul_2->SetLineColor(kOrange+4);

  bkgHisto_2->SetLineColor(kBlue);
  bkgHisto_r2_2->SetLineColor(kGreen);
  bkgHisto_r2_2->SetLineColor(kGreen+4);

  signalHisto_2->SetLineWidth(2);
  signalHisto_r2_2->SetLineWidth(2);
  signalHisto_r2_ul_2->SetLineWidth(2);

  bkgHisto_2->SetLineWidth(2);
  bkgHisto_r2_2->SetLineWidth(2);
  bkgHisto_r2_2->SetLineWidth(2);

  // Axis cosmetics
  signalHisto_2->GetXaxis()->SetTitle(varname);
  signalHisto_2->GetYaxis()->SetTitle("Normalized events");

  // Normalize distributions
  signalHisto_2->Scale(1/signalHisto_2->Integral());
  bkgHisto_2->Scale(1/bkgHisto_2->Integral());
  signalHisto_r2_2->Scale(1/signalHisto_r2_2->Integral());
  bkgHisto_r2_2->Scale(1/bkgHisto_r2_2->Integral());
  signalHisto_r2_ul_2->Scale(1/signalHisto_r2_ul_2->Integral());
  bkgHisto_r2_ul_2->Scale(1/bkgHisto_r2_ul_2->Integral());

  // Nice legend
  leg_2->AddEntry(signalHisto_2, "Sig (2022)", "l");
  leg_2->AddEntry(bkgHisto_2, "Bkg (2022)", "l");
  leg_2->AddEntry(signalHisto_r2_2, "Sig (Legacy)", "l");
  leg_2->AddEntry(bkgHisto_r2_2, "Bkg (Legacy)", "l");
  leg_2->AddEntry(signalHisto_r2_ul_2, "Sig (UL)", "l");
  leg_2->AddEntry(bkgHisto_r2_ul_2, "Bkg (UL)", "l");

  // Finally draw the histograms
  signalHisto_2->Draw("hist");
  bkgHisto_2->Draw("hist same");
  signalHisto_r2_2->Draw("hist same");
  bkgHisto_r2_2->Draw("hist same");
  signalHisto_r2_ul_2->Draw("hist same");
  bkgHisto_r2_ul_2->Draw("hist same");
  leg_2->Draw("same");

  // Save histogram
  c_2->SaveAs(varname_2 + ".png");
  c_2->Clear();
  // End of plotting block

  //////// Plotting block
  TString varname_3 = name.Contains("el")? "Electron_eta" : "Muon_eta";
  TCanvas * c_3 = new TCanvas(varname_3, "", 800, 800);
  c_3->Clear();
  
  TLegend* leg_3 = new TLegend(0.55, 0.75, 0.85, 0.85);
  leg_3->SetNColumns(2);
  leg_3->SetLineWidth(0);
  
  std::cout << "Drawing variable: " << varname_3 << std::endl;
  
  treeRun3->Draw(varname_3 + ">>r3_signalHisto_3" + varname_3, lepton + match_sig , "hist");
  treeRun3->Draw(varname_3 + ">>r3_bkgHisto_3" + varname_3, lepton + match_bkg, "hist same");
  treeRun2->Draw(varname_3 + ">>r2_signalHisto_3" + varname_3, lepton + match_sig, "hist");
  treeRun2->Draw(varname_3 + ">>r2_bkgHisto_3" + varname_3, lepton + match_bkg, "hist same");
  treeRun2_ul->Draw(varname_3 + ">>r2_signalHisto_ul_3" + varname_3, lepton + match_sig, "hist");
  treeRun2_ul->Draw(varname_3 + ">>r2_bkgHisto_ul_3" + varname_3, lepton + match_bkg, "hist same");


  auto signalHisto_3 = (TH1F*)gDirectory->Get("r3_signalHisto_3" + varname_3);
  auto bkgHisto_3 = (TH1F*)gDirectory->Get("r3_bkgHisto_3" + varname_3);
  auto signalHisto_r2_3 = (TH1F*)gDirectory->Get("r2_signalHisto_3" + varname_3);
  auto bkgHisto_r2_3 = (TH1F*)gDirectory->Get("r2_bkgHisto_3" + varname_3);
  auto signalHisto_r2_ul_3 = (TH1F*)gDirectory->Get("r2_signalHisto_ul_3" + varname_3);
  auto bkgHisto_r2_ul_3 = (TH1F*)gDirectory->Get("r2_bkgHisto_ul_3" + varname_3);
  

  // Histo cosmetics
  signalHisto_3->SetLineColor(kRed);
  signalHisto_r2_3->SetLineColor(kOrange);
  signalHisto_r2_ul_3->SetLineColor(kOrange+4);

  bkgHisto_3->SetLineColor(kBlue);
  bkgHisto_r2_3->SetLineColor(kGreen);
  bkgHisto_r2_3->SetLineColor(kGreen+4);

  signalHisto_3->SetLineWidth(2);
  signalHisto_r2_3->SetLineWidth(2);
  signalHisto_r2_ul_3->SetLineWidth(2);

  bkgHisto_3->SetLineWidth(2);
  bkgHisto_r2_3->SetLineWidth(2);
  bkgHisto_r2_3->SetLineWidth(2);

  // Axis cosmetics
  signalHisto_3->GetXaxis()->SetTitle(varname);
  signalHisto_3->GetYaxis()->SetTitle("Normalized events");

  // Normalize distributions
  signalHisto_3->Scale(1/signalHisto_3->Integral());
  bkgHisto_3->Scale(1/bkgHisto_3->Integral());
  signalHisto_r2_3->Scale(1/signalHisto_r2_3->Integral());
  bkgHisto_r2_3->Scale(1/bkgHisto_r2_3->Integral());
  signalHisto_r2_ul_3->Scale(1/signalHisto_r2_ul_3->Integral());
  bkgHisto_r2_ul_3->Scale(1/bkgHisto_r2_ul_3->Integral());

  // Nice legend
  leg_3->AddEntry(signalHisto_3, "Sig (2022)", "l");
  leg_3->AddEntry(bkgHisto_3, "Bkg (2022)", "l");
  leg_3->AddEntry(signalHisto_r2_3, "Sig (Legacy)", "l");
  leg_3->AddEntry(bkgHisto_r2_3, "Bkg (Legacy)", "l");
  leg_3->AddEntry(signalHisto_r2_ul_3, "Sig (UL)", "l");
  leg_3->AddEntry(bkgHisto_r2_ul_3, "Bkg (UL)", "l");

  // Finally draw the histograms
  signalHisto_3->Draw("hist");
  bkgHisto_3->Draw("hist same");
  signalHisto_r2_3->Draw("hist same");
  bkgHisto_r2_3->Draw("hist same");
  signalHisto_r2_ul_3->Draw("hist same");
  bkgHisto_r2_ul_3->Draw("hist same");
  leg_3->Draw("same");

  // Save histogram
  c_3->SaveAs(varname_3 + ".png");
  c_3->Clear();
  // End of plotting block
  //////// Plotting block
  TString varname_4 = name.Contains("el")? "Electron_dxy" : "Muon_dxy";
  TCanvas * c_4 = new TCanvas(varname_4, "", 800, 800);
  c_4->Clear();
  
  TLegend* leg_4 = new TLegend(0.55, 0.75, 0.85, 0.85);
  leg_4->SetNColumns(2);
  leg_4->SetLineWidth(0);
  
  std::cout << "Drawing variable: " << varname_4 << std::endl;
  
  treeRun3->Draw(varname_4 + ">>r3_signalHisto_4" + varname_4, lepton + match_sig , "hist");
  treeRun3->Draw(varname_4 + ">>r3_bkgHisto_4" + varname_4, lepton + match_bkg, "hist same");
  treeRun2->Draw(varname_4 + ">>r2_signalHisto_4" + varname_4, lepton + match_sig, "hist");
  treeRun2->Draw(varname_4 + ">>r2_bkgHisto_4" + varname_4, lepton + match_bkg, "hist same");
  treeRun2_ul->Draw(varname_4 + ">>r2_signalHisto_ul_4" + varname_4, lepton + match_sig, "hist");
  treeRun2_ul->Draw(varname_4 + ">>r2_bkgHisto_ul_4" + varname_4, lepton + match_bkg, "hist same");


  auto signalHisto_4 = (TH1F*)gDirectory->Get("r3_signalHisto_4" + varname_4);
  auto bkgHisto_4 = (TH1F*)gDirectory->Get("r3_bkgHisto_4" + varname_4);
  auto signalHisto_r2_4 = (TH1F*)gDirectory->Get("r2_signalHisto_4" + varname_4);
  auto bkgHisto_r2_4 = (TH1F*)gDirectory->Get("r2_bkgHisto_4" + varname_4);
  auto signalHisto_r2_ul_4 = (TH1F*)gDirectory->Get("r2_signalHisto_ul_4" + varname_4);
  auto bkgHisto_r2_ul_4 = (TH1F*)gDirectory->Get("r2_bkgHisto_ul_4" + varname_4);
  

  // Histo cosmetics
  signalHisto_4->SetLineColor(kRed);
  signalHisto_r2_4->SetLineColor(kOrange);
  signalHisto_r2_ul_4->SetLineColor(kOrange+4);

  bkgHisto_4->SetLineColor(kBlue);
  bkgHisto_r2_4->SetLineColor(kGreen);
  bkgHisto_r2_4->SetLineColor(kGreen+4);

  signalHisto_4->SetLineWidth(2);
  signalHisto_r2_4->SetLineWidth(2);
  signalHisto_r2_ul_4->SetLineWidth(2);

  bkgHisto_4->SetLineWidth(2);
  bkgHisto_r2_4->SetLineWidth(2);
  bkgHisto_r2_4->SetLineWidth(2);

  // Axis cosmetics
  signalHisto_4->GetXaxis()->SetTitle(varname);
  signalHisto_4->GetYaxis()->SetTitle("Normalized events");

  // Normalize distributions
  signalHisto_4->Scale(1/signalHisto_4->Integral());
  bkgHisto_4->Scale(1/bkgHisto_4->Integral());
  signalHisto_r2_4->Scale(1/signalHisto_r2_4->Integral());
  bkgHisto_r2_4->Scale(1/bkgHisto_r2_4->Integral());
  signalHisto_r2_ul_4->Scale(1/signalHisto_r2_ul_4->Integral());
  bkgHisto_r2_ul_4->Scale(1/bkgHisto_r2_ul_4->Integral());

  // Nice legend
  leg_4->AddEntry(signalHisto_4, "Sig (2022)", "l");
  leg_4->AddEntry(bkgHisto_4, "Bkg (2022)", "l");
  leg_4->AddEntry(signalHisto_r2_4, "Sig (Legacy)", "l");
  leg_4->AddEntry(bkgHisto_r2_4, "Bkg (Legacy)", "l");
  leg_4->AddEntry(signalHisto_r2_ul_4, "Sig (UL)", "l");
  leg_4->AddEntry(bkgHisto_r2_ul_4, "Bkg (UL)", "l");

  // Finally draw the histograms
  signalHisto_4->Draw("hist");
  bkgHisto_4->Draw("hist same");
  signalHisto_r2_4->Draw("hist same");
  bkgHisto_r2_4->Draw("hist same");
  signalHisto_r2_ul_4->Draw("hist same");
  bkgHisto_r2_ul_4->Draw("hist same");
  leg_4->Draw("same");

  // Save histogram
  c_4->SaveAs(varname_4 + ".png");
  c_4->Clear();

  // Save histogram
  c_4->SaveAs(varname_4 + ".png");
  c_4->Clear();
  // End of plotting block
  //////// Plotting block
  TString varname_5 = name.Contains("el")? "Electron_dz" : "Muon_dz";
  TCanvas * c_5 = new TCanvas(varname_5, "", 800, 800);
  c_5->Clear();
  
  TLegend* leg_5 = new TLegend(0.55, 0.75, 0.85, 0.85);
  leg_5->SetNColumns(2);
  leg_5->SetLineWidth(0);
  
  std::cout << "Drawing variable: " << varname_5 << std::endl;
  
  treeRun3->Draw(varname_5 + ">>r3_signalHisto_5" + varname_5, lepton + match_sig , "hist");
  treeRun3->Draw(varname_5 + ">>r3_bkgHisto_5" + varname_5, lepton + match_bkg, "hist same");
  treeRun2->Draw(varname_5 + ">>r2_signalHisto_5" + varname_5, lepton + match_sig, "hist");
  treeRun2->Draw(varname_5 + ">>r2_bkgHisto_5" + varname_5, lepton + match_bkg, "hist same");
  treeRun2_ul->Draw(varname_5 + ">>r2_signalHisto_ul_5" + varname_5, lepton + match_sig, "hist");
  treeRun2_ul->Draw(varname_5 + ">>r2_bkgHisto_ul_5" + varname_5, lepton + match_bkg, "hist same");


  auto signalHisto_5 = (TH1F*)gDirectory->Get("r3_signalHisto_5" + varname_5);
  auto bkgHisto_5 = (TH1F*)gDirectory->Get("r3_bkgHisto_5" + varname_5);
  auto signalHisto_r2_5 = (TH1F*)gDirectory->Get("r2_signalHisto_5" + varname_5);
  auto bkgHisto_r2_5 = (TH1F*)gDirectory->Get("r2_bkgHisto_5" + varname_5);
  auto signalHisto_r2_ul_5 = (TH1F*)gDirectory->Get("r2_signalHisto_ul_5" + varname_5);
  auto bkgHisto_r2_ul_5 = (TH1F*)gDirectory->Get("r2_bkgHisto_ul_5" + varname_5);
  

  // Histo cosmetics
  signalHisto_5->SetLineColor(kRed);
  signalHisto_r2_5->SetLineColor(kOrange);
  signalHisto_r2_ul_5->SetLineColor(kOrange+4);

  bkgHisto_5->SetLineColor(kBlue);
  bkgHisto_r2_5->SetLineColor(kGreen);
  bkgHisto_r2_5->SetLineColor(kGreen+4);

  signalHisto_5->SetLineWidth(2);
  signalHisto_r2_5->SetLineWidth(2);
  signalHisto_r2_ul_5->SetLineWidth(2);

  bkgHisto_5->SetLineWidth(2);
  bkgHisto_r2_5->SetLineWidth(2);
  bkgHisto_r2_5->SetLineWidth(2);

  // Axis cosmetics
  signalHisto_5->GetXaxis()->SetTitle(varname);
  signalHisto_5->GetYaxis()->SetTitle("Normalized events");

  // Normalize distributions
  signalHisto_5->Scale(1/signalHisto_5->Integral());
  bkgHisto_5->Scale(1/bkgHisto_5->Integral());
  signalHisto_r2_5->Scale(1/signalHisto_r2_5->Integral());
  bkgHisto_r2_5->Scale(1/bkgHisto_r2_5->Integral());
  signalHisto_r2_ul_5->Scale(1/signalHisto_r2_ul_5->Integral());
  bkgHisto_r2_ul_5->Scale(1/bkgHisto_r2_ul_5->Integral());

  // Nice legend
  leg_5->AddEntry(signalHisto_5, "Sig (2022)", "l");
  leg_5->AddEntry(bkgHisto_5, "Bkg (2022)", "l");
  leg_5->AddEntry(signalHisto_r2_5, "Sig (Legacy)", "l");
  leg_5->AddEntry(bkgHisto_r2_5, "Bkg (Legacy)", "l");
  leg_5->AddEntry(signalHisto_r2_ul_5, "Sig (UL)", "l");
  leg_5->AddEntry(bkgHisto_r2_ul_5, "Bkg (UL)", "l");

  // Finally draw the histograms
  signalHisto_5->Draw("hist");
  bkgHisto_5->Draw("hist same");
  signalHisto_r2_5->Draw("hist same");
  bkgHisto_r2_5->Draw("hist same");
  signalHisto_r2_ul_5->Draw("hist same");
  bkgHisto_r2_ul_5->Draw("hist same");
  leg_5->Draw("same");

  // Save histogram
  c_5->SaveAs(varname_5 + ".png");
  c_5->Clear();


  /*
    std::vector<TString> variables_common;
    std::vector<TString> variables_stdNano;
    std::vector<TString> variables_customNano;
    if (name.Contains("el")) {
    lepton += "Electron_miniPFRelIso_all < 0.4 && Electron_sip3d < 8";
    lepton += "Electron_lostHits <= 1"; 
    lepton += "abs(Electron_dxy) < 0.05 && abs(Electron_dz) < 0.1";
    lepton += "Electron_pt > 10 && abs(Electron_eta) < 2.5";

    // Spectators
    variables_common.push_back("event");
    variables_common.push_back("Electron_mvaTTH");
    variables_common.push_back("Electron_miniPFRelIso_all"); // relative isolation
    variables_common.push_back("Electron_genPartFlav");
    variables_common.push_back("nElectron");
    variables_common.push_back("Electron_dxy");
    variables_common.push_back("Electron_dz");
      
    // Use MiniAOD-like variables
    variables_customNano.push_back("Electron_LepGood_pt");
    variables_customNano.push_back("Electron_LepGood_eta");
    variables_customNano.push_back("Electron_LepGood_miniRelIsoNeutral");
    variables_customNano.push_back("Electron_LepGood_jetDF");
    variables_customNano.push_back("Electron_LepGood_sip3d");

    variables_stdNano.push_back("Electron_pt");
    variables_stdNano.push_back("Electron_eta");
    variables_stdNano.push_back("Electron_miniPFRelIso_all - Electron_miniPFRelIso_chg");
    variables_stdNano.push_back("Electron_jetIdx > -1 ? Jet_btagDeepFlavB[Electron_jetIdx] : 0");
    variables_stdNano.push_back("Electron_sip3d"); 
  }
  else {
    lepton += "Muon_miniPFRelIso_all < 0.4 && Muon_sip3d < 8 && abs(Muon_dxy) < 0.05 && abs(Muon_dz) < 0.1"; // line 18 
    lepton += "Muon_pt > 10 && abs(Muon_eta) < 2.4";
    lepton += "Muon_mediumId == 1";
    
    // Spectators
    variables_common.push_back("event");
    variables_common.push_back("Muon_mvaTTH");
    variables_common.push_back("Muon_miniPFRelIso_all"); // relative isolation
    variables_common.push_back("Muon_genPartFlav");
    variables_common.push_back("Muon_dxy");
    variables_common.push_back("Muon_dz");
      
    // Use MiniAOD-like variables
    variables_customNano.push_back("Muon_LepGood_pt");
    variables_customNano.push_back("Muon_LepGood_eta");
    variables_customNano.push_back("Muon_LepGood_miniRelIsoNeutral");
    variables_customNano.push_back("Muon_LepGood_jetDF");
    variables_customNano.push_back("Muon_LepGood_sip3d");
    variables_customNano.push_back("Muon_LepGood_segmentComp");

    variables_stdNano.push_back("Muon_pt");
    variables_stdNano.push_back("Muon_eta");
    variables_stdNano.push_back("Muon_miniPFRelIso_all - Muon_miniPFRelIso_chg");
    variables_stdNano.push_back("Muon_jetIdx > -1 ? Jet_btagDeepFlavB[Muon_jetIdx] : 0");
    variables_stdNano.push_back("Muon_sip3d");
    variables_stdNano.push_back("Muon_segmentComp");
  }


  for (int ivar = 0; ivar < variables_common.size(); ivar++) {
    auto varname = variables_common.at(ivar);
    TCanvas * c = new TCanvas(varname, "", 800, 800);
    c->Clear();
    TLegend* leg = new TLegend(0.55, 0.75, 0.85, 0.85);
    leg->SetNColumns(2);
    leg->SetLineWidth(0);
    if (varname != "Electron_nElectron" && varname != "Electron_genPartFlav"){
        c->SetLogy();
    }
    std::cout << "Drawing variable: " << varname << std::endl;

    
    treeRun3->Draw(varname + ">>r3_signalHisto_" + varname, lepton + match_sig , "hist");
    treeRun3->Draw(varname + ">>r3_bkgHisto_" + varname, lepton + match_bkg, "hist same");
    treeRun2->Draw(varname + ">>r2_signalHisto_" + varname, lepton + match_sig, "hist");
    treeRun2->Draw(varname + ">>r2_bkgHisto_" + varname, lepton + match_bkg, "hist same");

    auto signalHisto = (TH1F*)gDirectory->Get("r3_signalHisto_" + varname);
    auto bkgHisto = (TH1F*)gDirectory->Get("r3_bkgHisto_" + varname);
    auto signalHisto_r2 = (TH1F*)gDirectory->Get("r2_signalHisto_" + varname);
    auto bkgHisto_r2 = (TH1F*)gDirectory->Get("r2_bkgHisto_" + varname);
    
    signalHisto->SetLineColor(kRed);
    bkgHisto->SetLineColor(kGreen);
    
    signalHisto->GetXaxis()->SetTitle(varname);
    signalHisto->GetYaxis()->SetTitle("Normalized events");
    signalHisto_r2->SetLineColor(kBlue);
    bkgHisto_r2->SetLineColor(kMagenta);

    signalHisto->Scale(1/signalHisto->Integral());
    bkgHisto->Scale(1/bkgHisto->Integral());
    signalHisto_r2->Scale(1/signalHisto_r2->Integral());
    bkgHisto_r2->Scale(1/bkgHisto_r2->Integral());

    leg->AddEntry(signalHisto, "Signal (2022)", "l");
    leg->AddEntry(bkgHisto, "Bkg (2022)", "l");
    leg->AddEntry(signalHisto_r2, "Signal (2018UL)", "l");
    leg->AddEntry(bkgHisto_r2, "Bkg (2018UL)", "l");

    // Finally draw the histograms
    signalHisto->Draw("hist");
    bkgHisto->Draw("hist same");
    signalHisto_r2->Draw("hist same");
    bkgHisto_r2->Draw("hist same");
    leg->Draw("same");

    c->SaveAs(varname + ".png");
    c->Clear();
    delete leg;
  }


  for (int ivar = 0; ivar < variables_stdNano.size(); ivar++) {
    auto varname = variables_stdNano.at(ivar);
    auto varname_custom = variables_stdNano.at(ivar);

    TCanvas * c = new TCanvas(varname, "", 800, 800);
    c->Clear();
    TLegend* leg1 = new TLegend(0.55, 0.75, 0.85, 0.85);
    leg1->SetNColumns(2);
    leg1->SetLineWidth(0);

    if (varname != "nElectron" && varname != "Electron_genPartFlav"){
        c->SetLogy();
    }
    
    std::cout << "Drawing variable: " << varname << std::endl;
    treeRun3->Draw(varname_custom + ">>other_r3_signalHisto_" + varname_custom, lepton +  match_sig, "hist");
    treeRun3->Draw(varname_custom + ">>other_r3_bkgHisto_" + varname_custom, lepton + match_bkg, "hist same");
    treeRun2->Draw(varname + ">>other_r2_signalHisto_" + varname, lepton + match_sig, "hist");
    treeRun2->Draw(varname + ">>other_r2_bkgHisto_" + varname, lepton + match_bkg, "hist same");

    auto other_signalHisto = (TH1F*)gDirectory->Get("other_r3_signalHisto_" + varname_custom);
    auto other_bkgHisto = (TH1F*)gDirectory->Get("other_r3_bkgHisto_" + varname_custom);
    auto other_signalHisto_r2 = (TH1F*)gDirectory->Get("other_r2_signalHisto_" + varname);
    auto other_bkgHisto_r2 = (TH1F*)gDirectory->Get("other_r2_bkgHisto_" + varname);
    
    other_signalHisto->SetLineColor(kRed);
    other_bkgHisto->SetLineColor(kGreen);
    
    other_signalHisto->GetXaxis()->SetTitle(varname);
    other_signalHisto->GetYaxis()->SetTitle("Normalized events");
    other_signalHisto_r2->SetLineColor(kBlue);
    other_bkgHisto_r2->SetLineColor(kMagenta);

    // Normalize
    other_signalHisto->Scale(1/other_signalHisto->Integral());
    other_signalHisto->GetXaxis()->SetTitle(varname_custom);
    other_signalHisto->GetYaxis()->SetTitle("Normalized events");

    other_bkgHisto->Scale(1/other_bkgHisto->Integral());
    other_signalHisto_r2->Scale(1/other_signalHisto_r2->Integral());
    other_bkgHisto_r2->Scale(1/other_bkgHisto_r2->Integral());

    leg1->AddEntry(other_signalHisto, "Signal (2022)", "l");
    leg1->AddEntry(other_bkgHisto, "Bkg (2022)", "l");
    leg1->AddEntry(other_signalHisto_r2, "Signal (2018UL)", "l");
    leg1->AddEntry(other_bkgHisto_r2, "Bkg (2018UL)", "l");

    // Finally draw the histograms
    other_signalHisto->Draw("hist");
    other_bkgHisto->Draw("hist same");
    other_signalHisto_r2->Draw("hist same");
    other_bkgHisto_r2->Draw("hist same");
    leg1->Draw("same");

    c->SaveAs(varname + ".png");
    c->Clear();
    delete leg1;
  }
  */
  
}
