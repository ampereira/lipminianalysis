    if ( AllPTtt_NumMu_pT_p == 1 && AllPTtt_NumMu_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + AllPTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + AllPTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.084448; eAllPTtt_P0_pT = 0.200886; AllPTtt_P1_pT = 0.000350; eAllPTtt_P1_pT = 0.000302; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.152675; eAllPTtt_P0_pT = 0.395779; AllPTtt_P1_pT = 0.001433; eAllPTtt_P1_pT = 0.000740; AllPTtt_P2_pT = -0.000014; eAllPTtt_P2_pT = 0.000004; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.393603; eAllPTtt_P0_pT = 0.577403; AllPTtt_P1_pT = 0.000753; eAllPTtt_P1_pT = 0.001352; AllPTtt_P2_pT = -0.000012; eAllPTtt_P2_pT = 0.000007; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.191734; eAllPTtt_P0_pT = 0.799268; AllPTtt_P1_pT = -0.000205; eAllPTtt_P1_pT = 0.000992; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000016; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.349653; eAllPTtt_P0_pT = 0.146316; AllPTtt_P1_pT = -0.002376; eAllPTtt_P1_pT = 0.000479; AllPTtt_P2_pT = -0.000004; eAllPTtt_P2_pT = 0.000002; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.125212; eAllPTtt_P0_pT = 0.255659; AllPTtt_P1_pT = 0.000312; eAllPTtt_P1_pT = 0.000393; AllPTtt_P2_pT = -0.000004; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.088329; eAllPTtt_P0_pT = 0.170545; AllPTtt_P1_pT = 0.000375; eAllPTtt_P1_pT = 0.000210; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000001; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.088580; eAllPTtt_P0_pT = 0.763747; AllPTtt_P1_pT = 0.000397; eAllPTtt_P1_pT = 0.000308; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000013; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.028324; eAllPTtt_P0_pT = 0.241766; AllPTtt_P1_pT = 0.000604; eAllPTtt_P1_pT = 0.000544; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.620798; eAllPTtt_P0_pT = 0.991109; AllPTtt_P1_pT = 0.001950; eAllPTtt_P1_pT = 0.001838; AllPTtt_P2_pT = -0.000019; eAllPTtt_P2_pT = 0.000013; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.057825; eAllPTtt_P0_pT = 0.152105; AllPTtt_P1_pT = 0.000359; eAllPTtt_P1_pT = 0.000459; AllPTtt_P2_pT = -0.000004; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.155387; eAllPTtt_P0_pT = 0.333067; AllPTtt_P1_pT = 0.000579; eAllPTtt_P1_pT = 0.000532; AllPTtt_P2_pT = -0.000005; eAllPTtt_P2_pT = 0.000004; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.094641; eAllPTtt_P0_pT = 0.244171; AllPTtt_P1_pT = 0.000465; eAllPTtt_P1_pT = 0.000331; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.234376; eAllPTtt_P0_pT = 0.294748; AllPTtt_P1_pT = -0.000111; eAllPTtt_P1_pT = 0.000525; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000003; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.082759; eAllPTtt_P0_pT = 0.457902; AllPTtt_P1_pT = 0.000015; eAllPTtt_P1_pT = 0.000756; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000015; } 
 
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
       AllPTtt_ScFac_pT = AllPTtt_P0_pT + AllPTtt_P1_pT*Pt_Xsys + AllPTtt_P2_pT*Pt_Xsys*Pt_Xsys; 
       myWeight *= AllPTtt_ScFac_pT * HFOR_AllPTtt_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
