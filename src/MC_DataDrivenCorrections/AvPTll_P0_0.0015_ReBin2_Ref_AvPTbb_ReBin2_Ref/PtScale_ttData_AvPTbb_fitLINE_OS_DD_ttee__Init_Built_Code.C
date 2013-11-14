    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_AvPTbb_OS_ttDD_ee_ttData.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t AvPTbb_NumMu_pT_p =  0; Int_t AvPTbb_NumMu_pT_n =  0; 
    Int_t AvPTbb_NumEl_pT_p =  0; Int_t AvPTbb_NumEl_pT_n =  0; 
    // == Define AvPTbb_Njets,AvPTbb_Nbjets ================ 
    Int_t AvPTbb_Njets_pT  = jet_n;  
    Int_t AvPTbb_Nbjets_pT =     0;  
    // == Missing Px and Py ================== 
    Double_t  AvPTbb_pXmiss = met_et * cos(met_phi);  
    Double_t  AvPTbb_pYmiss = met_et * sin(met_phi);  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_AvPTbb_ScFac_pT =     1.;  
    Double_t eHFOR_AvPTbb_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   AvPTbb_P0_pT = 0.;  Double_t  eAvPTbb_P0_pT = 0.; 
    Double_t   AvPTbb_P1_pT = 0.;  Double_t  eAvPTbb_P1_pT = 0.; 
    Double_t  AvPTbb_ScFac_pT =  1.;  
    Double_t eAvPTbb_ScFac_pT =  0.;  
  
    // == Loop over objects ==================== 
    Double_t Pt_AvPTbb_Xsys = 0.; 
    // ...ALL Leptons........................... 
    for (Int_t k=0; k<lep_n; ++k)  { 
        // ...muons.................. 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { AvPTbb_NumMu_pT_p++; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { AvPTbb_NumMu_pT_n++; } 
        // ...electrons.............. 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { AvPTbb_NumEl_pT_p++; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { AvPTbb_NumEl_pT_n++; } 
    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) AvPTbb_Nbjets_pT++ ; 
    } 
