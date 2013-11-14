// #############################################################################
//
//    _      _         __  __ _       _                        _           _     
//   | |    (_)       |  \/  (_)     (_)     /\               | |         (_)    
//   | |     _ _ __   | \  / |_ _ __  _     /  \   _ __   __ _| |_   _ ___ _ ___ 
//   | |    | | '_ \  | |\/| | | '_ \| |   / /\ \ | '_ \ / _` | | | | / __| / __|
//   | |____| | |_) | | |  | | | | | | |  / ____ \| | | | (_| | | |_| \__ \ \__ \
//   |______|_| .__/  |_|  |_|_|_| |_|_| /_/    \_\_| |_|\__,_|_|\__, |___/_|___/
//            | |                                                 __/ |          
//            |_|                                                |___/           
//                                                                              
// #############################################################################
//                                                                              
//   LipMiniAnalysis                            \      | | / |  /    |   |  ||  
//                                               '-___-+-+'  |_/     |   |  |   
//   by Antonio Onofre                          `--___-++--^'|       |   | /|   
//      (antonio.onofre@cern.ch)                       ||    |       |   |' |   
//   date: 23.Nov.2012                          --___  ||    |       | _/|  |   
//                                              ==---:-++___ |  ___--+'  |  |   
//                                                '--_'|'---'+--___  |   |  |   
//                                                    '+-_   |     '-+__ |  |   
//                                              ._.          ._.       ._____   
//                                              | |          | |       | ___ \  
//                                              | |_.        | |       | .___/  
//                                              |___|        |_|       |_|
//      
//   Note:      this code was built from LipCbrAnalysis developed by                                                       
//              Nuno Castro   (nfcastro@lipc.fis.uc.pt)  and 
//              Filipe Veloso (fveloso@lipc.fis.uc.pt)             
//
//
// #############################################################################
//
//  file: Ntu.cxx
//
//  purpose: this is the code of the Ntu class
//
//  author: fveloso
//  first version: 18.nov.2006
//
//  last change: 04.jul.2007
//  by: fveloso
//
// #############################################################################

#define Ntu_cxx
#include "Ntu.h"

// #############################################################################
Ntu::Ntu() {
// #############################################################################
}

// #############################################################################
Ntu::~Ntu() {
// #############################################################################

   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

// #############################################################################
Int_t Ntu::GetEntry(Long64_t entry) {
// #############################################################################

// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}

// #############################################################################
Long64_t Ntu::LoadTree(Long64_t entry) {
// #############################################################################

// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (!fChain->InheritsFrom(TChain::Class()))  return centry;
   TChain *chain = (TChain*)fChain;
   if (chain->GetTreeNumber() != fCurrent) {
      fCurrent = chain->GetTreeNumber();
      Notify();
   }
   return centry;
}

// #############################################################################
void Ntu::Init() {
// #############################################################################

}

// #############################################################################
Bool_t Ntu::Notify() {
// #############################################################################
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normaly not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

// #############################################################################
void Ntu::Input(char *file) {
// #############################################################################
//
//  purpose: open nTuple files
//
//  authors: fveloso
//  first version: 21.fev.2007
//
//  last change: 21.fev.2007
//  by: fveloso
//
// #############################################################################

  tree->Add(file);

}

// #############################################################################
int Ntu::Isub() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::LumiBlock() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::RunNumber() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::EveNumber() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::TruthEleNumber() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::TruthMuonNumber() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::ElectronTrigger() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::MuonTrigger() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::Cosmic() {
// #############################################################################
  
  return 0;
 
}

// #############################################################################
int Ntu::HforFlag() {
// #############################################################################
  
  return 0;
 
}

// #############################################################################
double Ntu::Ht_Mini() {
// #############################################################################
  
  return 0;
 
}

// #############################################################################
double Ntu::massInv_LL_Mini() {
// #############################################################################
  
  return 0;
 
}

// #############################################################################
int Ntu::jet_n_Mini() {
// #############################################################################
  
  return 0;
 
}

// #############################################################################
int Ntu::EleMuoOverlap() {
// #############################################################################

  return 0;

}
// #############################################################################
int Ntu::JetCleanning() {
// #############################################################################

  return 0;

}

// #############################################################################
int Ntu::GoodRL() {
// #############################################################################

  return 0;

}


// #############################################################################
double Ntu::MissPx() {
// #############################################################################

  return 0.;

}

// #############################################################################
double Ntu::MissPy() {
// #############################################################################

  return 0.;

}

// #############################################################################
double Ntu::MissPt() {
// #############################################################################

  return 0.;

}

// #############################################################################
double Ntu::Weight() {
// #############################################################################

  return 0.;

}


// #############################################################################
double Ntu::Sphericity() {
// #############################################################################

  return -999.;

}

// #############################################################################
double Ntu::Aplanarity() {
// #############################################################################

  return -999.;

}
// #############################################################################
double Ntu::Planarity() {
// #############################################################################

  return -999.;

}

// #############################################################################
double Ntu::GeV() {
// #############################################################################

  return 0.;

}

// #############################################################################
void Ntu::FillVectors(
  std::vector<TLorentzVectorWFlags>& 	i_TruthVec,
  std::vector<TLorentzVectorWFlags>& 	i_TauVec,
  std::vector<TLorentzVectorWFlags>& 	i_LeptonVec,
  std::vector<TLorentzVectorWFlags>& 	i_PhotonVec,
  std::vector<TLorentzVectorWFlags>& 	i_JetVec,
  std::vector<TVector3>& 	   	i_Vtx,
  double 				i_LightJetCalib, 
  double 				i_BJetCalib, 
  double 				i_BTagCut,
  int 					i_JetOverlap, 
  double 				i_PtCutJet, 
  double 				i_PtCutEle, 
  double 				i_PtCutMuo, 
  Int_t 				i_RecoType) {
// #############################################################################

  TruthVec =  &i_TruthVec;
  TauVec = &i_TauVec;
  LeptonVec = &i_LeptonVec;
  PhotonVec = &i_PhotonVec;
  JetVec = &i_JetVec;
  Vtx = &i_Vtx;
  LightJetCalib = i_LightJetCalib;
  BJetCalib = i_BJetCalib;
  BTagCut = i_BTagCut;
  JetOverlap = i_JetOverlap;
  PtCutJet = i_PtCutJet;
  PtCutEle = i_PtCutEle;
  PtCutMuo = i_PtCutMuo;
  RecoType = i_RecoType;

  // clear vectors
  TruthVec->clear();
  TauVec->clear();
  LeptonVec->clear();
  PhotonVec->clear();
  JetVec->clear();

  // fill vectors;
  FillObjects();
  FillTruthVec();
  FillJetVec();
  FillTauVec();
  FillPhotonVec();
}

// #############################################################################
void Ntu::FillTruthVec(){
// #############################################################################
//
//  purpose: fill vectors of TLorentzVectors-with-index for truth particles
//
//  authors: nfcastro, fveloso
//  first version: 30.???.??
//
//  last change: 04.jul.2007
//  by: fveloso
//
// #############################################################################

}

// #############################################################################
void Ntu::FillTauVec(){
// #############################################################################
//
//  purpose: fill vectors of TLorentzVectors-with-index for truth particles
//
//  authors: nfcastro, fveloso
//  first version: 30.???.??
//
//  last change: 04.jul.2007
//  by: fveloso
//
// #############################################################################

}

// #############################################################################
void Ntu::FillObjects(){
// #############################################################################
//
//  purpose: fill vectors of TLorentzVectors-with-index for leptons (electrons +
//  muons)
//
//  authors: nfcastro, fveloso
//  first version: ??.???.??
//
//  last change: 04.jul.2007
//  last change: 14.nov.2006
//  by: fveloso
//
// #############################################################################

}

// #############################################################################
void Ntu::FillPhotonVec(){
// #############################################################################
//
//  purpose: fill vectors of TLorentzVectors-with-index for photons
//
//  authors: nfcastro, fveloso
//  first version: ??.???.??
//
//  last change: 04.jul.2007
//  last change: 14.nov.2006
//  by: fveloso
//
// #############################################################################

}

// #############################################################################
void Ntu::FillJetVec() {
// #############################################################################
//
//  purpose: fill vectors of TLorentzVectors-with-index for all jets (b + non-b)
//
//  authors: nfcastro, fveloso
//  first version: ??.???.??
//
//  last change: 04.jul.2007
//  by: fveloso
//
// #############################################################################

}
