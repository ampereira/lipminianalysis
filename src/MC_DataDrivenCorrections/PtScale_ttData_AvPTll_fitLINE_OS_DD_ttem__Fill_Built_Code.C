    if ( ( AvPTll_NumMu_pT_p == 1 && AvPTll_NumEl_pT_n == 1 ) || ( AvPTll_NumEl_pT_p == 1 && AvPTll_NumMu_pT_n == 1 ) ){ 
  
       // == Calculate (pT_l1+pT_l2)/2. and convert to GeV =========== 
       Pt_Xsys *=  ( 0.5 * 0.001 ); 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000062; eAvPTll_P0_pT = 0.000032; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000063; eAvPTll_P0_pT = 0.000053; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000066; eAvPTll_P0_pT = 0.000066; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000066; eAvPTll_P0_pT = 0.000045; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000072; eAvPTll_P0_pT = 0.000046; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.152606; eAvPTll_P0_pT = 0.000300; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000005; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.156025; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.106071; eAvPTll_P0_pT = 0.059936; AvPTll_P1_pT = -0.001635; eAvPTll_P1_pT = 0.000924; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.168740; eAvPTll_P0_pT = 0.000146; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000002; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.185219; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.146799; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.153516; eAvPTll_P0_pT = 0.000033; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.159109; eAvPTll_P0_pT = 0.000006; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.164922; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.172308; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( hfor == 0 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( hfor == 0 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( hfor == 1 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( hfor == 1 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( hfor == 3 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( hfor == 3 && AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { HFOR_AvPTll_ScFac_pT = 1.000000; eHFOR_AvPTll_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       AvPTll_ScFac_pT = AvPTll_P0_pT + AvPTll_P1_pT * Pt_Xsys; 
       myWeight *= AvPTll_ScFac_pT * HFOR_AvPTll_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
