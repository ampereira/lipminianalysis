    if ( NumMu_pT_p == 1 && NumMu_pT_n == 1 ){ 
  
       // == Define pT of the Z reconstructed from leptons === 
       Pt_Zll = Z_mm.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    Njets_pT=2...>5, Nbjets_pT=0  
       if ( Njets_pT == 2 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.000550; eP1_pT = 0.000077; } 
       if ( Njets_pT == 3 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.000543; eP1_pT = 0.000114; } 
       if ( Njets_pT == 4 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.000541; eP1_pT = 0.000209; } 
       if ( Njets_pT == 5 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000054; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000685; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( Njets_pT == 2 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.000540; eP1_pT = 0.000229; } 
       if ( Njets_pT == 3 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.000716; eP1_pT = 0.000266; } 
       if ( Njets_pT == 4 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000616; } 
       if ( Njets_pT == 5 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000164; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000615; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( Njets_pT == 2 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000708; } 
       if ( Njets_pT == 3 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000206; } 
       if ( Njets_pT == 4 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000689; } 
       if ( Njets_pT == 5 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.555682; P1_pT = -0.001000; eP1_pT = 0.000767; } 
       if ( Njets_pT >= 6 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 3.277459; P1_pT = 0.000000; eP1_pT = 0.000000; } 
 
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
