#include "EventData.h"

using namespace std;

namespace Event {

	unsigned event_counter = 0;

	// default variables set in DefaultValues and UserValues
	int initial_JetOverlap;
	int initial_Isub;
	Int_t initial_RecoType;

	double initial_LightJetCalib;
	double initial_BJetCalib;
	double initial_BTagCut;
	double initial_PtCutJet;
	double initial_PtCutEle;
	double initial_PtCutMuo;

	EventData::EventData (Ntu *nt) {
		// como copiar
		nTuple = nt;
		LastCut = 0;

		GeV = !nt ? 1 : nTuple->GeV();

		keV = GeV * .000001;
		MeV = GeV * .001;
		TeV = GeV * 1000.;


		PtCutEle = initial_PtCutEle;
		PtCutMuo = initial_PtCutMuo;
		PtCutJet = initial_PtCutJet;

		// jet energy calibration
		LightJetCalib = initial_LightJetCalib;
		BJetCalib 	= initial_BJetCalib;

		// btag cut
		BTagCut = initial_BTagCut; 

		// overlap of jets with photons and taus
		JetOverlap = initial_JetOverlap;

		// Options for different reconstruction of objets within the same ntuples
		RecoType = initial_RecoType;
	}

	bool LorentzVecComp (TLorentzVectorWFlags a, TLorentzVectorWFlags b) {
	// #############################################################################
	//
	//  purpose: this function is used to sort the particles by decreasing pT
	//
	//  authors: fveloso
	//  first version: 27.fev.2007
	//
	// #############################################################################

		return a.Pt() > b.Pt();
	}

	void EventData::LeptonIsolationDeltaR(){
	// #############################################################################
	//
	//  purpose: calculation of isolation angle (in R) of leptons
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 18.may.2007
	//  by: nfcastro
	//
	// #############################################################################

		double IsoDeltaR;
		double tmp;

		for(int i = 0; i < LeptonVec.size(); ++i){
			IsoDeltaR = 999.;
			tmp = 999.;

			for(int j = 0; j < JetVec.size(); j++) {
				tmp = JetVec[j].DeltaR(LeptonVec[i]);
				if( tmp < IsoDeltaR )
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < LeptonVec.size(); j++) {
				tmp = LeptonVec[j].DeltaR(LeptonVec[i]);
				if( tmp < IsoDeltaR && j != i )
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < TauVec.size(); j++) {
				tmp = TauVec[j].DeltaR(LeptonVec[i]);
				if( tmp < IsoDeltaR )
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < PhotonVec.size(); j++) {
				tmp = PhotonVec[j].DeltaR(LeptonVec[i]);
				if( tmp < IsoDeltaR )
					IsoDeltaR = tmp;
			}

			if(doGoodObjSelection==1)
				LeptonVec[i].SetIsoDeltaR(IsoDeltaR);
		}
	}

	// #############################################################################
	void EventData::PhotonIsolationDeltaR(){
	// #############################################################################
	//
	//  purpose: calculation of isolation angle (in R) of photons
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 24.apr.2010
	//  by: nfcastro
	//
	// #############################################################################

	  double IsoDeltaR;
	  double tmp;

		for(int i = 0; i < PhotonVec.size(); ++i){
			IsoDeltaR = 999.;
			tmp = 999.;

			for(int j = 0; j < JetVec.size(); j++) {
				tmp = JetVec[j].DeltaR(PhotonVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < LeptonVec.size(); j++) {
				tmp = LeptonVec[j].DeltaR(PhotonVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < TauVec.size(); j++) {
				tmp = TauVec[j].DeltaR(PhotonVec[i]);
				if( tmp < IsoDeltaR )
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < PhotonVec.size(); j++) {
				tmp = PhotonVec[j].DeltaR(PhotonVec[i]);
				if (tmp < IsoDeltaR && j != i)
					IsoDeltaR = tmp;
			}

			PhotonVec[i].SetIsoDeltaR(IsoDeltaR);
		}
	}

	// #############################################################################
	void EventData::JetIsolationDeltaR(){
	// #############################################################################
	//
	//  purpose: calculation of isolation angle (in R) of jets
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 24.apr.2010
	//  by: nfcastro
	//
	// #############################################################################

		double IsoDeltaR;
		double tmp;

		for (int i = 0; i < JetVec.size(); ++i){
			IsoDeltaR = 999.;
			tmp = 999.;

			for (int j = 0; j < JetVec.size(); j++) {
				tmp = JetVec[j].DeltaR(JetVec[i]);
				if (tmp < IsoDeltaR && j != i)
					IsoDeltaR = tmp;
			}

			for (int j = 0; j < LeptonVec.size(); j++) {
				tmp = LeptonVec[j].DeltaR(JetVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < TauVec.size(); j++) {
				tmp = TauVec[j].DeltaR(JetVec[i]);
				if( tmp < IsoDeltaR )
					IsoDeltaR = tmp;
			}

			for (int j = 0; j < PhotonVec.size(); j++) {
				tmp = PhotonVec[j].DeltaR(JetVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			JetVec[i].SetIsoDeltaR(IsoDeltaR);
		}
	}

	// #############################################################################
	void EventData::TauIsolationDeltaR(){
	// #############################################################################
	//
	//  purpose: calculation of isolation angle (in R) of taus
	//
	//  authors: nfcastro
	//  first version: 18.may.2007
	//
	//  last change: 18.may.2007
	//  by: nfcastro
	//
	// #############################################################################

		double IsoDeltaR;
		double tmp;

		for(int i = 0; i < TauVec.size(); ++i){
			IsoDeltaR = 999.;
			tmp = 999.;

			for(int j = 0; j < JetVec.size(); j++) {
				tmp = JetVec[j].DeltaR(TauVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < TauVec.size(); j++) {
				tmp = TauVec[j].DeltaR(TauVec[i]);
				if( tmp < IsoDeltaR && j != i )
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < PhotonVec.size(); j++) {
				tmp = PhotonVec[j].DeltaR(TauVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			for(int j = 0; j < LeptonVec.size(); j++) {
				tmp = LeptonVec[j].DeltaR(TauVec[i]);
				if (tmp < IsoDeltaR)
					IsoDeltaR = tmp;
			}

			TauVec[i].SetIsoDeltaR(IsoDeltaR);
		}
	}

	// #############################################################################
	void EventData::FillElectronVec(){
	// #############################################################################
	//
	//  purpose: fill vectors of TLorentzVectors-with-index for all electrons
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 17.Nov.2012
	//  by: A.Onofre
	//
	// #############################################################################

		ElectronVec.clear();

		for(Int_t i = 0; i < LeptonVec.size(); ++i){
			if( abs(LeptonVec[i].isb) == 11 ) {
				ElectronVec.push_back(LeptonVec[i]);
			}
		}

		// AO 17 Nov 2012 ===== sort Electrons inside the vectors
		sort(ElectronVec.begin(), ElectronVec.end(), LorentzVecComp);
		// AO 17 Nov 2012 ===== sort Electrons inside the vectors

	}

	// #############################################################################
	void EventData::FillMuonVec(){
	// #############################################################################
	//
	//  purpose: fill vectors of TLorentzVectors-with-index for all muons
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 17.Nov.2012
	//  by: A.Onofre
	//
	// #############################################################################

		MuonVec.clear();

		for(Int_t i = 0; i < LeptonVec.size(); ++i){
			if( abs(LeptonVec[i].isb) == 13 ) {
				MuonVec.push_back(LeptonVec[i]);
			}
		}

		// AO 17 Nov 2012 ===== sort Muons inside the vectors
		sort(MuonVec.begin(), MuonVec.end(), LorentzVecComp);
		// AO 17 Nov 2012 ===== sort Muons inside the vectors

	}

	// #############################################################################
	void EventData::FillBTaggedJetVec(){
	// #############################################################################
	//
	//  purpose: fill vectors of TLorentzVectors-with-index for all b jets
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 17.Nov.2012
	//  by: A.Onofre
	//
	// #############################################################################

		BTaggedJetVec.clear();

		for(Int_t i = 0; i < JetVec.size(); ++i){
			if( abs(JetVec[i].isb) == 5 ) {
				BTaggedJetVec.push_back(JetVec[i]);
			}
		}

		// AO 17 Nov 2012 ===== sort b-jets inside the vectors
		sort(BTaggedJetVec.begin(), BTaggedJetVec.end(), LorentzVecComp);
		// AO 17 Nov 2012 ===== sort b-jets inside the vectors

	}

	// #############################################################################
	void EventData::FillNonTaggedJetVec (void) {
	// #############################################################################
	//
	//  purpose: fill vectors of TLorentzVectors-with-index for all non b jets
	//
	//  authors: fveloso
	//  first version: 10.may.2007
	//
	//  last change: 12.Nov.2012
	//  by: A.Onofre
	//
	// #############################################################################

		NonTaggedJetVec.clear();

		for(Int_t i = 0; i < JetVec.size(); ++i){
			if( abs(JetVec[i].isb) != 5 ) {
				NonTaggedJetVec.push_back(JetVec[i]);
			}
		}

		// AO 17 Nov 2012 ===== sort Non b-jets inside the vectors
		sort(NonTaggedJetVec.begin(), NonTaggedJetVec.end(), LorentzVecComp);
		// AO 17 Nov 2012 ===== sort Non b-jets inside the vectors

	}

	void EventData::FillAllVectors (void) {
	// #############################################################################
	//
	//  purpose: main function that calls the routines that fill Vectors of
	//  TLorentzVectors-with-index for reconstructed detector objects
	//  (muons, jets, electrons, etc...)
	//
	//  authors: nfcastro
	//  first version: ??.???.??
	//
	//  last change: 17.Nov.2013
	//  by: A.Pereira
	//
	// #############################################################################

	// fill vectors with particles
	nTuple->FillVectors(
			TruthVec, 
			TauVec, 
			LeptonVec, 
			PhotonVec, 
			JetVec, 
			Vtx,
			LightJetCalib, 
			BJetCalib, 
			BTagCut, 
			JetOverlap, 
			PtCutJet, 
			PtCutEle, 
			PtCutMuo, 
			RecoType);

	// sort particles inside the vectors
	sort(LeptonVec.begin(), LeptonVec.end(), LorentzVecComp);
	sort(PhotonVec.begin(), PhotonVec.end(), LorentzVecComp);
	sort(JetVec.begin(), JetVec.end(), LorentzVecComp);

	// isolation angles
	LeptonIsolationDeltaR();
	PhotonIsolationDeltaR();
	JetIsolationDeltaR();
	TauIsolationDeltaR();

	// AO 17 Nov 2012 ========== fill vectors with subtypes of particles and sort particles inside the vectors
	FillMuonVec();
	FillElectronVec();
	FillBTaggedJetVec();
	FillNonTaggedJetVec();
	// AO 17 Nov 2012 ========== fill vectors with subtypes of particles and sort particles inside the vectors

	// other stuff to be filled only after nTuple->FillVectors is called
	Isub = nTuple->Isub();
	LumiBlock = nTuple->LumiBlock();
	RunNumber = nTuple->RunNumber();
	EveNumber = nTuple->EveNumber();
	TruthEleNumber = nTuple->TruthEleNumber();
	TruthMuonNumber = nTuple->TruthMuonNumber();
	ElectronTrigger = nTuple->ElectronTrigger();
	MuonTrigger = nTuple->MuonTrigger();
	Cosmic = nTuple->Cosmic();
	HforFlag = nTuple->HforFlag();
	Ht_Mini = nTuple->Ht_Mini();
	massInv_LL_Mini = nTuple->massInv_LL_Mini();
	jet_n_Mini = nTuple->jet_n_Mini();
	EleMuoOverlap = nTuple->EleMuoOverlap();
	JetCleanning = nTuple->JetCleanning();
	GoodRL = nTuple->GoodRL();
	// MissPt() must be called before MissPx() and MissPy()
	MissPt = nTuple->MissPt();
	MissPx = nTuple->MissPx();
	MissPy = nTuple->MissPy();
	Weight = nTuple->Weight();
	Sphericity = nTuple->Sphericity();
	Aplanarity = nTuple->Aplanarity();
	Planarity  = nTuple->Planarity();

	}
}
