    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_Powheg_AllPTtt_OS_ttDD_em.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t AllPTtt_NumMu_pT_p =  0; Int_t AllPTtt_NumMu_pT_n =  0; 
    Int_t AllPTtt_NumEl_pT_p =  0; Int_t AllPTtt_NumEl_pT_n =  0; 
    // == Define AllPTtt_Njets,AllPTtt_Nbjets ================ 
    Int_t AllPTtt_Njets_pT  = jet_n;  
    Int_t AllPTtt_Nbjets_pT =     0;  
    // == Missing Px and Py ================== 
    Double_t  AllPTtt_pXmiss = met_et * cos(met_phi);  
    Double_t  AllPTtt_pYmiss = met_et * sin(met_phi);  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_AllPTtt_ScFac_pT =     1.;  
    Double_t eHFOR_AllPTtt_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   AllPTtt_P0_pT = 0.;  Double_t  eAllPTtt_P0_pT = 0.; 
    Double_t   AllPTtt_P1_pT = 0.;  Double_t  eAllPTtt_P1_pT = 0.; 
    Double_t   AllPTtt_P2_pT = 0.;  Double_t  eAllPTtt_P2_pT = 0.; 
    Double_t  AllPTtt_ScFac_pT =  1.;  
    Double_t eAllPTtt_ScFac_pT =  0.;  
  
    // == Loop over objects ==================== 
    TLorentzVector Xsys; Xsys.SetPtEtaPhiE( 0., 0., 0., 0.); 
    TLorentzVector  auxAllPTtt; 
    Double_t Px_Xsys; 
    Double_t Py_Xsys; 
    Double_t Pt_Xsys; 
    // ...ALL Leptons........................... 
    for (Int_t k=0; k<lep_n; ++k)  { 
        auxAllPTtt.SetPtEtaPhiE( lep_pt[k], lep_eta[k], lep_phi[k], lep_E[k]); 
        // ...increase Xsys pT....... 
        Xsys += auxAllPTtt;        // ...muons.................. 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { AllPTtt_NumMu_pT_p++; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { AllPTtt_NumMu_pT_n++; } 
        // ...electrons.............. 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { AllPTtt_NumEl_pT_p++; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { AllPTtt_NumEl_pT_n++; } 
    } 
    // ...ALL Jets.............................. 
    for (Int_t k=0; k<jet_n; ++k)  { 
        auxAllPTtt.SetPtEtaPhiE( jet_pt[k], jet_eta[k], jet_phi[k], jet_E[k]); 
        // ...increase Xsys pT....... 
        Xsys += auxAllPTtt;    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) AllPTtt_Nbjets_pT++ ; 
    } 
