    if ( ( PTtt_NumMu_pT_p == 1 && PTtt_NumEl_pT_n == 1 ) || ( PTtt_NumEl_pT_p == 1 && PTtt_NumMu_pT_n == 1 ) ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + PTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + PTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.150497; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.002166; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.031838; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000414; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.093323; ePTtt_P0_pT = 0.063962; PTtt_P1_pT = -0.001028; ePTtt_P1_pT = 0.000705; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.074041; ePTtt_P0_pT = 0.200447; PTtt_P1_pT = -0.000706; ePTtt_P1_pT = 0.001911; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.190154; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001699; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.034997; ePTtt_P0_pT = 0.016859; PTtt_P1_pT = -0.000510; ePTtt_P1_pT = 0.000246; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.013941; ePTtt_P0_pT = 0.022579; PTtt_P1_pT = -0.000177; ePTtt_P1_pT = 0.000287; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.019126; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000208; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.191378; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001781; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.036551; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000300; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.036828; ePTtt_P0_pT = 0.020039; PTtt_P1_pT = -0.000558; ePTtt_P1_pT = 0.000303; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.016628; ePTtt_P0_pT = 0.024110; PTtt_P1_pT = -0.000211; ePTtt_P1_pT = 0.000307; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.010064; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000108; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.099402; ePTtt_P0_pT = 0.065023; PTtt_P1_pT = -0.000903; ePTtt_P1_pT = 0.000591; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.055889; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000449; } 
 
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
