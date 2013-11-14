    if ( AllPTtt_NumEl_pT_p == 1 && AllPTtt_NumEl_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + AllPTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + AllPTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.156097; eAllPTtt_P0_pT = 0.041288; AllPTtt_P1_pT = -0.002247; eAllPTtt_P1_pT = 0.000594; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.161374; eAllPTtt_P0_pT = 0.045410; AllPTtt_P1_pT = -0.002248; eAllPTtt_P1_pT = 0.000633; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000000; eAllPTtt_P0_pT = 0.176838; AllPTtt_P1_pT = -0.000000; eAllPTtt_P1_pT = 0.002295; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.221525; eAllPTtt_P0_pT = 0.000000; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.219561; eAllPTtt_P0_pT = 0.043787; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000499; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.088392; eAllPTtt_P0_pT = 0.030089; AllPTtt_P1_pT = -0.001285; eAllPTtt_P1_pT = 0.000437; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.013072; eAllPTtt_P0_pT = 0.035585; AllPTtt_P1_pT = -0.000180; eAllPTtt_P1_pT = 0.000491; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.000000; eAllPTtt_P0_pT = 0.131902; AllPTtt_P1_pT = -0.000000; eAllPTtt_P1_pT = 0.001655; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.165621; eAllPTtt_P0_pT = 0.141409; AllPTtt_P1_pT = -0.001846; eAllPTtt_P1_pT = 0.001577; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.000000; eAllPTtt_P0_pT = 0.217573; AllPTtt_P1_pT = -0.000000; eAllPTtt_P1_pT = 0.002409; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.067879; eAllPTtt_P0_pT = 0.033431; AllPTtt_P1_pT = -0.001024; eAllPTtt_P1_pT = 0.000504; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.004762; eAllPTtt_P0_pT = 0.147547; AllPTtt_P1_pT = -0.000067; eAllPTtt_P1_pT = 0.002080; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.170699; eAllPTtt_P0_pT = 0.054357; AllPTtt_P1_pT = -0.002129; eAllPTtt_P1_pT = 0.000678; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.200173; eAllPTtt_P0_pT = 0.129411; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.001616; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.243057; eAllPTtt_P0_pT = 0.012550; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000129; } 
 
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
