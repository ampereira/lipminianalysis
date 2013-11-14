    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by HforScale_3dist_OS_DD_Zmm.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t NumMu_p =  0; Int_t NumMu_n =  0; 
    Int_t NumEl_p =  0; Int_t NumEl_n =  0; 
    // == Define Njets,Nbjets ================ 
    Int_t Njets  = jet_n;  
    Int_t Nbjets =     0;  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_ScFac =     1.;  
    Double_t eHFOR_ScFac =     0.;  
    // == Multiplicity Scale Factors ========= 
    Double_t       ScFac =     1.;  
    Double_t      eScFac =     0.;  
  
    // == Loop over leptons ==================== 
    for (Int_t k=0; k<lep_n; ++k)  { 
        // ...muons....... 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) NumMu_p++; 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) NumMu_n++; 
        // ...electrons... 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) NumEl_p++; 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) NumEl_n++; 
    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) Nbjets++ ; 
    } 
