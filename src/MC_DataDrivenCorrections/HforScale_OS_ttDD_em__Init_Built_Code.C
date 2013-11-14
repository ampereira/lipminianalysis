    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by HforScale_OS_ttDD_em.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t ttNumMu_p =  0; Int_t ttNumMu_n =  0; 
    Int_t ttNumEl_p =  0; Int_t ttNumEl_n =  0; 
    // == Define ttNjets,ttNbjets ================ 
    Int_t ttNjets  = jet_n;  
    Int_t ttNbjets =     0;  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_ttScFac =     1.;  
    Double_t eHFOR_ttScFac =     0.;  
    // == Multiplicity Scale Factors ========= 
    Double_t       ttScFac =     1.;  
    Double_t      ettScFac =     0.;  
  
    // == Loop over leptons ==================== 
    for (Int_t k=0; k<lep_n; ++k)  { 
        // ...muons....... 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) ttNumMu_p++; 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) ttNumMu_n++; 
        // ...electrons... 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) ttNumEl_p++; 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) ttNumEl_n++; 
    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) ttNbjets++ ; 
    } 
