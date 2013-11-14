    if ( ttPTll_NumMu_pT_p == 1 && ttPTll_NumMu_pT_n == 1 ){ 
  
       // == Calculate pT of (l,l) and convert to GeV =========== 
       Pt_tt_ll = tt_ll.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=0  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.358203; ettPTll_P0_pT = 0.009000; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000126; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.388249; ettPTll_P0_pT = 0.014630; ttPTll_P1_pT = -0.005200; ettPTll_P1_pT = 0.000196; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.418498; ettPTll_P0_pT = 0.008634; ttPTll_P1_pT = -0.005200; ettPTll_P1_pT = 0.000107; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.405415; ettPTll_P0_pT = 0.011849; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000146; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 0 ) { ttPTll_P0_pT = 1.482206; ettPTll_P0_pT = 0.017141; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000178; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT=1  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.347429; ettPTll_P0_pT = 0.012822; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000185; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.367878; ettPTll_P0_pT = 0.009878; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000134; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.390058; ettPTll_P0_pT = 0.012290; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000158; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.425115; ettPTll_P0_pT = 0.016779; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000197; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT == 1 ) { ttPTll_P0_pT = 1.484962; ettPTll_P0_pT = 0.000476; ttPTll_P1_pT = -0.005200; ettPTll_P1_pT = 0.000005; } 
  	   //    ttPTll_Njets_pT=2...>5, ttPTll_Nbjets_pT>=2  
       if ( ttPTll_Njets_pT == 2 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.337214; ettPTll_P0_pT = 0.008307; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000123; } 
       if ( ttPTll_Njets_pT == 3 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.359801; ettPTll_P0_pT = 0.009097; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000126; } 
       if ( ttPTll_Njets_pT == 4 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.391832; ettPTll_P0_pT = 0.001690; ttPTll_P1_pT = -0.005000; ettPTll_P1_pT = 0.000022; } 
       if ( ttPTll_Njets_pT == 5 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.424718; ettPTll_P0_pT = 0.000026; ttPTll_P1_pT = -0.005200; ettPTll_P1_pT = 0.000000; } 
       if ( ttPTll_Njets_pT >= 6 && ttPTll_Nbjets_pT >= 2 ) { ttPTll_P0_pT = 1.477623; ettPTll_P0_pT = 0.000008; ttPTll_P1_pT = -0.005200; ettPTll_P1_pT = 0.000000; } 
 
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
