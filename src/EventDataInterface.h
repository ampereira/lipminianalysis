// ###################################################################################
//
//							!!Disclaimer!!
//
// ###################################################################################
//
// Add variables in the EventData class, between the public and //end_var statements
//
// ###################################################################################

#include "EventData.h"
#include <vector>
extern std::vector<Event::EventData> events;

#define Calculations events.at(Event::event_counter).Calculations
#define Calculations2 events.at(Event::event_counter).Calculations2


/*
 *	 defines below
 */


#define Antineutrino events.at(Event::event_counter).Antineutrino
#define Aplanarity events.at(Event::event_counter).Aplanarity
#define BJetCalib events.at(Event::event_counter).BJetCalib
#define BTagCut events.at(Event::event_counter).BTagCut
#define BTaggedJetVec events.at(Event::event_counter).BTaggedJetVec
#define Cosmic events.at(Event::event_counter).Cosmic
#define EleMuoOverlap events.at(Event::event_counter).EleMuoOverlap
#define ElectronTrigger events.at(Event::event_counter).ElectronTrigger
#define ElectronVec events.at(Event::event_counter).ElectronVec
#define EveNumber events.at(Event::event_counter).EveNumber
#define GoodRL events.at(Event::event_counter).GoodRL
#define HasSolution events.at(Event::event_counter).HasSolution
#define HforFlag events.at(Event::event_counter).HforFlag
#define Ht events.at(Event::event_counter).Ht
#define Ht_Mini events.at(Event::event_counter).Ht_Mini
#define Hz events.at(Event::event_counter).Hz
#define Isub events.at(Event::event_counter).Isub
#define JetCleanning events.at(Event::event_counter).JetCleanning
#define JetOverlap events.at(Event::event_counter).JetOverlap
#define JetVec events.at(Event::event_counter).JetVec
#define LastCut events.at(Event::event_counter).LastCut
#define LeptonVec events.at(Event::event_counter).LeptonVec
#define LightJetCalib events.at(Event::event_counter).LightJetCalib
#define LumiBlock events.at(Event::event_counter).LumiBlock
#define MissPt events.at(Event::event_counter).MissPt
#define MissPx events.at(Event::event_counter).MissPx
#define MissPy events.at(Event::event_counter).MissPy
#define Ml1b1 events.at(Event::event_counter).Ml1b1
#define Ml1b1_truth events.at(Event::event_counter).Ml1b1_truth
#define Ml1b2 events.at(Event::event_counter).Ml1b2
#define Ml1b2_truth events.at(Event::event_counter).Ml1b2_truth
#define Ml2b1 events.at(Event::event_counter).Ml2b1
#define Ml2b1_truth events.at(Event::event_counter).Ml2b1_truth
#define Ml2b2 events.at(Event::event_counter).Ml2b2
#define Ml2b2_truth events.at(Event::event_counter).Ml2b2_truth
#define MuonTrigger events.at(Event::event_counter).MuonTrigger
#define MuonVec events.at(Event::event_counter).MuonVec
#define MyGoodBtaggedJetVec events.at(Event::event_counter).MyGoodBtaggedJetVec
#define MyGoodJetVec events.at(Event::event_counter).MyGoodJetVec
#define MyGoodNonBtaggedJetVec events.at(Event::event_counter).MyGoodNonBtaggedJetVec
#define NbtagJet events.at(Event::event_counter).NbtagJet
#define Neutrino events.at(Event::event_counter).Neutrino
#define NonTaggedJetVec events.at(Event::event_counter).NonTaggedJetVec
#define PhotonVec events.at(Event::event_counter).PhotonVec
#define Planarity events.at(Event::event_counter).Planarity
#define PtCutEle events.at(Event::event_counter).PtCutEle
#define PtCutJet events.at(Event::event_counter).PtCutJet
#define PtCutMuo events.at(Event::event_counter).PtCutMuo
#define RecB events.at(Event::event_counter).RecB
#define RecB_BoostedtoT events.at(Event::event_counter).RecB_BoostedtoT
#define RecB_BoostedtoWp events.at(Event::event_counter).RecB_BoostedtoWp
#define RecBbar events.at(Event::event_counter).RecBbar
#define RecBbar_BoostedtoTbar events.at(Event::event_counter).RecBbar_BoostedtoTbar
#define RecBbar_BoostedtoWn events.at(Event::event_counter).RecBbar_BoostedtoWn
#define RecCos_B_T_BoostedtoT events.at(Event::event_counter).RecCos_B_T_BoostedtoT
#define RecCos_Bbar_Tbar_BoostedtoTbar events.at(Event::event_counter).RecCos_Bbar_Tbar_BoostedtoTbar
#define RecCos_LepN_Bbar_BoostedtoWn events.at(Event::event_counter).RecCos_LepN_Bbar_BoostedtoWn
#define RecCos_LepN_Tbar_BoostedtoTbar events.at(Event::event_counter).RecCos_LepN_Tbar_BoostedtoTbar
#define RecCos_LepP_B_BoostedtoWp events.at(Event::event_counter).RecCos_LepP_B_BoostedtoWp
#define RecCos_LepP_T_BoostedtoT events.at(Event::event_counter).RecCos_LepP_T_BoostedtoT
#define RecCos_Neu_T_BoostedtoT events.at(Event::event_counter).RecCos_Neu_T_BoostedtoT
#define RecCos_Neubar_Tbar_BoostedtoTbar events.at(Event::event_counter).RecCos_Neubar_Tbar_BoostedtoTbar
#define RecHiggs events.at(Event::event_counter).RecHiggs
#define RecHiggsB1 events.at(Event::event_counter).RecHiggsB1
#define RecHiggsB2 events.at(Event::event_counter).RecHiggsB2
#define RecLepN events.at(Event::event_counter).RecLepN
#define RecLepN_BoostedtoTbar events.at(Event::event_counter).RecLepN_BoostedtoTbar
#define RecLepN_BoostedtoWn events.at(Event::event_counter).RecLepN_BoostedtoWn
#define RecLepP events.at(Event::event_counter).RecLepP
#define RecLepP_BoostedtoT events.at(Event::event_counter).RecLepP_BoostedtoT
#define RecLepP_BoostedtoWp events.at(Event::event_counter).RecLepP_BoostedtoWp
#define RecMassHiggsJet1 events.at(Event::event_counter).RecMassHiggsJet1
#define RecMassHiggsJet2 events.at(Event::event_counter).RecMassHiggsJet2
#define RecNeu events.at(Event::event_counter).RecNeu
#define RecNeu_BoostedtoT events.at(Event::event_counter).RecNeu_BoostedtoT
#define RecNeu_BoostedtoWp events.at(Event::event_counter).RecNeu_BoostedtoWp
#define RecNeubar events.at(Event::event_counter).RecNeubar
#define RecNeubar_BoostedtoTbar events.at(Event::event_counter).RecNeubar_BoostedtoTbar
#define RecNeubar_BoostedtoWn events.at(Event::event_counter).RecNeubar_BoostedtoWn
#define RecProbTotal_ttH events.at(Event::event_counter).RecProbTotal_ttH
#define RecT events.at(Event::event_counter).RecT
#define RecTTbar events.at(Event::event_counter).RecTTbar
#define RecT_Boostedtottbar events.at(Event::event_counter).RecT_Boostedtottbar
#define RecTbar events.at(Event::event_counter).RecTbar
#define RecTbar_Boostedtottbar events.at(Event::event_counter).RecTbar_Boostedtottbar
#define RecWn events.at(Event::event_counter).RecWn
#define RecWn_BoostedtoTbar events.at(Event::event_counter).RecWn_BoostedtoTbar
#define RecWp events.at(Event::event_counter).RecWp
#define RecWp_BoostedtoT events.at(Event::event_counter).RecWp_BoostedtoT
#define RecoType events.at(Event::event_counter).RecoType
#define RunNumber events.at(Event::event_counter).RunNumber
#define Sphericity events.at(Event::event_counter).Sphericity
#define TauVec events.at(Event::event_counter).TauVec
#define TruthB events.at(Event::event_counter).TruthB
#define TruthB_BoostedtoT events.at(Event::event_counter).TruthB_BoostedtoT
#define TruthB_BoostedtoWp events.at(Event::event_counter).TruthB_BoostedtoWp
#define TruthBbar events.at(Event::event_counter).TruthBbar
#define TruthBbar_BoostedtoTbar events.at(Event::event_counter).TruthBbar_BoostedtoTbar
#define TruthBbar_BoostedtoWn events.at(Event::event_counter).TruthBbar_BoostedtoWn
#define TruthCos_B_T_BoostedtoT events.at(Event::event_counter).TruthCos_B_T_BoostedtoT
#define TruthCos_Bbar_Tbar_BoostedtoTbar events.at(Event::event_counter).TruthCos_Bbar_Tbar_BoostedtoTbar
#define TruthCos_LepN_Bbar_BoostedtoWn events.at(Event::event_counter).TruthCos_LepN_Bbar_BoostedtoWn
#define TruthCos_LepN_Tbar_BoostedtoTbar events.at(Event::event_counter).TruthCos_LepN_Tbar_BoostedtoTbar
#define TruthCos_LepP_B_BoostedtoWp events.at(Event::event_counter).TruthCos_LepP_B_BoostedtoWp
#define TruthCos_LepP_T_BoostedtoT events.at(Event::event_counter).TruthCos_LepP_T_BoostedtoT
#define TruthCos_Neu_T_BoostedtoT events.at(Event::event_counter).TruthCos_Neu_T_BoostedtoT
#define TruthCos_Neubar_Tbar_BoostedtoTbar events.at(Event::event_counter).TruthCos_Neubar_Tbar_BoostedtoTbar
#define TruthEleNumber events.at(Event::event_counter).TruthEleNumber
#define TruthHasSolution events.at(Event::event_counter).TruthHasSolution
#define TruthLepN events.at(Event::event_counter).TruthLepN
#define TruthLepN_BoostedtoTbar events.at(Event::event_counter).TruthLepN_BoostedtoTbar
#define TruthLepN_BoostedtoWn events.at(Event::event_counter).TruthLepN_BoostedtoWn
#define TruthLepP events.at(Event::event_counter).TruthLepP
#define TruthLepP_BoostedtoT events.at(Event::event_counter).TruthLepP_BoostedtoT
#define TruthLepP_BoostedtoWp events.at(Event::event_counter).TruthLepP_BoostedtoWp
#define TruthMuonNumber events.at(Event::event_counter).TruthMuonNumber
#define TruthNeu events.at(Event::event_counter).TruthNeu
#define TruthNeu_BoostedtoT events.at(Event::event_counter).TruthNeu_BoostedtoT
#define TruthNeu_BoostedtoWp events.at(Event::event_counter).TruthNeu_BoostedtoWp
#define TruthNeubar events.at(Event::event_counter).TruthNeubar
#define TruthNeubar_BoostedtoTbar events.at(Event::event_counter).TruthNeubar_BoostedtoTbar
#define TruthNeubar_BoostedtoWn events.at(Event::event_counter).TruthNeubar_BoostedtoWn
#define TruthT events.at(Event::event_counter).TruthT
#define TruthT_Boostedtottbar events.at(Event::event_counter).TruthT_Boostedtottbar
#define TruthTbar events.at(Event::event_counter).TruthTbar
#define TruthTbar_Boostedtottbar events.at(Event::event_counter).TruthTbar_Boostedtottbar
#define TruthVec events.at(Event::event_counter).TruthVec
#define TruthWn events.at(Event::event_counter).TruthWn
#define TruthWn_BoostedtoTbar events.at(Event::event_counter).TruthWn_BoostedtoTbar
#define TruthWp events.at(Event::event_counter).TruthWp
#define TruthWp_BoostedtoT events.at(Event::event_counter).TruthWp_BoostedtoT
#define Vtx events.at(Event::event_counter).Vtx
#define Weight events.at(Event::event_counter).Weight
#define XX events.at(Event::event_counter).XX
#define YY events.at(Event::event_counter).YY
#define jet_n_Mini events.at(Event::event_counter).jet_n_Mini
#define ll events.at(Event::event_counter).ll
#define llmiss events.at(Event::event_counter).llmiss
#define massInv_LL_Mini events.at(Event::event_counter).massInv_LL_Mini
#define mc_process events.at(Event::event_counter).mc_process
#define myResolution_Reco_Jet events.at(Event::event_counter).myResolution_Reco_Jet
#define myResolution_Reco_Lep events.at(Event::event_counter).myResolution_Reco_Lep
#define myResolution_Reco_Mis events.at(Event::event_counter).myResolution_Reco_Mis
#define myResolution_Truth_Jet events.at(Event::event_counter).myResolution_Truth_Jet
#define myResolution_Truth_Lep events.at(Event::event_counter).myResolution_Truth_Lep
#define myResolution_Truth_Mis events.at(Event::event_counter).myResolution_Truth_Mis
#define myTruthLepVec events.at(Event::event_counter).myTruthLepVec
#define myTruthNeuVec events.at(Event::event_counter).myTruthNeuVec
#define myTruth_W_Vec events.at(Event::event_counter).myTruth_W_Vec
#define myTruth_WtauDecay events.at(Event::event_counter).myTruth_WtauDecay
#define myTruth_b_Vec events.at(Event::event_counter).myTruth_b_Vec
#define myTruth_t_Vec events.at(Event::event_counter).myTruth_t_Vec
#define my_IB1 events.at(Event::event_counter).my_IB1
#define my_IB2 events.at(Event::event_counter).my_IB2
#define my_IBB events.at(Event::event_counter).my_IBB
#define my_IBQ events.at(Event::event_counter).my_IBQ
#define my_IDW1 events.at(Event::event_counter).my_IDW1
#define my_IDW2 events.at(Event::event_counter).my_IDW2
#define my_IDWB events.at(Event::event_counter).my_IDWB
#define my_IDWQ events.at(Event::event_counter).my_IDWQ
#define my_IQ1 events.at(Event::event_counter).my_IQ1
#define my_IQ2 events.at(Event::event_counter).my_IQ2
#define my_IS1 events.at(Event::event_counter).my_IS1
#define my_IS2 events.at(Event::event_counter).my_IS2
#define my_ISB events.at(Event::event_counter).my_ISB
#define my_ISQ events.at(Event::event_counter).my_ISQ
#define my_ITB events.at(Event::event_counter).my_ITB
#define my_ITQ events.at(Event::event_counter).my_ITQ
#define my_IW1 events.at(Event::event_counter).my_IW1
#define my_IW2 events.at(Event::event_counter).my_IW2
#define my_IWN events.at(Event::event_counter).my_IWN
#define my_IWNf1 events.at(Event::event_counter).my_IWNf1
#define my_IWNf1_Coun events.at(Event::event_counter).my_IWNf1_Coun
#define my_IWNf2 events.at(Event::event_counter).my_IWNf2
#define my_IWNf2_Coun events.at(Event::event_counter).my_IWNf2_Coun
#define my_IWNtau_Neu events.at(Event::event_counter).my_IWNtau_Neu
#define my_IWNtau_elNeu events.at(Event::event_counter).my_IWNtau_elNeu
#define my_IWNtau_muNeu events.at(Event::event_counter).my_IWNtau_muNeu
#define my_IWP events.at(Event::event_counter).my_IWP
#define my_IWPf1 events.at(Event::event_counter).my_IWPf1
#define my_IWPf1_Coun events.at(Event::event_counter).my_IWPf1_Coun
#define my_IWPf2 events.at(Event::event_counter).my_IWPf2
#define my_IWPf2_Coun events.at(Event::event_counter).my_IWPf2_Coun
#define my_IWPtau_Neu events.at(Event::event_counter).my_IWPtau_Neu
#define my_IWPtau_elNeu events.at(Event::event_counter).my_IWPtau_elNeu
#define my_IWPtau_muNeu events.at(Event::event_counter).my_IWPtau_muNeu
#define my_Wn events.at(Event::event_counter).my_Wn
#define my_Wnf1 events.at(Event::event_counter).my_Wnf1
#define my_Wnf2 events.at(Event::event_counter).my_Wnf2
#define my_Wp events.at(Event::event_counter).my_Wp
#define my_Wpf1 events.at(Event::event_counter).my_Wpf1
#define my_Wpf2 events.at(Event::event_counter).my_Wpf2
#define my_b events.at(Event::event_counter).my_b
#define my_bb events.at(Event::event_counter).my_bb
#define my_dw events.at(Event::event_counter).my_dw
#define my_dwb events.at(Event::event_counter).my_dwb
#define my_pdgID_Wn_dw events.at(Event::event_counter).my_pdgID_Wn_dw
#define my_pdgID_Wn_up events.at(Event::event_counter).my_pdgID_Wn_up
#define my_pdgID_Wp_dw events.at(Event::event_counter).my_pdgID_Wp_dw
#define my_pdgID_Wp_up events.at(Event::event_counter).my_pdgID_Wp_up
#define my_s events.at(Event::event_counter).my_s
#define my_sb events.at(Event::event_counter).my_sb
#define my_t events.at(Event::event_counter).my_t
#define my_tb events.at(Event::event_counter).my_tb
#define ntruthele events.at(Event::event_counter).ntruthele
#define ntrutheletau events.at(Event::event_counter).ntrutheletau
#define ntruthlep events.at(Event::event_counter).ntruthlep
#define ntruthleptau events.at(Event::event_counter).ntruthleptau
#define ntruthmu events.at(Event::event_counter).ntruthmu
#define ntruthmutau events.at(Event::event_counter).ntruthmutau
#define ntruthtau events.at(Event::event_counter).ntruthtau
#define num_Combs events.at(Event::event_counter).num_Combs
