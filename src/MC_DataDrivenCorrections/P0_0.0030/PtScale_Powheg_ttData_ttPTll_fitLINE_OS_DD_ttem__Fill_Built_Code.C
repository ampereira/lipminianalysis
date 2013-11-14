    if ( ( ttPTll_NumMu_pT_p == 1 && ttPTll_NumEl_pT_n == 1 ) || ( ttPTll_NumEl_pT_p == 1 && ttPTll_NumMu_pT_n == 1 ) ){ 
  
       // == Calculate pT of (l,l) and convert to GeV =========== 
       Pt_tt_ll = tt_ll.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.203078; ettPTll_P0_pT = 0.002721; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000039; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.217630; ettPTll_P0_pT = 0.009804; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000131; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.236865; ettPTll_P0_pT = 0.012725; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000156; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.235039; ettPTll_P0_pT = 0.012707; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000157; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.305207; ettPTll_P0_pT = 0.020261; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000193; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.199193; ettPTll_P0_pT = 0.000886; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000013; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.211844; ettPTll_P0_pT = 0.001335; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000018; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.227710; ettPTll_P0_pT = 0.002737; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000035; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.242804; ettPTll_P0_pT = 0.013049; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000156; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.294198; ettPTll_P0_pT = 0.003665; ttPTll_P1_pT = -0.003100; ettPTll_P1_pT = 0.000039; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.192600; ettPTll_P0_pT = 0.001304; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000020; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.205375; ettPTll_P0_pT = 0.001512; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000021; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.220211; ettPTll_P0_pT = 0.002704; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000036; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.238499; ettPTll_P0_pT = 0.011743; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000143; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.250356; ettPTll_P0_pT = 0.013247; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000153; } 
 
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
       ttPTll_ScFac_pT = ttPTll_P0_pT + ttPTll_P1_pT *  Pt_tt_ll; 
       myWeight *= ttPTll_ScFac_pT * HFOR_ttPTll_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
