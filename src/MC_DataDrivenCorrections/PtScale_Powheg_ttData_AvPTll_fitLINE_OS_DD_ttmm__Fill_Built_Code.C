    if ( AvPTll_NumMu_pT_p == 1 && AvPTll_NumMu_pT_n == 1 ){ 
  
       // == Calculate (pT_l1+pT_l2)/2. and convert to GeV =========== 
       Pt_Xsys *=  ( 0.5 * 0.001 ); 
  
       // == Define pT and HFOR reweighting Scale Factors ============ 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=0  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.161637; eAvPTll_P0_pT = 0.000005; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000000; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.011927; eAvPTll_P0_pT = 0.219637; AvPTll_P1_pT = -0.000186; eAvPTll_P1_pT = 0.003420; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.183466; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.002799; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.000000; eAvPTll_P0_pT = 0.296024; AvPTll_P1_pT = -0.000000; eAvPTll_P1_pT = 0.004356; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 0 ) { AvPTll_P0_pT = 1.046074; eAvPTll_P0_pT = 0.300245; AvPTll_P1_pT = -0.000641; eAvPTll_P1_pT = 0.004176; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT=1  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.155787; eAvPTll_P0_pT = 0.000101; AvPTll_P1_pT = -0.002500; eAvPTll_P1_pT = 0.000002; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.147563; eAvPTll_P0_pT = 0.030363; AvPTll_P1_pT = -0.002292; eAvPTll_P1_pT = 0.000472; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.000162; eAvPTll_P0_pT = 0.250955; AvPTll_P1_pT = -0.000002; eAvPTll_P1_pT = 0.003801; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.274398; eAvPTll_P0_pT = 0.070552; AvPTll_P1_pT = -0.003926; eAvPTll_P1_pT = 0.001009; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT == 1 ) { AvPTll_P0_pT = 1.304326; eAvPTll_P0_pT = 0.226758; AvPTll_P1_pT = -0.004221; eAvPTll_P1_pT = 0.003145; } 
  	   //    AvPTll_Njets_pT=2...>5, AvPTll_Nbjets_pT>=2  
       if ( AvPTll_Njets_pT == 2 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.047817; eAvPTll_P0_pT = 0.031099; AvPTll_P1_pT = -0.000792; eAvPTll_P1_pT = 0.000515; } 
       if ( AvPTll_Njets_pT == 3 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.108859; eAvPTll_P0_pT = 0.036022; AvPTll_P1_pT = -0.001732; eAvPTll_P1_pT = 0.000573; } 
       if ( AvPTll_Njets_pT == 4 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.158627; eAvPTll_P0_pT = 0.043333; AvPTll_P1_pT = -0.002426; eAvPTll_P1_pT = 0.000663; } 
       if ( AvPTll_Njets_pT == 5 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.266554; eAvPTll_P0_pT = 0.058807; AvPTll_P1_pT = -0.003961; eAvPTll_P1_pT = 0.000874; } 
       if ( AvPTll_Njets_pT >= 6 && AvPTll_Nbjets_pT >= 2 ) { AvPTll_P0_pT = 1.335159; eAvPTll_P0_pT = 0.015331; AvPTll_P1_pT = -0.004500; eAvPTll_P1_pT = 0.000206; } 
 
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
