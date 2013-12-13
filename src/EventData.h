#ifndef LIP_EVENTDATA
#define LIP_EVENTDATA

#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iostream>

#include "TLorentzVectorWFlags.h"
#include "Ntu.h"



namespace Event {

	extern unsigned event_counter;

	// default variables set in DefaultValues and UserValues
	extern int initial_JetOverlap;
	extern Int_t initial_RecoType;

	extern double initial_LightJetCalib;
	extern double initial_BJetCalib;
	extern double initial_BTagCut;
	extern double initial_PtCutJet;
	extern double initial_PtCutEle;
	extern double initial_PtCutMuo;



	class EventData {

		// units
		double keV;
		double MeV;
		double GeV;
		double TeV;

		Ntu *nTuple;


		void FillMuonVec();
		void FillElectronVec();
		void FillBTaggedJetVec();
		void FillNonTaggedJetVec();

		void LeptonIsolationDeltaR();
		void PhotonIsolationDeltaR();
		void JetIsolationDeltaR();
		void TauIsolationDeltaR();

	public:
		unsigned num_Combs;

        //_____objects_____ ttDilepKinFit
		TLorentzVector 	RecT, RecB, RecWp, RecLepP, RecNeu, RecTbar, RecBbar, RecWn, RecLepN, RecNeubar,
			RecTTbar, RecHiggs, RecHiggsB1, RecHiggsB2, Neutrino, Antineutrino;
		double RecMassHiggsJet1, RecMassHiggsJet2, RecProbTotal_ttH;
		//_____Boost to top_____
		TLorentzVector RecB_BoostedtoT, RecWp_BoostedtoT, RecLepP_BoostedtoT, RecNeu_BoostedtoT, 
			RecBbar_BoostedtoTbar, RecWn_BoostedtoTbar, RecLepN_BoostedtoTbar, RecNeubar_BoostedtoTbar; 
        //_____Boost to ttbar_____
		TLorentzVector RecT_Boostedtottbar, RecTbar_Boostedtottbar;
        //_____angles______
		double RecCos_LepP_T_BoostedtoT, RecCos_Neu_T_BoostedtoT, RecCos_B_T_BoostedtoT, RecCos_LepN_Tbar_BoostedtoTbar, RecCos_Neubar_Tbar_BoostedtoTbar, 
			RecCos_Bbar_Tbar_BoostedtoTbar, RecCos_LepP_B_BoostedtoWp, RecCos_LepN_Bbar_BoostedtoWn;
        //_____Boost to W+-_____
		TLorentzVector RecB_BoostedtoWp, RecLepP_BoostedtoWp, RecNeu_BoostedtoWp, 
			RecBbar_BoostedtoWn, RecLepN_BoostedtoWn, RecNeubar_BoostedtoWn; 


		int Isub;
		int LumiBlock; 
		int RunNumber; 
		int EveNumber; 
		int TruthEleNumber; 
		int TruthMuonNumber; 
		int ElectronTrigger;
		int MuonTrigger;
		int Cosmic;
		int HforFlag;
		int jet_n_Mini;
		int EleMuoOverlap;
		int JetCleanning;
		int GoodRL;
		int JetOverlap;
		int LastCut;
		int mc_process;
		int doGoodObjSelection;

		Int_t RecoType;

		double MissPx;
		double MissPy;
		double MissPt;
		double Weight;
		double Sphericity;
		double Aplanarity;
		double Planarity;
		double Ht_Mini;
		double massInv_LL_Mini;
		double LightJetCalib;
		double BJetCalib;
		double BTagCut;
		double PtCutJet;
		double PtCutEle;
		double PtCutMuo;

		std::vector<TLorentzVectorWFlags> TruthVec;
		std::vector<TLorentzVectorWFlags> TauVec;
		std::vector<TLorentzVectorWFlags> MuonVec;
		std::vector<TLorentzVectorWFlags> ElectronVec; 
		std::vector<TLorentzVectorWFlags> LeptonVec;
		std::vector<TLorentzVectorWFlags> PhotonVec;
		std::vector<TLorentzVectorWFlags> BTaggedJetVec;
		std::vector<TLorentzVectorWFlags> NonTaggedJetVec;
		std::vector<TLorentzVectorWFlags> JetVec;



		std::vector<TVector3> Vtx;


		// Cenas Calculations
		Int_t myRunNumber;       //...run number

        //.................t
        Int_t my_ITQ;            //...line for top quark
        Int_t my_IQ1;            //...counter for top quark
        TLorentzVector my_t;
        //.................tbar
        Int_t my_ITB;            //...line for anti top quark
        Int_t my_IQ2;            //...counter for anti top quark
        TLorentzVector my_tb;


        //.................W+
        Int_t my_IWP;            //...line for W+
        Int_t my_IW1;            //...counter for W+
        TLorentzVector my_Wp;
        //.................W-
        Int_t my_IWN;            //...line for W-
        Int_t my_IW2;            //...counter for W-
        TLorentzVector my_Wn;


        //.................b
        Int_t my_IBQ;            //...line for b
        Int_t my_IB1;            //...counter for bb
        TLorentzVector my_b;
        //.................bb
        Int_t my_IBB;            //...line for bb
        Int_t my_IB2;            //...counter for bb
        TLorentzVector my_bb;


        //.................s
        Int_t my_ISQ;            //...line for s
        Int_t my_IS1;            //...counter for s
        TLorentzVector my_s;
        //.................sb
        Int_t my_ISB;            //...line for sb
        Int_t my_IS2;            //...counter for sb
        TLorentzVector my_sb;


        //.................d
        Int_t my_IDWQ;            //...line for d
        Int_t my_IDW1;            //...counter for d
        TLorentzVector my_dw;
        //.................db
        Int_t my_IDWB;            //...line for db
        Int_t my_IDW2;            //...counter for db
        TLorentzVector my_dwb;

        //.................W+->f1f2
        Int_t my_IWPf1;          //...line for f1
       	Int_t my_IWPf2;          //...line for f2
        Int_t my_IWPf1_Coun;     //...counter for f1
        Int_t my_IWPf2_Coun;     //...counter for f2
        Int_t my_IWPtau_Neu;     //...counter for Tau Neutrinos
        Int_t my_IWPtau_elNeu;   //...counter for ele Neutrinos (from tau decay)
        Int_t my_IWPtau_muNeu;   //...counter for muo Neutrino  (from tau decay)
        Int_t my_pdgID_Wp_dw;    //...Code of 1st W+ Daughter
        Int_t my_pdgID_Wp_up;    //...Code of 2nd W+ Daughter
        TLorentzVector my_Wpf1;
        TLorentzVector my_Wpf2;
        //.................W-->f1f2
        Int_t my_IWNf1;          //...line for f1
        Int_t my_IWNf2;          //...line for f2
        Int_t my_IWNf1_Coun;     //...counter for f1
        Int_t my_IWNf2_Coun;     //...counter for f2
        Int_t my_IWNtau_Neu;     //...counter for Tau Neutrinos
        Int_t my_IWNtau_elNeu;   //...counter for ele Neutrinos (from tau decay)
        Int_t my_IWNtau_muNeu;   //...counter for muo Neutrino  (from tau decay)
        Int_t my_pdgID_Wn_dw;    //...Code of 1st W- Daughter
        Int_t my_pdgID_Wn_up;    //...Code of 2nd W- Daughter
        TLorentzVector my_Wnf1;
        TLorentzVector my_Wnf2;

		Int_t ntruthlep;
		Int_t ntruthele;
		Int_t ntruthmu;
		Int_t ntrutheletau;
		Int_t ntruthmutau;
		Int_t ntruthtau;
		Int_t ntruthleptau;

		double Ht;
		double Hz; //samor

		TLorentzVector ll;
		TLorentzVector llmiss;


        int NbtagJet;
        std::vector<TLorentzVectorWFlags> MyGoodJetVec;
        std::vector<TLorentzVectorWFlags> MyGoodBtaggedJetVec;
        std::vector<TLorentzVectorWFlags> MyGoodNonBtaggedJetVec;

        // Stuff for calculations2
        double TruthHasSolution;
        Int_t  myTruth_WtauDecay;
        std::vector<TLorentzVectorWFlags> myTruthLepVec;
        std::vector<TLorentzVectorWFlags> myTruthNeuVec;
        std::vector<TLorentzVectorWFlags> myTruth_t_Vec;
        std::vector<TLorentzVectorWFlags> myTruth_W_Vec;
        std::vector<TLorentzVectorWFlags> myTruth_b_Vec;
		// Truth information
        std::vector<TLorentzVectorWFlags> myResolution_Truth_Lep;
        std::vector<TLorentzVectorWFlags> myResolution_Truth_Jet;
        std::vector<TLorentzVectorWFlags> myResolution_Truth_Mis;
		// Reconstructed information
        std::vector<TLorentzVectorWFlags> myResolution_Reco_Lep;
        std::vector<TLorentzVectorWFlags> myResolution_Reco_Jet;
        std::vector<TLorentzVectorWFlags> myResolution_Reco_Mis;

		double Ml1b1;
		double Ml2b2;
		double Ml1b2;
		double Ml2b1;

		double Ml1b1_truth;
		double Ml2b2_truth;
		double Ml1b2_truth;
		double Ml2b1_truth;

		//_____objects_____
		TLorentzVector 	TruthT,    TruthB,    TruthWp, TruthLepP,    TruthNeu, 
				TruthTbar, TruthBbar, TruthWn, TruthLepN,    TruthNeubar; 
	    //_____Boost to top_____
		TLorentzVector 	TruthB_BoostedtoT,       TruthWp_BoostedtoT,    TruthLepP_BoostedtoT,       TruthNeu_BoostedtoT, 
				TruthBbar_BoostedtoTbar, TruthWn_BoostedtoTbar, TruthLepN_BoostedtoTbar,    TruthNeubar_BoostedtoTbar; 
	    //_____Boost to ttbar_____
		TLorentzVector  TruthT_Boostedtottbar, TruthTbar_Boostedtottbar;
	        //_____angles______
		double XX, YY, 
				TruthCos_LepP_T_BoostedtoT,       TruthCos_Neu_T_BoostedtoT,          TruthCos_B_T_BoostedtoT,
				TruthCos_LepN_Tbar_BoostedtoTbar, TruthCos_Neubar_Tbar_BoostedtoTbar, TruthCos_Bbar_Tbar_BoostedtoTbar,
				TruthCos_LepP_B_BoostedtoWp, TruthCos_LepN_Bbar_BoostedtoWn;
	    //_____Boost to W+-_____
		TLorentzVector 	TruthB_BoostedtoWp,    TruthLepP_BoostedtoWp,       TruthNeu_BoostedtoWp, 
				TruthBbar_BoostedtoWn, TruthLepN_BoostedtoWn,    TruthNeubar_BoostedtoWn; 

		double HasSolution;

		void Calculations (void);
		void Calculations2 (void);
		EventData (Ntu*);
		void FillAllVectors (void);
	};
}

#endif
