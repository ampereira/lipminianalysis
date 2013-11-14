    if ( PTtt_NumEl_pT_p == 1 && PTtt_NumEl_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + PTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + PTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.156097; ePTtt_P0_pT = 0.041288; PTtt_P1_pT = -0.002247; ePTtt_P1_pT = 0.000594; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.032231; PTtt_P1_pT = 0.000000; ePTtt_P1_pT = 0.000422; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.226110; ePTtt_P0_pT = 0.000886; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000010; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.259135; ePTtt_P0_pT = 0.002726; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000026; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.269034; ePTtt_P0_pT = 0.255157; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.002371; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.088392; ePTtt_P0_pT = 0.030089; PTtt_P1_pT = -0.001285; ePTtt_P1_pT = 0.000437; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.008644; ePTtt_P0_pT = 0.136906; PTtt_P1_pT = -0.000110; ePTtt_P1_pT = 0.001746; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.164660; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001792; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.168114; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001644; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.290832; ePTtt_P0_pT = 0.017598; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000151; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.067879; ePTtt_P0_pT = 0.033431; PTtt_P1_pT = -0.001024; ePTtt_P1_pT = 0.000504; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.125281; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.001621; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.181704; ePTtt_P0_pT = 0.058547; PTtt_P1_pT = -0.001887; ePTtt_P1_pT = 0.000608; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.257936; ePTtt_P0_pT = 0.000000; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000000; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.325466; ePTtt_P0_pT = 0.307348; PTtt_P1_pT = -0.002442; ePTtt_P1_pT = 0.002306; } 
 
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
