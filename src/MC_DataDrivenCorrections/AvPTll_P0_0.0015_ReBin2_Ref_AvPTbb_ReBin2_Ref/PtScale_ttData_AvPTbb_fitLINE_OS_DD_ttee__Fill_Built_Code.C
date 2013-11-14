    if ( AvPTbb_NumEl_pT_p == 1 && AvPTbb_NumEl_pT_n == 1 ){ 
  
       // == Calculate (pT_j1+pT_j2)/2. and convert to GeV =========== 
       Pt_AvPTbb_Xsys = ( jet_pt[0] + jet_pt[1] ) * 0.5 * 0.001 ; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.195840; eAvPTbb_P0_pT = 0.162368; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002487; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.234748; eAvPTbb_P0_pT = 0.188959; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002415; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.284543; eAvPTbb_P0_pT = 0.238017; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002509; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.257583; AvPTbb_P1_pT = -0.000000; eAvPTbb_P1_pT = 0.002337; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.294016; AvPTbb_P1_pT = -0.000000; eAvPTbb_P1_pT = 0.002366; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.016429; eAvPTbb_P0_pT = 0.180643; AvPTbb_P1_pT = -0.000233; eAvPTbb_P1_pT = 0.002563; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.257205; eAvPTbb_P0_pT = 0.172366; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002010; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.146210; eAvPTbb_P0_pT = 0.118757; AvPTbb_P1_pT = -0.001427; eAvPTbb_P1_pT = 0.001159; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.358221; eAvPTbb_P0_pT = 0.000442; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.000004; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.416527; AvPTbb_P1_pT = -0.000000; eAvPTbb_P1_pT = 0.003000; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.225511; eAvPTbb_P0_pT = 0.021596; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.000287; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.246253; eAvPTbb_P0_pT = 0.136900; AvPTbb_P1_pT = -0.002749; eAvPTbb_P1_pT = 0.001528; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.309363; eAvPTbb_P0_pT = 0.262349; AvPTbb_P1_pT = -0.002913; eAvPTbb_P1_pT = 0.002470; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.000003; AvPTbb_P1_pT = 0.000000; eAvPTbb_P1_pT = 0.000000; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.427583; eAvPTbb_P0_pT = 0.000251; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.000002; } 
 
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
