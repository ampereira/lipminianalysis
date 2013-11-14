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


		EventData (Ntu*);
		void FillAllVectors (void);
	};
}

#endif
