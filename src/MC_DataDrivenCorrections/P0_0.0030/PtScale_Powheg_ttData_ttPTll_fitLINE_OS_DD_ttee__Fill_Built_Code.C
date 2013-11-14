    if ( ttPTll_NumEl_pT_p == 1 && ttPTll_NumEl_pT_n == 1 ){ 
  
       // == Calculate pT of (l,l) and convert to GeV =========== 
       Pt_tt_ll = tt_ll.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.211380; ettPTll_P0_pT = 0.011232; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000154; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.227332; ettPTll_P0_pT = 0.013541; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000173; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.231923; ettPTll_P0_pT = 0.012962; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000162; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.271224; ettPTll_P0_pT = 0.015993; ttPTll_P1_pT = -0.003100; ettPTll_P1_pT = 0.000183; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.264395; ettPTll_P0_pT = 0.009861; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000108; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.202673; ettPTll_P0_pT = 0.002594; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000037; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.224460; ettPTll_P0_pT = 0.010219; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000132; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.237709; ettPTll_P0_pT = 0.012002; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000146; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.247998; ettPTll_P0_pT = 0.012918; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000151; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.306757; ettPTll_P0_pT = 0.000112; ttPTll_P1_pT = -0.003100; ettPTll_P1_pT = 0.000001; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.200672; ettPTll_P0_pT = 0.009618; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000139; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.214855; ettPTll_P0_pT = 0.010313; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000139; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.234170; ettPTll_P0_pT = 0.012421; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000154; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.261555; ettPTll_P0_pT = 0.000000; ttPTll_P1_pT = -0.003100; ettPTll_P1_pT = 0.000000; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.264708; ettPTll_P0_pT = 0.018078; ttPTll_P1_pT = -0.002900; ettPTll_P1_pT = 0.000198; } 
 
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
