    if ( ( PTtt_NumMu_pT_p == 1 && PTtt_NumEl_pT_n == 1 ) || ( PTtt_NumEl_pT_p == 1 && PTtt_NumMu_pT_n == 1 ) ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + PTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + PTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000069; ePTtt_P0_pT = 0.000035; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.000039; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000091; ePTtt_P0_pT = 0.000053; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000105; ePTtt_P0_pT = 0.000087; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000112; ePTtt_P0_pT = 0.000069; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.052903; ePTtt_P0_pT = 0.025628; PTtt_P1_pT = -0.000771; ePTtt_P1_pT = 0.000373; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.031510; ePTtt_P0_pT = 0.033303; PTtt_P1_pT = -0.000400; ePTtt_P1_pT = 0.000423; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.130881; ePTtt_P0_pT = 0.050497; PTtt_P1_pT = -0.001423; ePTtt_P1_pT = 0.000549; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.268620; ePTtt_P0_pT = 0.009542; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000089; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.057189; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000469; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.012419; ePTtt_P0_pT = 0.028350; PTtt_P1_pT = -0.000188; ePTtt_P1_pT = 0.000429; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.082912; ePTtt_P0_pT = 0.033884; PTtt_P1_pT = -0.001054; ePTtt_P1_pT = 0.000431; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.044872; ePTtt_P0_pT = 0.055099; PTtt_P1_pT = -0.000480; ePTtt_P1_pT = 0.000590; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.056087; ePTtt_P0_pT = 0.089275; PTtt_P1_pT = -0.000510; ePTtt_P1_pT = 0.000811; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.311488; ePTtt_P0_pT = 0.000018; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000000; } 
 
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
