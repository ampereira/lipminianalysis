    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_Powheg_ttPTll_OS_ttDD_mm.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t ttPTll_NumMu_pT_p =  0; Int_t ttPTll_NumMu_pT_n =  0; 
    Int_t ttPTll_NumEl_pT_p =  0; Int_t ttPTll_NumEl_pT_n =  0; 
    // == Define ttPTll_Njets,ttPTll_Nbjets ================ 
    Int_t ttPTll_Njets_pT  = jet_n;  
    Int_t ttPTll_Nbjets_pT =     0;  
    // == Missing Px and Py ================== 
    Double_t  ttPTll_pXmiss = met_et * cos(met_phi);  
    Double_t  ttPTll_pYmiss = met_et * sin(met_phi);  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_ttPTll_ScFac_pT =     1.;  
    Double_t eHFOR_ttPTll_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   ttPTll_P0_pT = 0.;  Double_t  ettPTll_P0_pT = 0.; 
    Double_t   ttPTll_P1_pT = 0.;  Double_t  ettPTll_P1_pT = 0.; 
    Double_t  ttPTll_ScFac_pT =  1.;  
    Double_t ettPTll_ScFac_pT =  0.;  
  
    // == Loop over objects ==================== 
    TLorentzVector tt_ll; tt_ll.SetPtEtaPhiE( 0., 0., 0., 0.); 
    TLorentzVector  ttPTll_aux; 
    Double_t Pt_tt_ll; 
    // ...ALL Leptons........................... 
    for (Int_t k=0; k<lep_n; ++k)  { 
        ttPTll_aux.SetPtEtaPhiE( lep_pt[k], lep_eta[k], lep_phi[k], lep_E[k]); 
        // ...muons.................. 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { ttPTll_NumMu_pT_p++; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { ttPTll_NumMu_pT_n++; } 
        // ...electrons.............. 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { ttPTll_NumEl_pT_p++; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { ttPTll_NumEl_pT_n++; } 
        tt_ll += ttPTll_aux;    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) ttPTll_Nbjets_pT++ ; 
    } 
