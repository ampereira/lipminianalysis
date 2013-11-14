    if ( PTtt_NumMu_pT_p == 1 && PTtt_NumMu_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + PTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + PTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.029243; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000425; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.052554; ePTtt_P0_pT = 0.046721; PTtt_P1_pT = -0.000663; ePTtt_P1_pT = 0.000589; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.031197; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000344; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.042928; ePTtt_P0_pT = 0.212965; PTtt_P1_pT = -0.000418; ePTtt_P1_pT = 0.002073; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.051211; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000409; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.018308; ePTtt_P0_pT = 0.021846; PTtt_P1_pT = -0.000266; ePTtt_P1_pT = 0.000318; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.008445; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000107; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.038460; ePTtt_P0_pT = 0.046141; PTtt_P1_pT = -0.000420; ePTtt_P1_pT = 0.000504; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.021037; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000206; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.229850; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001935; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.021089; ePTtt_P0_pT = 0.026105; PTtt_P1_pT = -0.000316; ePTtt_P1_pT = 0.000391; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.038923; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000495; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.028630; PTtt_P1_pT = 0.000000; ePTtt_P1_pT = 0.000313; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.015988; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000153; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.292768; ePTtt_P0_pT = 0.176489; PTtt_P1_pT = -0.002351; ePTtt_P1_pT = 0.001417; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       PTtt_ScFac_pT = PTtt_P0_pT + PTtt_P1_pT * Pt_Xsys; 
       myWeight *= PTtt_ScFac_pT * HFOR_PTtt_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
