    if ( AvPTbb_NumMu_pT_p == 1 && AvPTbb_NumMu_pT_n == 1 ){ 
  
       // == Calculate (pT_j1+pT_j2)/2. and convert to GeV =========== 
       Pt_AvPTbb_Xsys = ( jet_pt[0] + jet_pt[1] ) * 0.5 * 0.001 ; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.194793; eAvPTbb_P0_pT = 0.149720; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002306; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.246861; eAvPTbb_P0_pT = 0.239880; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002915; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.301050; eAvPTbb_P0_pT = 0.301043; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.003000; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.180884; AvPTbb_P1_pT = -0.000000; eAvPTbb_P1_pT = 0.001657; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.442130; eAvPTbb_P0_pT = 0.440212; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002987; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.115669; eAvPTbb_P0_pT = 0.068102; AvPTbb_P1_pT = -0.001636; eAvPTbb_P1_pT = 0.000963; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.215103; eAvPTbb_P0_pT = 0.067121; AvPTbb_P1_pT = -0.002526; eAvPTbb_P1_pT = 0.000788; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.274595; eAvPTbb_P0_pT = 0.162945; AvPTbb_P1_pT = -0.002699; eAvPTbb_P1_pT = 0.001602; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.135680; eAvPTbb_P0_pT = 0.141462; AvPTbb_P1_pT = -0.001156; eAvPTbb_P1_pT = 0.001206; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.405326; eAvPTbb_P0_pT = 0.274651; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002033; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.173181; eAvPTbb_P0_pT = 0.045914; AvPTbb_P1_pT = -0.002284; eAvPTbb_P1_pT = 0.000605; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.084160; eAvPTbb_P0_pT = 0.058625; AvPTbb_P1_pT = -0.000947; eAvPTbb_P1_pT = 0.000659; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.119457; eAvPTbb_P0_pT = 0.102146; AvPTbb_P1_pT = -0.001145; eAvPTbb_P1_pT = 0.000979; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.218819; eAvPTbb_P0_pT = 0.135562; AvPTbb_P1_pT = -0.001825; eAvPTbb_P1_pT = 0.001130; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.030562; eAvPTbb_P0_pT = 0.376365; AvPTbb_P1_pT = -0.000228; eAvPTbb_P1_pT = 0.002806; } 
 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( hfor == 0 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( hfor == 0 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( hfor == 1 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( hfor == 1 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( hfor == 3 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( hfor == 3 && AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { HFOR_AvPTbb_ScFac_pT = 1.000000; eHFOR_AvPTbb_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       AvPTbb_ScFac_pT = AvPTbb_P0_pT + AvPTbb_P1_pT * Pt_AvPTbb_Xsys; 
       myWeight *= AvPTbb_ScFac_pT * HFOR_AvPTbb_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
