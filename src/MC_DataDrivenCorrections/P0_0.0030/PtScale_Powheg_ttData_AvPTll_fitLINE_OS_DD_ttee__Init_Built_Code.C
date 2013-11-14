    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_Powheg_AvPTll_OS_ttDD_ee.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t AvPTll_NumMu_pT_p =  0; Int_t AvPTll_NumMu_pT_n =  0; 
    Int_t AvPTll_NumEl_pT_p =  0; Int_t AvPTll_NumEl_pT_n =  0; 
    // == Define AvPTll_Njets,AvPTll_Nbjets ================ 
    Int_t AvPTll_Njets_pT  = jet_n;  
    Int_t AvPTll_Nbjets_pT =     0;  
    // == Missing Px and Py ================== 
    Double_t  AvPTll_pXmiss = met_et * cos(met_phi);  
    Double_t  AvPTll_pYmiss = met_et * sin(met_phi);  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_AvPTll_ScFac_pT =     1.;  
    Double_t eHFOR_AvPTll_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   AvPTll_P0_pT = 0.;  Double_t  eAvPTll_P0_pT = 0.; 
    Double_t   AvPTll_P1_pT = 0.;  Double_t  eAvPTll_P1_pT = 0.; 
    Double_t  AvPTll_ScFac_pT =  1.;  
    Double_t eAvPTll_ScFac_pT =  0.;  
  
    // == Loop over objects ==================== 
    Double_t Pt_Xsys = 0.; 
    // ...ALL Leptons........................... 
    for (Int_t k=0; k<lep_n; ++k)  { 
        // ...muons.................. 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { AvPTll_NumMu_pT_p++; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { AvPTll_NumMu_pT_n++; } 
        // ...electrons.............. 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { AvPTll_NumEl_pT_p++; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { AvPTll_NumEl_pT_n++; } 
        Pt_Xsys += lep_pt[k];    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) AvPTll_Nbjets_pT++ ; 
    } 
