    if ( ( AvPTll_NumMu_pT_p == 1 && AvPTll_NumEl_pT_n == 1 ) || ( AvPTll_NumEl_pT_p == 1 && AvPTll_NumMu_pT_n == 1 ) ){ 
  
       // == Calculate (pT_l1+pT_l2)/2. and convert to GeV =========== 
       Pt_Xsys *=  ( 0.5 * 0.001 ); 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.106685; eAvPTll_P0_pT = 0.015688; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000250; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.083541; eAvPTll_P0_pT = 0.012835; AvPTll_P1_pT = -0.001309; eAvPTll_P1_pT = 0.000201; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.113921; eAvPTll_P0_pT = 0.026616; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000397; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.101820; eAvPTll_P0_pT = 0.020339; AvPTll_P1_pT = -0.001536; eAvPTll_P1_pT = 0.000307; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.124287; eAvPTll_P0_pT = 0.001823; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000025; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.104890; eAvPTll_P0_pT = 0.000154; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000002; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.106748; eAvPTll_P0_pT = 0.000003; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.084823; eAvPTll_P0_pT = 0.024868; AvPTll_P1_pT = -0.001300; eAvPTll_P1_pT = 0.000381; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.115227; eAvPTll_P0_pT = 0.001219; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000018; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.128000; eAvPTll_P0_pT = 0.000126; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000002; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.076897; eAvPTll_P0_pT = 0.016279; AvPTll_P1_pT = -0.001300; eAvPTll_P1_pT = 0.000275; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.087805; eAvPTll_P0_pT = 0.014975; AvPTll_P1_pT = -0.001427; eAvPTll_P1_pT = 0.000243; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.108846; eAvPTll_P0_pT = 0.000005; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.113327; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.118206; eAvPTll_P0_pT = 0.000000; AvPTll_P1_pT = -0.001700; eAvPTll_P1_pT = 0.000000; } 
 
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
