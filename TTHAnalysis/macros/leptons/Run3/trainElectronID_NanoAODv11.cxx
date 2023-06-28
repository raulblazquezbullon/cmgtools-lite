/* 
Script to launch TMVA training for lepton MVA used in Run2. Adapted to
be used in Run3 as well.

author: carlos.vico.villalba@cern.ch
*/

// Import libraries
#include <assert.h>
using namespace std;


// Main macro implementation
void trainElectronID_NanoAODv11(TString folder, TString name, TString year) {

  // To keep track of all samples used
  std::vector<TString> files_names_strings;
  if (year == "2022EE"){
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_1.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_2.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_3.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_4.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_5.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_6.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_7.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_8.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_9.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_10.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_11.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_12.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_13.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_14.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_15.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_16.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_17.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_18.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_19.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_20.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_21.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_22.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_23.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_24.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_25.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_26.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_27.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_28.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_29.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_30.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_31.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_32.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_33.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_34.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_35.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_36.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_37.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_38.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_39.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_40.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_41.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_42.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_43.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_44.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_45.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_46.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_47.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_48.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_49.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_50.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_51.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_52.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_53.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_54.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_55.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_56.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_57.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_58.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_59.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_60.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_61.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_62.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_63.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_64.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_65.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_66.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_67.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_68.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_69.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_70.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_71.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_72.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_73.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_74.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_75.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_76.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_77.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_78.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_79.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_80.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_81.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_82.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_83.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_84.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_85.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_86.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_87.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_88.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_89.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_90.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_91.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_92.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_93.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_94.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_95.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_96.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_97.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_98.root");
    files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_99.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_100.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_101.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_102.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_103.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_104.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_105.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_106.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_107.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_108.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_109.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_110.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_111.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_112.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_113.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_114.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_115.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_116.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_117.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_118.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_119.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_120.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_121.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_122.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_123.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_124.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_125.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_126.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_127.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_128.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_129.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_130.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_131.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_132.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_133.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_134.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_135.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_136.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_137.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_138.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_139.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_140.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_141.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_142.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_143.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_144.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_145.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_146.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_147.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_148.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_149.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_150.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_151.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_152.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_153.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_154.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_155.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_156.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_157.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_158.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_159.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_160.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_161.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_162.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_163.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_164.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_165.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_166.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_167.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_168.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_169.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_170.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_171.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_172.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_173.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_174.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_175.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_176.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_177.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_178.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_179.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_180.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_181.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_182.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_183.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_184.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_185.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_186.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_187.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_188.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_189.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_190.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_191.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_192.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_193.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_194.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_195.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_196.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_197.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_198.root");
    //files_names_strings.push_back("/beegfs/data/nanoAODv11/wz-run3/TTtoLNu2Q_TuneCP5_13p6TeV_powheg-pythia8_Run3Summer22EE_NanoAOD/Run3Summer22EENanoAODv11/230502_170305//0000/step0_199.root");
  }
  else {
    cout << "Please enter a valid era" << endl; 
    return;
  }

  // Chain signal and background samples (in this case we just have the one :D )
  TChain *dSig1 = new TChain("Events");
  TChain *dBg1  = new TChain("Events");
  for (int i = 0; i < files_names_strings.size(); ++i){
    dSig1 -> AddFile(files_names_strings.at(i));
    dBg1  -> AddFile(files_names_strings.at(i));
    cout << "File " << i << " added" << endl;
  }
  
  // Prepare output 
  TString mkdir = "mkdir -p " + folder;
  gSystem -> Exec(mkdir);
  TFile *fOut = new TFile(folder + "/" + name + ".root", "RECREATE");
 
  // Now prepare training
  TString factory_conf = "!V:!Color:Transformations=I";

  TMVA::Factory    *factory    = new TMVA::Factory(name, fOut, factory_conf.Data());
  TMVA::DataLoader *dataloader = new TMVA::DataLoader("dataset");


  // This will be used to cut on the lepton properties for the training
  TCut lepton = "1";

  // Spectators
  dataloader->AddSpectator("event",'D');
  dataloader->AddSpectator("Electron_mvaTTH",'D');
  dataloader->AddSpectator("Electron_miniPFRelIso_all",'D'); // relative isolation
  dataloader->AddSpectator("Electron_mvaNoIso_Fall17V2_WPL",'D');
  dataloader->AddSpectator("Electron_lostHits",'D');
  dataloader->AddSpectator("Electron_genPartFlav",'D');
  dataloader->AddSpectator("Electron_dxy",'D');
  dataloader->AddSpectator("Electron_dz",'D');
  
  // Training variables for Electrons
  // Use MiniAOD-like variables
  dataloader->AddVariable("Electron_LepGood_pt",'D');
  dataloader->AddVariable("Electron_LepGood_eta",'D');
  dataloader->AddVariable("Electron_LepGood_miniRelIsoCharged",'D'); 
  dataloader->AddVariable("Electron_LepGood_miniRelIsoNeutral", 'D');
  dataloader->AddVariable("Electron_LepGood_jetNDauChargedMVASel",'D'); 
  dataloader->AddVariable("Electron_LepGood_jetPtRelv2", 'D'); 
  dataloader->AddVariable("Electron_LepGood_jetPtRatio", 'D'); 
  dataloader->AddVariable("Electron_LepGood_jetDF", 'D');
  dataloader->AddVariable("Electron_LepGood_sip3d", 'D'); 
  dataloader->AddVariable("Electron_LepGood_dxy",'D'); 
  dataloader->AddVariable("Electron_LepGood_dz",'D'); 
  dataloader->AddVariable("Electron_LepGood_mvaFall17V2noIso", 'D');  
  
  lepton += "Electron_miniPFRelIso_all < 0.4 && Electron_sip3d < 8";
  lepton += "Electron_lostHits <= 1"; 
  lepton += "abs(Electron_dxy) < 0.05 && abs(Electron_dz) < 0.1"; 

  if (name.Contains("tth")){
    lepton += "abs(Electron_eta) < 2.5 && Electron_pt > 5 ";
    lepton += "Electron_mvaNoIso_Fall17V2_WPL == 1";  
  }
  else if (name.Contains("ttw")){
    lepton += "Electron_pt > 10 && abs(Electron_eta) < 2.5";
  }
  else if (name.Contains("wz")){
    lepton += "Electron_pt > 10 && abs(Electron_eta) < 2.5";
    // Take care of the leak veto region in postEE
    lepton += "(Electron_eta > 1.56 && int(Electron_seediEtaOriX) < 45 && Electron_seediPhiOriY > 72)? 0 : 1";
  }


  double wSig = 1.0, wBkg = 1.0;
  dataloader->AddSignalTree(dSig1, wSig);
  dataloader->AddBackgroundTree(dBg1, wBkg);


  // Apply preselection and divide the sample in signal and background
  dataloader->PrepareTrainingAndTestTree(lepton+" Electron_genPartFlav == 1 || Electron_genPartFlav == 15", lepton+" Electron_genPartFlav != 1 && Electron_genPartFlav != 15", "");
  

  TString BDTGopt  = "!H:!V:NTrees=500:BoostType=Grad:Shrinkage=0.10:!UseBaggedGrad:nCuts=2000:UseNvars=9:MaxDepth=8";
  // TString BDTGopt2 = "!H:!V:NTrees=1000:BoostType=Grad:Shrinkage=0.05:!UseBaggedGrad:nCuts=2000:UseNvars=7:MaxDepth=4"; // v1
  TString BDTGopt2 = "!H:!V:NTrees=2000:BoostType=Grad:Shrinkage=0.05:!UseBaggedGrad:nCuts=2000:UseNvars=9:MaxDepth=4"; // v2
  BDTGopt += ":CreateMVAPdfs"; // Create Rarity distribution
  factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTG", BDTGopt);
  factory->BookMethod(dataloader, TMVA::Types::kBDT, "BDTG2", BDTGopt2);
  
  factory->TrainAllMethods();
  factory->TestAllMethods();
  factory->EvaluateAllMethods();
  
  fOut->Close();
}
