    if ( ttPTll_NumEl_pT_p == 1 && ttPTll_NumEl_pT_n == 1 ){ 
  
       // == Calculate pT of (l,l) and convert to GeV =========== 
       Pt_tt_ll = tt_ll.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.116623; ettPTll_P0_pT = 0.008976; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000123; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.109746; ettPTll_P0_pT = 0.008181; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000104; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.127958; ettPTll_P0_pT = 0.010028; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000125; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.122488; ettPTll_P0_pT = 0.017421; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000199; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.127639; ettPTll_P0_pT = 0.000001; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.097842; ettPTll_P0_pT = 0.012725; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000182; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.123840; ettPTll_P0_pT = 0.015460; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000200; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.114756; ettPTll_P0_pT = 0.008398; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000102; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.136827; ettPTll_P0_pT = 0.002811; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000033; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.158326; ettPTll_P0_pT = 0.000057; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000001; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.110716; ettPTll_P0_pT = 0.000199; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000003; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.118541; ettPTll_P0_pT = 0.000003; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000000; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.129197; ettPTll_P0_pT = 0.000000; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000000; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.134996; ettPTll_P0_pT = 0.000253; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000003; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.146046; ettPTll_P0_pT = 0.000029; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000000; } 
 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( hfor == 0 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( hfor == 0 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( hfor == 1 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( hfor == 1 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( hfor == 3 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( hfor == 3 && ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { HFOR_ttPTll_ScFac_pT = 1.000000; eHFOR_ttPTll_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       ttPTll_ScFac_pT = ttPTll_P0_pT + ttPTll_P1_pT * Pt_tt_ll; 
       myWeight *= ttPTll_ScFac_pT * HFOR_ttPTll_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
