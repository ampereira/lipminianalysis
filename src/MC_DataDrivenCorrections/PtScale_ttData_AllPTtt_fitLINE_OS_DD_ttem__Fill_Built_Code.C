    if ( ( AllPTtt_NumMu_pT_p == 1 && AllPTtt_NumEl_pT_n == 1 ) || ( AllPTtt_NumEl_pT_p == 1 && AllPTtt_NumMu_pT_n == 1 ) ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + AllPTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + AllPTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000069; eAllPTtt_P0_pT = 0.000035; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000073; eAllPTtt_P0_pT = 0.000046; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000081; eAllPTtt_P0_pT = 0.000068; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000087; eAllPTtt_P0_pT = 0.000046; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.000092; eAllPTtt_P0_pT = 0.000049; AllPTtt_P1_pT = -0.000001; eAllPTtt_P1_pT = 0.000001; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.052903; eAllPTtt_P0_pT = 0.025628; AllPTtt_P1_pT = -0.000771; eAllPTtt_P1_pT = 0.000373; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.044033; eAllPTtt_P0_pT = 0.032790; AllPTtt_P1_pT = -0.000601; eAllPTtt_P1_pT = 0.000447; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.131827; eAllPTtt_P0_pT = 0.046789; AllPTtt_P1_pT = -0.001633; eAllPTtt_P1_pT = 0.000580; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.219430; eAllPTtt_P0_pT = 0.005582; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000064; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.230748; eAllPTtt_P0_pT = 0.000003; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.012419; eAllPTtt_P0_pT = 0.028350; AllPTtt_P1_pT = -0.000188; eAllPTtt_P1_pT = 0.000429; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.058281; eAllPTtt_P0_pT = 0.033865; AllPTtt_P1_pT = -0.000815; eAllPTtt_P1_pT = 0.000474; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.179244; eAllPTtt_P0_pT = 0.037754; AllPTtt_P1_pT = -0.002295; eAllPTtt_P1_pT = 0.000483; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.212352; eAllPTtt_P0_pT = 0.000033; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.217226; eAllPTtt_P0_pT = 0.179184; AllPTtt_P1_pT = -0.002500; eAllPTtt_P1_pT = 0.002062; } 
 
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
