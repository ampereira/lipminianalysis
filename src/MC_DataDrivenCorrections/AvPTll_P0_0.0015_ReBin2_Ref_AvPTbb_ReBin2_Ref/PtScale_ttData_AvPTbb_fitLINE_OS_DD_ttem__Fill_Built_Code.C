    if ( ( AvPTbb_NumMu_pT_p == 1 && AvPTbb_NumEl_pT_n == 1 ) || ( AvPTbb_NumEl_pT_p == 1 && AvPTbb_NumMu_pT_n == 1 ) ){ 
  
       // == Calculate (pT_j1+pT_j2)/2. and convert to GeV =========== 
       Pt_AvPTbb_Xsys = ( jet_pt[0] + jet_pt[1] ) * 0.5 * 0.001 ; 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=0  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.145276; eAvPTbb_P0_pT = 0.119902; AvPTbb_P1_pT = -0.002258; eAvPTbb_P1_pT = 0.001864; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.220677; eAvPTbb_P0_pT = 0.151371; AvPTbb_P1_pT = -0.002740; eAvPTbb_P1_pT = 0.001879; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.298920; eAvPTbb_P0_pT = 0.193402; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.001941; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.154855; eAvPTbb_P0_pT = 0.258862; AvPTbb_P1_pT = -0.001381; eAvPTbb_P1_pT = 0.002309; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 0 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.003427; AvPTbb_P1_pT = 0.000000; eAvPTbb_P1_pT = 0.000027; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT=1  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.110367; eAvPTbb_P0_pT = 0.033185; AvPTbb_P1_pT = -0.001573; eAvPTbb_P1_pT = 0.000473; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.107888; eAvPTbb_P0_pT = 0.041931; AvPTbb_P1_pT = -0.001265; eAvPTbb_P1_pT = 0.000492; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.254701; eAvPTbb_P0_pT = 0.057596; AvPTbb_P1_pT = -0.002514; eAvPTbb_P1_pT = 0.000568; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.195017; eAvPTbb_P0_pT = 0.110002; AvPTbb_P1_pT = -0.001661; eAvPTbb_P1_pT = 0.000937; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT == 1 ) { AvPTbb_P0_pT = 1.026360; eAvPTbb_P0_pT = 0.391254; AvPTbb_P1_pT = -0.000191; eAvPTbb_P1_pT = 0.002833; } 
  	   //    AvPTbb_Njets_pT=2...>5, AvPTbb_Nbjets_pT>=2  
       if ( AvPTbb_Njets_pT == 2 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.224719; eAvPTbb_P0_pT = 0.224484; AvPTbb_P1_pT = -0.003000; eAvPTbb_P1_pT = 0.002997; } 
       if ( AvPTbb_Njets_pT == 3 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.201140; eAvPTbb_P0_pT = 0.038491; AvPTbb_P1_pT = -0.002241; eAvPTbb_P1_pT = 0.000429; } 
       if ( AvPTbb_Njets_pT == 4 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.174979; eAvPTbb_P0_pT = 0.063275; AvPTbb_P1_pT = -0.001664; eAvPTbb_P1_pT = 0.000602; } 
       if ( AvPTbb_Njets_pT == 5 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.000001; AvPTbb_P1_pT = -0.000000; eAvPTbb_P1_pT = 0.000000; } 
       if ( AvPTbb_Njets_pT >= 6 && AvPTbb_Nbjets_pT >= 2 ) { AvPTbb_P0_pT = 1.000000; eAvPTbb_P0_pT = 0.000000; AvPTbb_P1_pT = 0.000000; eAvPTbb_P1_pT = 0.000000; } 
 
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
