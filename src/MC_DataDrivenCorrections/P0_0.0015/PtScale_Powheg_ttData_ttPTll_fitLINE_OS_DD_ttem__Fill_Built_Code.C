    if ( ( ttPTll_NumMu_pT_p == 1 && ttPTll_NumEl_pT_n == 1 ) || ( ttPTll_NumEl_pT_p == 1 && ttPTll_NumMu_pT_n == 1 ) ){ 
  
       // == Calculate pT of (l,l) and convert to GeV =========== 
       Pt_tt_ll = tt_ll.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.098037; ettPTll_P0_pT = 0.009769; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000139; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.105063; ettPTll_P0_pT = 0.011849; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000158; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.114349; ettPTll_P0_pT = 0.016195; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000198; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.129677; ettPTll_P0_pT = 0.015111; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000186; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.147341; ettPTll_P0_pT = 0.010732; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000102; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.096162; ettPTll_P0_pT = 0.001787; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000026; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.102270; ettPTll_P0_pT = 0.002567; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000035; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.109929; ettPTll_P0_pT = 0.011096; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000141; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.117216; ettPTll_P0_pT = 0.016428; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000196; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.151844; ettPTll_P0_pT = 0.002283; ttPTll_P1_pT = -0.001600; ettPTll_P1_pT = 0.000024; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.092979; ettPTll_P0_pT = 0.002466; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000037; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.099147; ettPTll_P0_pT = 0.003069; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000043; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.106309; ettPTll_P0_pT = 0.010121; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000133; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.115138; ettPTll_P0_pT = 0.013985; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000170; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.120861; ettPTll_P0_pT = 0.014631; ttPTll_P1_pT = -0.001400; ettPTll_P1_pT = 0.000169; } 
 
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
