    if ( AvPTll_NumEl_pT_p == 1 && AvPTll_NumEl_pT_n == 1 ){ 
  
       // == Calculate (pT_l1+pT_l2)/2. and convert to GeV =========== 
       Pt_Xsys *=  ( 0.5 * 0.001 ); 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.103886; eAvPTll_P0_pT = 0.006494; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000100; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.093173; eAvPTll_P0_pT = 0.013246; AvPTll_P1_pT = -0.001400; eAvPTll_P1_pT = 0.000199; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.109620; eAvPTll_P0_pT = 0.000097; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.092445; eAvPTll_P0_pT = 0.013204; AvPTll_P1_pT = -0.001400; eAvPTll_P1_pT = 0.000200; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.125929; eAvPTll_P0_pT = 0.011797; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000150; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.101989; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.105013; eAvPTll_P0_pT = 0.011942; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000182; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.111283; eAvPTll_P0_pT = 0.001549; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000022; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.116222; eAvPTll_P0_pT = 0.000007; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.100353; eAvPTll_P0_pT = 0.010204; AvPTll_P1_pT = -0.001400; eAvPTll_P1_pT = 0.000142; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.099417; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.103533; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.107300; eAvPTll_P0_pT = 0.000001; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.113582; eAvPTll_P0_pT = 0.000047; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000001; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.115381; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001600; eAvPTll_P1_pT = 0.000000; } 
 
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
