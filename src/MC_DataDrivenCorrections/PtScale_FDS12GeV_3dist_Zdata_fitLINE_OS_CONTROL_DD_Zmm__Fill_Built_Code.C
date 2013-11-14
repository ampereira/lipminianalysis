    if ( NumMu_pT_p == 1 && NumMu_pT_n == 1 ){ 
  
       // == Define pT of the Z reconstructed from leptons === 
       Pt_Zll = Z_mm.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    Njets_pT=2...>5, Nbjets_pT=0  
       if ( Njets_pT == 2 && Nbjets_pT == 0 ) { P0_pT = 1.074738; eP0_pT = 0.007226; P1_pT = -0.001250; eP1_pT = 0.000121; } 
       if ( Njets_pT == 3 && Nbjets_pT == 0 ) { P0_pT = 1.109713; eP0_pT = 0.015571; P1_pT = -0.001395; eP1_pT = 0.000198; } 
       if ( Njets_pT == 4 && Nbjets_pT == 0 ) { P0_pT = 1.107490; eP0_pT = 0.035158; P1_pT = -0.001175; eP1_pT = 0.000384; } 
       if ( Njets_pT == 5 && Nbjets_pT == 0 ) { P0_pT = 1.266716; eP0_pT = 0.015819; P1_pT = -0.002500; eP1_pT = 0.000148; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 0 ) { P0_pT = 1.197483; eP0_pT = 0.133045; P1_pT = -0.001756; eP1_pT = 0.001183; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( Njets_pT == 2 && Nbjets_pT == 1 ) { P0_pT = 1.082748; eP0_pT = 0.025748; P1_pT = -0.001314; eP1_pT = 0.000409; } 
       if ( Njets_pT == 3 && Nbjets_pT == 1 ) { P0_pT = 1.135312; eP0_pT = 0.038621; P1_pT = -0.001676; eP1_pT = 0.000478; } 
       if ( Njets_pT == 4 && Nbjets_pT == 1 ) { P0_pT = 1.226530; eP0_pT = 0.064292; P1_pT = -0.002415; eP1_pT = 0.000685; } 
       if ( Njets_pT == 5 && Nbjets_pT == 1 ) { P0_pT = 1.297447; eP0_pT = 0.139257; P1_pT = -0.002559; eP1_pT = 0.001198; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 1 ) { P0_pT = 1.405337; eP0_pT = 0.204046; P1_pT = -0.003165; eP1_pT = 0.001593; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( Njets_pT == 2 && Nbjets_pT >= 2 ) { P0_pT = 1.124047; eP0_pT = 0.049743; P1_pT = -0.001895; eP1_pT = 0.000760; } 
       if ( Njets_pT == 3 && Nbjets_pT >= 2 ) { P0_pT = 1.267511; eP0_pT = 0.066569; P1_pT = -0.003199; eP1_pT = 0.000796; } 
       if ( Njets_pT == 4 && Nbjets_pT >= 2 ) { P0_pT = 1.243149; eP0_pT = 0.101785; P1_pT = -0.002781; eP1_pT = 0.001164; } 
       if ( Njets_pT == 5 && Nbjets_pT >= 2 ) { P0_pT = 1.428604; eP0_pT = 0.379067; P1_pT = -0.004500; eP1_pT = 0.003980; } 
       if ( Njets_pT >= 6 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.424007; P1_pT = -0.000000; eP1_pT = 0.004071; } 
 
  	   //    Njets_pT=2...>5, Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && Njets_pT == 2 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 3 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 4 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 5 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT >= 6 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( hfor == 0 && Njets_pT == 2 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 3 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 4 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 5 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT >= 6 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( hfor == 0 && Njets_pT == 2 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 3 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 4 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT == 5 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && Njets_pT >= 6 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
 
  	   //    Njets_pT=2...>5, Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && Njets_pT == 2 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 3 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 4 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 5 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT >= 6 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( hfor == 1 && Njets_pT == 2 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 3 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 4 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 5 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT >= 6 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( hfor == 1 && Njets_pT == 2 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 3 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 4 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT == 5 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && Njets_pT >= 6 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
 
  	   //    Njets_pT=2...>5, Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && Njets_pT == 2 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 3 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 4 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 5 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT >= 6 && Nbjets_pT == 0 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( hfor == 3 && Njets_pT == 2 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 3 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 4 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 5 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT >= 6 && Nbjets_pT == 1 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( hfor == 3 && Njets_pT == 2 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 3 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 4 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT == 5 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && Njets_pT >= 6 && Nbjets_pT >= 2 ) { HFOR_ScFac_pT = 1.000000; eHFOR_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       ScFac_pT = P0_pT + P1_pT * Pt_Zll; 
       myWeight *= ScFac_pT * HFOR_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
