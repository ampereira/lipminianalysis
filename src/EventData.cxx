#include "EventData.h"

using namespace std;
// Coisas globais
Int_t myEVE_Total;
//....semileptonic....
Int_t myEVE_semi_ele;
Int_t myEVE_semi_mu;
Int_t myEVE_semi_nontau_ele;
Int_t myEVE_semi_nontau_mu;
Int_t myEVE_semi_tau;
Int_t myEVE_semi_leptau;
Int_t myEVE_semi_eletau;
Int_t myEVE_semi_mutau;
//....dileptonic............with taus....
Int_t myEVE_di_eleele;
Int_t myEVE_di_mumu;
Int_t myEVE_di_elemu;
//....dileptonic............without taus....
Int_t myEVE_di_nontau_eleele;
Int_t myEVE_di_nontau_elemu;
Int_t myEVE_di_nontau_eletau;
Int_t myEVE_di_nontau_mumu;
Int_t myEVE_di_nontau_mutau;
Int_t myEVE_di_nontau_tautau;
//....multileptons............
Int_t myEVE_0leptons;
Int_t myEVE_3leptons;
Int_t myEVE_4leptons;
Int_t myEVE_more4leptons;
//...top quarks
Int_t myEVE_ttbar;
Int_t myEVE_4tops;
Int_t myEVE_nonttbar;
//.....................discriminate what ttbar events do we have.....
Int_t myttbar_00;
Int_t myttbar_01;
Int_t myttbar_02;
Int_t myttbar_03;
Int_t myttbar_10;
Int_t myttbar_11;
Int_t myttbar_12;
Int_t myttbar_13;
Int_t myttbar_20;
Int_t myttbar_21;
Int_t myttbar_22;
Int_t myttbar_23;
Int_t myttbar_30;
Int_t myttbar_31;
Int_t myttbar_32;
Int_t myttbar_33;
//...W bosons
Int_t myEVE_WW;
Int_t myEVE_4W;
Int_t myEVE_nonWW;
//.....................discriminate what bbbar events do we have.....
Int_t mybbbar_00;
Int_t mybbbar_01;
Int_t mybbbar_02;
Int_t mybbbar_03;
Int_t mybbbar_10;
Int_t mybbbar_11;
Int_t mybbbar_12;
Int_t mybbbar_13;
Int_t mybbbar_20;
Int_t mybbbar_21;
Int_t mybbbar_22;
Int_t mybbbar_23;
Int_t mybbbar_30;
Int_t mybbbar_31;
Int_t mybbbar_32;
Int_t mybbbar_33;
//...b quarks
Int_t myEVE_bb;
Int_t myEVE_4b;
Int_t myEVE_nonbb;
//.....................discriminate what ssbar events do we have.....
Int_t myssbar_00;
Int_t myssbar_01;
Int_t myssbar_02;
Int_t myssbar_03;
Int_t myssbar_10;
Int_t myssbar_11;
Int_t myssbar_12;
Int_t myssbar_13;
Int_t myssbar_20;
Int_t myssbar_21;
Int_t myssbar_22;
Int_t myssbar_23;
Int_t myssbar_30;
Int_t myssbar_31;
Int_t myssbar_32;
Int_t myssbar_33;
//...s quarks
Int_t myEVE_ss;
Int_t myEVE_4s;
Int_t myEVE_nonss;
//.....................discriminate what ddbar events do we have.....
Int_t myddbar_00;
Int_t myddbar_01;
Int_t myddbar_02;
Int_t myddbar_03;
Int_t myddbar_10;
Int_t myddbar_11;
Int_t myddbar_12;
Int_t myddbar_13;
Int_t myddbar_20;
Int_t myddbar_21;
Int_t myddbar_22;
Int_t myddbar_23;
Int_t myddbar_30;
Int_t myddbar_31;
Int_t myddbar_32;
Int_t myddbar_33;
//...d quarks
Int_t myEVE_dd;
Int_t myEVE_4d;
Int_t myEVE_nondd;

int isData;
double EtaCutJet;



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

	void EventData::Calculations(){
	// #############################################################################
	//
	//  purpose: to do some calculations for event selection
	//
	//  authors: fveloso
	//  first version: 23.nov.2006
	//
	//  last change: 04.Nov.2012
	//  by: A.Onofre
	//
	// #############################################################################


	        // #####################################################################
	        // AO 11 Nov 2010
	        // #####################################################################

	        NbtagJet=0;

	        MyGoodJetVec.clear();
	    	// __AO 18 Outubro_______________________________
		MyGoodBtaggedJetVec.clear();
	        MyGoodNonBtaggedJetVec.clear();
	    	// __AO 18 Outubro_______________________________

	        for( int i =0; i<JetVec.size(); i++){
	           if( JetVec[i].Pt()>PtCutJet && fabs(JetVec[i].Eta())<EtaCutJet ){
	              MyGoodJetVec.push_back(JetVec[i]);
	              if(abs(JetVec[i].isb) == 5) {
			NbtagJet++;
			MyGoodBtaggedJetVec.push_back(JetVec[i]);
		      }
	              if(abs(JetVec[i].isb) != 5) {
			MyGoodNonBtaggedJetVec.push_back(JetVec[i]);
		      }
	           }
	        }




		// =========================================================
		// ===== AO 8 Oct 2010 ===================== below =========
		// =========================================================
		//   	     Get MY OWN variables out of the box
		// =========================================================
		// ===== AO 8 Oct 2010 ===================== below =========
		// =========================================================

	        if ( isData == 0 ){ 

	  	    //...............Run Number.............................
		    myRunNumber = RunNumber;

	            if ( myRunNumber == 105200 ){

			//----------------------------------------------------------
		       	//-----------------------initialize all new variables-------
			//----------------------------------------------------------

			//.................t
			my_ITQ = 0;
			my_IQ1 = 0;
			my_t.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................tbar
			my_ITB = 0;
			my_IQ2 = 0;
			my_tb.SetPxPyPzE(0., 0., 0., 0.); 

	  		//.................W+
			my_IWP = 0;
			my_IW1 = 0;
			my_Wp.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................W-
			my_IWN = 0;
			my_IW2 = 0;
			my_Wn.SetPxPyPzE(0., 0., 0., 0.);

	  		//.................b from t
			my_IBQ = 0;
			my_IB1 = 0;
			my_b.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................bb from tb
			my_IBB = 0;
			my_IB2 = 0;
			my_bb.SetPxPyPzE(0., 0., 0., 0.);

	  		//.................s from t
			my_ISQ = 0;
			my_IS1 = 0;
			my_s.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................sb from tb
			my_ISB = 0;
			my_IS2 = 0;
			my_sb.SetPxPyPzE(0., 0., 0., 0.);

	  		//.................d from t
			my_IDWQ = 0;
			my_IDW1 = 0;
			my_dw.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................db from tb
			my_IDWB = 0;
			my_IDW2 = 0;
			my_dwb.SetPxPyPzE(0., 0., 0., 0.);

	  		//.................W+->f1f2
			my_IWPf1 = 0;
			my_IWPf2 = 0;
			my_IWPf1_Coun = 0;
			my_IWPf2_Coun = 0;
			my_IWPtau_Neu = 0;
			my_IWPtau_elNeu = 0;
			my_IWPtau_muNeu = 0;
			my_pdgID_Wp_dw = 0;
			my_pdgID_Wp_up = 0;
			my_Wpf1.SetPxPyPzE(0., 0., 0., 0.);
			my_Wpf2.SetPxPyPzE(0., 0., 0., 0.);
	  		//.................W-->f1f2
			my_IWNf1 = 0;
			my_IWNf2 = 0;
			my_IWNf1_Coun = 0;
			my_IWNf2_Coun = 0;
			my_IWNtau_Neu = 0;
			my_IWNtau_elNeu = 0;
			my_IWNtau_muNeu = 0;
			my_pdgID_Wn_dw = 0;
			my_pdgID_Wn_up = 0;
			my_Wnf1.SetPxPyPzE(0., 0., 0., 0.);
			my_Wnf2.SetPxPyPzE(0., 0., 0., 0.);
		    }
		}  


		// get number of truth leptons
		ntruthlep    = 0;
		ntruthele    = 0;
		ntruthmu     = 0;
		ntruthtau    = 0;
		ntrutheletau = 0;
		ntruthmutau  = 0;
		ntruthleptau = 0;

	        //-----------------------extract information from ntuple-------
	        //....do this only in case of MC simulation....................
	        //-----------------------extract information from ntuple-------
	        if ( isData == 0 ){
			ntruthele    = TruthEleNumber; 	// nTuple Variable 
			ntruthmu     = TruthMuonNumber; // nTuple Variable 
			//ntruthtau    = ((TopD3PDMaker170552*)nTuple)->Truth0_Tau_N;
			//ntruthleptau = ((TopD3PDMaker170552*)nTuple)->Truth0_lepTau_N;
			//ntrutheletau = ((TopD3PDMaker170552*)nTuple)->Truth0_elTau_N;
			//ntruthmutau  = ((TopD3PDMaker170552*)nTuple)->Truth0_muTau_N;

			ntruthlep = ntruthele + ntruthmu + ntruthleptau;
		}

		// =========================================================
		// ===== AO 8 Oct 2010 ===================== below =========
		// =========================================================
		//   	     Get MY OWN variables out of the box
		// =========================================================
		// ===== AO 8 Oct 2010 ===================== below =========
		// =========================================================

	        if ( ( isData == 0 ) && (myRunNumber ==105200) ){

		       	//-----------------------------Total Number of Events-------
		        myEVE_Total++;

	                //
		       	//-----------------------------Semileptonic Topology--------
	        	if ( (ntruthele + ntruthmu + ntruthtau) == 1  ){
	                   //
	        	   if (   ntruthele == 1 ) myEVE_semi_nontau_ele++;
	        	   if (   ntruthmu  == 1 ) myEVE_semi_nontau_mu++;
	        	   if (   ntruthtau == 1 ) myEVE_semi_tau++;
	                   //
	        	   //...with taus.......
	        	   if ( (ntruthele+ntrutheletau) == 1 ) myEVE_semi_ele++;
	        	   if ( (ntruthmu +ntruthmutau) == 1 ) myEVE_semi_mu++;
	                   //
	        	   if (     ntruthleptau == 1 ) {
				myEVE_semi_leptau++;
	        	        if ( ntrutheletau>0 ) myEVE_semi_eletau++;
	        	        if ( ntruthmutau>0 ) myEVE_semi_mutau++;
	        	   }           
	        	}
	                //
		       	//-------------------------------Dileptonic Topology--------
	        	if (  (ntruthele + ntruthmu + ntruthtau) == 2  ){
	        	   //
	        	   if (   ntruthele == 2 ) myEVE_di_nontau_eleele++;
	        	   if (   ntruthmu  == 2 ) myEVE_di_nontau_mumu++;
	        	   if ( ( ntruthele == 1 ) && ( ntruthmu  == 1 )  ) myEVE_di_nontau_elemu++;
	        	   if ( ( ntruthele == 1 ) && ( ntruthtau == 1 )  ) myEVE_di_nontau_eletau++;
	        	   if ( ( ntruthmu  == 1 ) && ( ntruthtau == 1 )  ) myEVE_di_nontau_mutau++;
	        	   if (   ntruthtau == 2 ) myEVE_di_nontau_tautau++;
	                   //
	        	   //...with taus.......
	        	   if ( (ntruthele+ntrutheletau)==2 ) myEVE_di_eleele++;
	        	   if ( (ntruthmu +ntruthmutau)==2 ) myEVE_di_mumu++;
	        	   if ( ((ntruthele+ntrutheletau)==1) && ((ntruthmu+ntruthmutau)==1)  ) myEVE_di_elemu++;
	        	}
	                if (  (ntruthele + ntruthmu + ntruthtau) == 0  ) myEVE_0leptons++;
	        	if (  (ntruthele + ntruthmu + ntruthtau) == 3  ) myEVE_3leptons++;
	        	if (  (ntruthele + ntruthmu + ntruthtau) == 4  ) myEVE_4leptons++;
	        	if (  (ntruthele + ntruthmu + ntruthtau)  > 4  ) myEVE_more4leptons++;
	                //
			//...top quarks.............................................
	        	if ( my_IQ1*my_IQ2 == 1  ){
	       		       	myEVE_ttbar++;
	        	} else {
				myEVE_nonttbar++;
	        	}
			if ( (my_IQ1+my_IQ2) == 4 ) myEVE_4tops++;
	        	//.....................discriminate what ttbar events do we have..... 
	                if ( my_IQ1==0 && my_IQ2==0 ) myttbar_00++;
	                if ( my_IQ1==0 && my_IQ2==1 ) myttbar_01++;
	                if ( my_IQ1==0 && my_IQ2==2 ) myttbar_02++;
	                if ( my_IQ1==0 && my_IQ2==3 ) myttbar_03++;

	                if ( my_IQ1==1 && my_IQ2==0 ) myttbar_10++;
	                if ( my_IQ1==1 && my_IQ2==1 ) myttbar_11++;
	                if ( my_IQ1==1 && my_IQ2==2 ) myttbar_12++;
	                if ( my_IQ1==1 && my_IQ2==3 ) myttbar_13++;

	                if ( my_IQ1==2 && my_IQ2==0 ) myttbar_20++;
	                if ( my_IQ1==2 && my_IQ2==1 ) myttbar_21++;
	                if ( my_IQ1==2 && my_IQ2==2 ) myttbar_22++;
	                if ( my_IQ1==2 && my_IQ2==3 ) myttbar_23++;
		
	                if ( my_IQ1==3 && my_IQ2==0 ) myttbar_30++;
	                if ( my_IQ1==3 && my_IQ2==1 ) myttbar_31++;
	                if ( my_IQ1==3 && my_IQ2==2 ) myttbar_32++;
	                if ( my_IQ1==3 && my_IQ2==3 ) myttbar_33++;

	        	//...W bosons...............................................
	        	if ( my_IQ1*my_IQ2 == 1  ){
	     			if ( my_IW1*my_IW2 ==1 ){
					myEVE_WW++;
				} else {	
					myEVE_nonWW++;
				}
				if ( (my_IW1+my_IW2) == 4 ) myEVE_4W++;
			}
	        	//...b quarks...............................................
	        	if ( my_IQ1*my_IQ2 == 1  ){
	        		if ( my_IB1*my_IB2 ==1 ){
					myEVE_bb++;
				} else {
					myEVE_nonbb++;
	        		}	
				if ( (my_IB1+my_IB2) == 4 ) myEVE_4b++;
	        		//.....................discriminate what bbbar events do we have..... 
	                	if ( my_IB1==0 && my_IB2==0 ) mybbbar_00++;
	               	 	if ( my_IB1==0 && my_IB2==1 ) mybbbar_01++;
	                	if ( my_IB1==0 && my_IB2==2 ) mybbbar_02++;
	                	if ( my_IB1==0 && my_IB2==3 ) mybbbar_03++;

	                	if ( my_IB1==1 && my_IB2==0 ) mybbbar_10++;
	                	if ( my_IB1==1 && my_IB2==1 ) mybbbar_11++;
	                	if ( my_IB1==1 && my_IB2==2 ) mybbbar_12++;
	                	if ( my_IB1==1 && my_IB2==3 ) mybbbar_13++;

	                	if ( my_IB1==2 && my_IB2==0 ) mybbbar_20++;
	                	if ( my_IB1==2 && my_IB2==1 ) mybbbar_21++;
	                	if ( my_IB1==2 && my_IB2==2 ) mybbbar_22++;
	                	if ( my_IB1==2 && my_IB2==3 ) mybbbar_23++;
			
	        	        if ( my_IB1==3 && my_IB2==0 ) mybbbar_30++;
	                	if ( my_IB1==3 && my_IB2==1 ) mybbbar_31++;
	                	if ( my_IB1==3 && my_IB2==2 ) mybbbar_32++;
	                	if ( my_IB1==3 && my_IB2==3 ) mybbbar_33++;
			}
	        	//...s quarks...............................................
	        	if ( my_IQ1*my_IQ2 == 1  ){
	        		if ( my_IS1*my_IS2 ==1 ){
					myEVE_ss++;
				} else {
					myEVE_nonss++;
	        		}	
				if ( (my_IS1+my_IS2) == 4 ) myEVE_4s++;
	        		//.....................discriminate what bbbar events do we have..... 
	                	if ( my_IS1==0 && my_IS2==0 ) myssbar_00++;
	               	 	if ( my_IS1==0 && my_IS2==1 ) myssbar_01++;
	                	if ( my_IS1==0 && my_IS2==2 ) myssbar_02++;
	                	if ( my_IS1==0 && my_IS2==3 ) myssbar_03++;

	                	if ( my_IS1==1 && my_IS2==0 ) myssbar_10++;
	                	if ( my_IS1==1 && my_IS2==1 ) myssbar_11++;
	                	if ( my_IS1==1 && my_IS2==2 ) myssbar_12++;
	                	if ( my_IS1==1 && my_IS2==3 ) myssbar_13++;

	                	if ( my_IS1==2 && my_IS2==0 ) myssbar_20++;
	                	if ( my_IS1==2 && my_IS2==1 ) myssbar_21++;
	                	if ( my_IS1==2 && my_IS2==2 ) myssbar_22++;
	                	if ( my_IS1==2 && my_IS2==3 ) myssbar_23++;
			
	        	        if ( my_IS1==3 && my_IS2==0 ) myssbar_30++;
	                	if ( my_IS1==3 && my_IS2==1 ) myssbar_31++;
	                	if ( my_IS1==3 && my_IS2==2 ) myssbar_32++;
	                	if ( my_IS1==3 && my_IS2==3 ) myssbar_33++;
			}
	        	//...d quarks...............................................
	        	if ( my_IQ1*my_IQ2 == 1  ){
	        		if ( my_IDW1*my_IDW2 ==1 ){
					myEVE_dd++;
				} else {
					myEVE_nondd++;
	        		}	
				if ( (my_IDW1+my_IDW2) == 4 ) myEVE_4d++;
	        		//.....................discriminate what ddbar events do we have..... 
	                	if ( my_IDW1==0 && my_IDW2==0 ) myddbar_00++;
	               	 	if ( my_IDW1==0 && my_IDW2==1 ) myddbar_01++;
	                	if ( my_IDW1==0 && my_IDW2==2 ) myddbar_02++;
	                	if ( my_IDW1==0 && my_IDW2==3 ) myddbar_03++;

	                	if ( my_IDW1==1 && my_IDW2==0 ) myddbar_10++;
	                	if ( my_IDW1==1 && my_IDW2==1 ) myddbar_11++;
	                	if ( my_IDW1==1 && my_IDW2==2 ) myddbar_12++;
	                	if ( my_IDW1==1 && my_IDW2==3 ) myddbar_13++;

	                	if ( my_IDW1==2 && my_IDW2==0 ) myddbar_20++;
	                	if ( my_IDW1==2 && my_IDW2==1 ) myddbar_21++;
	                	if ( my_IDW1==2 && my_IDW2==2 ) myddbar_22++;
	                	if ( my_IDW1==2 && my_IDW2==3 ) myddbar_23++;
			
	        	        if ( my_IDW1==3 && my_IDW2==0 ) myddbar_30++;
	                	if ( my_IDW1==3 && my_IDW2==1 ) myddbar_31++;
	                	if ( my_IDW1==3 && my_IDW2==2 ) myddbar_32++;
	                	if ( my_IDW1==3 && my_IDW2==3 ) myddbar_33++;
			}
		}
		// =========================================================
		// ===== AO 8 Oct 2010 ===================== above =========
		// =========================================================


		//root1 = -999.;


		// Ht from Minintuple
		Ht = Ht_Mini;

		// Lepton Lorentz vectors reconstruction
		if(LeptonVec.size() > 1)
		{
			ll = LeptonVec[0] + LeptonVec[1];

			llmiss.SetPxPyPzE(ll.Px() + MissPx, ll.Py() + MissPy, 0., ll.E() + MissPt);
		}
		else
		{
			ll.SetPxPyPzE(0., 0., 0., 0.);

			llmiss.SetPxPyPzE(0., 0., 0., 0.);
		}


		// Hz calculation
		Hz = 0.;
		for(int i = 0; i<LeptonVec.size(); i++)     Hz = Hz+LeptonVec[i].Pz();
		for (int i = 0; i<MyGoodJetVec.size(); i++) Hz = Hz+MyGoodJetVec[i].Pz();

	}

	void EventData::Calculations2(){
		// #############################################################################
		//
		//  purpose: to do some calculations for event selection and reconstruction
		//           (only for events passing some cuts)
		//
		//  authors: fveloso
		//  first version: 23.nov.2006
		//
		//  last change: 05.Nov.2012
		//  by: A.Onofre
		//
		// #############################################################################


		// ---------------------------------------------------------------------------
		// vemos si se puede reconstruir el evento
		// ---------------------------------------------------------------------------

		// variables

		int key = 0;

		TLorentzVector MK_b, MK_bb, MK_l, MK_lb, MK_nu, MK_nub;
	        TLorentzVector AO_t, AO_tbar, AO_Wp, AO_Wn;

		TruthHasSolution = 0;

	        // ======================================================================================
	   	// Clear truth information for all objects
	        // ======================================================================================
		myTruth_WtauDecay = 0;
	   	myTruthLepVec.clear();
	   	myTruthNeuVec.clear();
	   	myTruth_t_Vec.clear();
	   	myTruth_W_Vec.clear();
	   	myTruth_b_Vec.clear();
	        // ======================================================================================

	        // ======================================================================================
	        // Matched Truth with Reconstructed Leptons, jets and missing for Resolution Studies.....
	        // ======================================================================================
	        // Truth information
		myResolution_Truth_Lep.clear();
		myResolution_Truth_Jet.clear();
		myResolution_Truth_Mis.clear();
	        // Reconstructed information
		myResolution_Reco_Lep.clear();
		myResolution_Reco_Jet.clear();
		myResolution_Reco_Mis.clear();  

		// --------------------------------------------------------------------------
		// vemos si se puede reconstruir el evento
		// --------------------------------------------------------------------------
		if ( key == 10 ) TruthHasSolution++;


		// ===============================================
		// Truth and Reco information for Resolution Plots
		// ===============================================
		// -----------------------------------------------
		//                     J E T s  
		//         (leptons and miss. are above)
		// -----------------------------------------------
		// ===============================================
		if( MyGoodJetVec.size() > 1  &&  myTruth_b_Vec.size() > 1  &&  TruthHasSolution > 0 ){

			Int_t    k0=999;
			Int_t    k1=999;

	   		double_t dR0=999.;
	   		double_t dR1=999.;

			// check reco jet for:  myTruth_b_Vec[0]
	                for( int k =0; k<MyGoodJetVec.size(); k++){
	                	double_t dR = MyGoodJetVec[k].DeltaR( myTruth_b_Vec[0] );
	                	if (  ( dR < dR0 )  && ( dR < 0.4 ) ) {
	                	       	k0  =  k;
	                	       	dR0 = dR;
	                	}
	                }
			// check reco jet for:  myTruth_b_Vec[1]
	        	for ( int k=0; k<MyGoodJetVec.size(); k++){
	        		if ( k != k0 ){
	        	        	double_t dR = MyGoodJetVec[k].DeltaR( myTruth_b_Vec[1] );
	        	        	if ( ( dR < dR1 ) && ( dR < 0.4 ) ) {
	        	                	k1  =  k;
	        	                	dR1 = dR;
	        	        	}
		           	}
			}
			// Check if both jets are matched
			if ( ( k0 != 999 ) && ( k1 != 999 ) ){
				// Jet [0] Truth+Reco
	        		myResolution_Truth_Jet.push_back( myTruth_b_Vec[0] );
	        		myResolution_Reco_Jet.push_back( MyGoodJetVec[k0] );
				// Jet [1] Truth+Reco
	        		myResolution_Truth_Jet.push_back( myTruth_b_Vec[1] );
	        		myResolution_Reco_Jet.push_back( MyGoodJetVec[k1] );
			}
		}
		// ===============================================


		// Reconstructed information
	        Ml1b1 = 0.; 
	        Ml2b2 = 0.; 
	        Ml1b2 = 0.; 
	        Ml2b1 = 0.; 
		// Truth information
	        Ml1b1_truth = 0.; 
	        Ml2b2_truth = 0.; 
	        Ml1b2_truth = 0.; 
	        Ml2b1_truth = 0.; 

	        TLorentzVector l1, l2, b1, b2;

		if(LeptonVec.size() > 1 && MyGoodJetVec.size() > 1 && TruthHasSolution > 0 )
		{
		// Reconstructed information
			// leptons (choice is obvious)
			l1 = LeptonVec[0];
			l2 = LeptonVec[1];
			// b jets (choose based on proximity criteria with truth b)		
			Int_t iCase;
	                double_t dR;
	                double_t dRmin = 999.;
			for (Int_t i=0; i<4   ; i++){
			   if ( i == 0 ) dR = MyGoodJetVec[0].DeltaR(MK_b); 
			   if ( i == 1 ) dR = MyGoodJetVec[0].DeltaR(MK_bb); 
			   if ( i == 2 ) dR = MyGoodJetVec[1].DeltaR(MK_b); 
			   if ( i == 3 ) dR = MyGoodJetVec[1].DeltaR(MK_bb); 
			   // check which value is lower
			   if ( dR < dRmin ){
				dRmin = dR ;
				iCase = i  ;			
			   }
			}
			if ( ( iCase == 0 ) || ( iCase == 3 ) ) b1 = MyGoodJetVec[0], b2 = MyGoodJetVec[1];
			if ( ( iCase == 1 ) || ( iCase == 2 ) ) b1 = MyGoodJetVec[1], b2 = MyGoodJetVec[0];
			// build combinations
			Ml1b1 = (l1+b1).M()/GeV; 
			Ml2b2 = (l2+b2).M()/GeV; 
			Ml1b2 = (l1+b2).M()/GeV; 
			Ml2b1 = (l2+b1).M()/GeV; 

		// Truth information
			// build combinations
			Ml1b1_truth = (MK_l  + MK_b ).M()/GeV; 
			Ml2b2_truth = (MK_lb + MK_bb).M()/GeV; 
			Ml1b2_truth = (MK_l  + MK_bb).M()/GeV; 
			Ml2b1_truth = (MK_lb + MK_b ).M()/GeV; 

		}
		// ---------------------------------------------------------------------------
		// si se puede reconstruir, lo reconstruimos
		// ---------------------------------------------------------------------------
		if(TruthHasSolution > 0)
		{

			// ### LEPTONS ###
			TruthLepP = MK_l;
			TruthLepN = MK_lb;

			// ### BS ###
			TruthB    = MK_b;
			TruthBbar = MK_bb;

			// ### NEUTRINOS ###
			TruthNeu    = MK_nu;
			TruthNeubar = MK_nub;

			// ### W BOSONS ###
			TruthWp    = AO_Wp;
			TruthWn    = AO_Wn;

			// ### TOPS ###
			TruthT    = AO_t;
			TruthTbar = AO_tbar;

		        // ---------------------------------------------------------------------------
		        // calculamos los observables para los eventos reconstruidos
		        // ---------------------------------------------------------------------------

	                // ################################
			// ###        COS_THETAS        ###
	                // ################################


	                // ################################
	                // ##    t(tbar) c.m. systems    ##
	                // ################################
	                //...t/tbar...
			TVector3       t_boost, tb_boost, tt_boost;

			//...get top boosts................
			t_boost  =  -(TruthT).BoostVector();
			tb_boost =  -(TruthTbar).BoostVector();
			tt_boost =  -(TruthT + TruthTbar).BoostVector();


	                //.................................
			//...make boost  to t..............
	                //.................................
	                //___b____
			TruthB_BoostedtoT    = TruthB;
			TruthB_BoostedtoT.Boost(t_boost);
	                //___W+___
			TruthWp_BoostedtoT   = TruthWp;
			TruthWp_BoostedtoT.Boost(t_boost);
	                //___l+___
			TruthLepP_BoostedtoT = TruthLepP;
			TruthLepP_BoostedtoT.Boost(t_boost);
	                //___neu__
			TruthNeu_BoostedtoT  = TruthNeu;
			TruthNeu_BoostedtoT.Boost(t_boost);


	                //.................................
			//...make boost  to tbar...........
	                //.................................
	                //___bbar___
			TruthBbar_BoostedtoTbar   = TruthBbar;
			TruthBbar_BoostedtoTbar.Boost(tb_boost);
	                //____W-____
			TruthWn_BoostedtoTbar     = TruthWn;
			TruthWn_BoostedtoTbar.Boost(tb_boost);
	                //____l-____
			TruthLepN_BoostedtoTbar   = TruthLepN;
			TruthLepN_BoostedtoTbar.Boost(tb_boost);
	                //__neubar__
			TruthNeubar_BoostedtoTbar = TruthNeubar;
			TruthNeubar_BoostedtoTbar.Boost(tb_boost);


	                //.................................
			//...make boost to ttbar...........
	                //.................................
	                //___t____
			TruthT_Boostedtottbar   =  TruthT;
			TruthT_Boostedtottbar.Boost(tt_boost);
	                //__tbar__
			TruthTbar_Boostedtottbar  =  TruthTbar;
			TruthTbar_Boostedtottbar.Boost(tt_boost);


	                //.................................
			//....Spin Correlations............
	                //.................................
		        //_____l+__in_t__________
			TruthCos_LepP_T_BoostedtoT = cos(  TruthLepP_BoostedtoT   .Angle (    TruthT_Boostedtottbar.Vect()));
		        //_____nu__in_t__________
			TruthCos_Neu_T_BoostedtoT  = cos(   TruthNeu_BoostedtoT   .Angle (    TruthT_Boostedtottbar.Vect()));
		        //_____b__in_t___________
			TruthCos_B_T_BoostedtoT    = cos(     TruthB_BoostedtoT   .Angle (    TruthT_Boostedtottbar.Vect()));


		        //_____l-__in_tbar_______
			TruthCos_LepN_Tbar_BoostedtoTbar    = cos(  TruthLepN_BoostedtoTbar   .Angle ( TruthTbar_Boostedtottbar.Vect()));
		        //_____nu__in_t__________
			TruthCos_Neubar_Tbar_BoostedtoTbar  = cos(TruthNeubar_BoostedtoTbar   .Angle ( TruthTbar_Boostedtottbar.Vect()));
		        //_____b__in_t___________
			TruthCos_Bbar_Tbar_BoostedtoTbar    = cos(  TruthBbar_BoostedtoTbar   .Angle ( TruthTbar_Boostedtottbar.Vect()));


	                // ################################
	                // ##     W+/- c.m. systems      ##
	                // ################################
	                //...W+/-...
			TVector3       Wp_boost, Wn_boost;

			//...get W+/- boosts................
			Wp_boost  =  -(TruthWp).BoostVector();
			Wn_boost  =  -(TruthWn).BoostVector();

	                //.................................
			//...make boost  to W+.............
	                //.................................
	                //___l+___
			TruthLepP_BoostedtoWp = TruthLepP;
			TruthLepP_BoostedtoWp.Boost(Wp_boost);
	                //___b____
			TruthB_BoostedtoWp    = TruthB;
			TruthB_BoostedtoWp.Boost(Wp_boost);
	                //__neu___
			TruthNeu_BoostedtoWp = TruthNeu;
			TruthNeu_BoostedtoWp.Boost(Wp_boost);

	                //.................................
			//...make boost  to W-.............
	                //.................................
	                //____l-____
			TruthLepN_BoostedtoWn   = TruthLepN;
			TruthLepN_BoostedtoWn.Boost(Wn_boost);
	                //__bbar____
			TruthBbar_BoostedtoWn   = TruthBbar;
			TruthBbar_BoostedtoWn.Boost(Wn_boost);
	                //__neu___
			TruthNeubar_BoostedtoWn = TruthNeubar;
			TruthNeubar_BoostedtoWn.Boost(Wn_boost);

	                //.................................
			//....W Polarizations..............
	                //.................................
		        //_____(l+,b)__in_W+__________
			TruthCos_LepP_B_BoostedtoWp =  -cos(  TruthLepP_BoostedtoWp   .Angle (  TruthB_BoostedtoWp.Vect()));
		        //_____(l-,bbar)__in_W-_______
			TruthCos_LepN_Bbar_BoostedtoWn =  -cos(  TruthLepN_BoostedtoWn   .Angle (  TruthBbar_BoostedtoWn.Vect()));


		}
	}

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
