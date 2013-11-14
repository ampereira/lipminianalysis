    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // :: Output Scale Factors: Automatically built by PtScale_3dist_OS_DD_Zee.C ::  
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
    // == Define muons,electrons ============= 
    Int_t NumMu_pT_p =  0; Int_t NumMu_pT_n =  0; 
    Int_t NumEl_pT_p =  0; Int_t NumEl_pT_n =  0; 
    // == Define Njets,Nbjets ================ 
    Int_t Njets_pT  = jet_n;  
    Int_t Nbjets_pT =     0;  
    // == HFOR Scale Factors ================= 
    Double_t  HFOR_ScFac_pT =     1.;  
    Double_t eHFOR_ScFac_pT =     0.;  
    // == Pt Scale Factors ========= 
    Double_t   P0_pT = 0.;  Double_t  eP0_pT = 0.; 
    Double_t   P1_pT = 0.;  Double_t  eP1_pT = 0.; 
    Double_t  ScFac_pT =  1.;  
    Double_t eScFac_pT =  0.;  
  
    // == Loop over leptons ==================== 
    TLorentzVector Z_mm; Z_mm.SetPtEtaPhiE( 0., 0., 0., 0.); 
    TLorentzVector Z_ee; Z_ee.SetPtEtaPhiE( 0., 0., 0., 0.); 
    TLorentzVector  aux; 
    Double_t Pt_Zll; 
    for (Int_t k=0; k<lep_n; ++k)  { 
        aux.SetPtEtaPhiE( lep_pt[k], lep_eta[k], lep_phi[k], lep_E[k]); 
        // ...muons....... 
        if ( fabs(lep_type[k])==13 && lep_charge[k]>0 ) { NumMu_pT_p++; Z_mm += aux; } 
        if ( fabs(lep_type[k])==13 && lep_charge[k]<0 ) { NumMu_pT_n++; Z_mm += aux; } 
        // ...electrons... 
        if ( fabs(lep_type[k])==11 && lep_charge[k]>0 ) { NumEl_pT_p++; Z_ee += aux; } 
        if ( fabs(lep_type[k])==11 && lep_charge[k]<0 ) { NumEl_pT_n++; Z_ee += aux; } 
    } 
  
    // == Loop over jets ======================= 
    for (Int_t k=0; k<jet_n; ++k)  { 
        if ( BTagCut != 999  &&  jet_MV1[k] > BTagCut ) Nbjets_pT++ ; 
    } 
