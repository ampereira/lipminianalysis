    if ( AvPTll_NumMu_pT_p == 1 && AvPTll_NumMu_pT_n == 1 ){ 
  
       // == Calculate (pT_l1+pT_l2)/2. and convert to GeV =========== 
       Pt_Xsys *=  ( 0.5 * 0.001 ); 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000065; eAvPTll_P0_pT = 0.000034; AvPTll_P1_pT = -0.000001; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.000052; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.000050; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.000034; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.000070; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.000001; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.155787; eAvPTll_P0_pT = 0.001422; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000023; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.160942; eAvPTll_P0_pT = 0.032936; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000512; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.165059; eAvPTll_P0_pT = 0.000046; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.107249; eAvPTll_P0_pT = 0.103243; AvPTll_P1_pT = -0.001534; eAvPTll_P1_pT = 0.001477; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.180235; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.150943; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.157104; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.163461; eAvPTll_P0_pT = 0.000022; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.168217; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.186200; eAvPTll_P0_pT = 0.000051; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000001; } 
 
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
