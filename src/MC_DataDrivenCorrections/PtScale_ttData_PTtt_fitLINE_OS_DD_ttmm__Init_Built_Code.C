    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_PTtt_OS_ttDD_mm_ttData.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t PTtt_NumMu_pT_p =  0; Int_t PTtt_NumMu_pT_n =  0; 
    Int_t PTtt_NumEl_pT_p =  0; Int_t PTtt_NumEl_pT_n =  0; 
    // == Define PTtt_Njets,PTtt_Nbjets ================ 
    Int_t PTtt_Njets_pT  = jet_n;  
    Int_t PTtt_Nbjets_pT =     0;  
    // == Missing Px and Py ================== 
    Double_t  PTtt_pXmiss = met_et * cos(met_phi);  
    Double_t  PTtt_pYmiss = met_et * sin(met_phi);  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_PTtt_ScFac_pT =     1.;  
    Double_t eHFOR_PTtt_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   PTtt_P0_pT = 0.;  Double_t  ePTtt_P0_pT = 0.; 
    Double_t   PTtt_P1_pT = 0.;  Double_t  ePTtt_P1_pT = 0.; 
    Double_t  PTtt_ScFac_pT =  1.;  
    Double_t ePTtt_ScFac_pT =  0.;  
  
    // == Loop over objects ==================== 
    TLorentzVector Xsys; Xsys.SetPtEtaPhiE( 0., 0., 0., 0.); 
    TLorentzVector  auxPTtt; 
    Double_t Px_Xsys; 
    Double_t Py_Xsys; 
    Double_t Pt_Xsys; 
    // ...ALL Leptons........................... 
    for (Int_t k=0; k<lep_n; ++k)  { 
        auxPTtt.SetPtEtaPhiE( lep_pt[k], lep_eta[k], lep_phi[k], lep_E[k]); 
        // ...increase Xsys pT....... 
        Xsys += auxPTtt;        // ...muons.................. 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { PTtt_NumMu_pT_p++; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { PTtt_NumMu_pT_n++; } 
        // ...electrons.............. 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { PTtt_NumEl_pT_p++; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { PTtt_NumEl_pT_n++; } 
    } 
    // ...Two highest pT jets.............................. 
    for (Int_t k=0; k<2; ++k)  { 
        auxPTtt.SetPtEtaPhiE( jet_pt[k], jet_eta[k], jet_phi[k], jet_E[k]); 
        // ...increase Xsys pT....... 
        Xsys += auxPTtt;    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) PTtt_Nbjets_pT++ ; 
    } 
