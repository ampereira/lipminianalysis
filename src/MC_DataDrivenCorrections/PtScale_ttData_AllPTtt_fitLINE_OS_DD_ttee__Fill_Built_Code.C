    if ( AllPTtt_NumEl_pT_p == 1 && AllPTtt_NumEl_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + AllPTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + AllPTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000069; eAllPTtt_P0_pT = 0.000067; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000072; eAllPTtt_P0_pT = 0.000037; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000077; eAllPTtt_P0_pT = 0.000054; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000089; eAllPTtt_P0_pT = 0.000000; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000088; eAllPTtt_P0_pT = 0.000008; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.172032; eAllPTtt_P0_pT = 0.000018; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.181318; eAllPTtt_P0_pT = 0.112644; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.001553; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.155629; eAllPTtt_P0_pT = 0.119456; AllPTtt_P1_pT = -0.001953; eAllPTtt_P1_pT = 0.001499; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.224244; eAllPTtt_P0_pT = 0.000001; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.225795; eAllPTtt_P0_pT = 0.000611; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000007; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.165792; eAllPTtt_P0_pT = 0.000000; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.177328; eAllPTtt_P0_pT = 0.000000; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.200478; eAllPTtt_P0_pT = 0.128029; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.001597; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.200173; eAllPTtt_P0_pT = 0.000009; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.243057; eAllPTtt_P0_pT = 0.000003; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       AllPTtt_ScFac_pT = AllPTtt_P0_pT + AllPTtt_P1_pT * Pt_Xsys; 
       myWeight *= AllPTtt_ScFac_pT * HFOR_AllPTtt_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
