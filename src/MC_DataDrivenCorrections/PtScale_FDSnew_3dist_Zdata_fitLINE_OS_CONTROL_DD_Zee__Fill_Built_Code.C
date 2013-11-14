    if ( NumEl_pT_p == 1 && NumEl_pT_n == 1 ){ 
  
       // == Define pT of the Z reconstructed from leptons === 
       Pt_Zll = Z_ee.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    Njets_pT=2...>5, Nbjets_pT=0  
       if ( Njets_pT == 2 && Nbjets_pT == 0 ) { P0_pT = 1.073923; eP0_pT = 0.012409; P1_pT = -0.001195; eP1_pT = 0.000142; } 
       if ( Njets_pT == 3 && Nbjets_pT == 0 ) { P0_pT = 1.085922; eP0_pT = 0.028262; P1_pT = -0.001136; eP1_pT = 0.000256; } 
       if ( Njets_pT == 4 && Nbjets_pT == 0 ) { P0_pT = 1.130327; eP0_pT = 0.060602; P1_pT = -0.001684; eP1_pT = 0.000449; } 
       if ( Njets_pT == 5 && Nbjets_pT == 0 ) { P0_pT = 1.050000; eP0_pT = 0.091985; P1_pT = -0.001632; eP1_pT = 0.000419; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 0 ) { P0_pT = 0.774503; eP0_pT = 0.443153; P1_pT = -0.000944; eP1_pT = 0.002261; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( Njets_pT == 2 && Nbjets_pT == 1 ) { P0_pT = 1.069496; eP0_pT = 0.039158; P1_pT = -0.001135; eP1_pT = 0.000427; } 
       if ( Njets_pT == 3 && Nbjets_pT == 1 ) { P0_pT = 1.099066; eP0_pT = 0.074802; P1_pT = -0.001437; eP1_pT = 0.000638; } 
       if ( Njets_pT == 4 && Nbjets_pT == 1 ) { P0_pT = 0.999000; eP0_pT = 0.001246; P1_pT = -0.000100; eP1_pT = 0.000140; } 
       if ( Njets_pT == 5 && Nbjets_pT == 1 ) { P0_pT = 0.999000; eP0_pT = 0.001068; P1_pT = -0.000100; eP1_pT = 0.000138; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 1 ) { P0_pT = 0.999000; eP0_pT = 0.000450; P1_pT = -0.000100; eP1_pT = 0.000002; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( Njets_pT == 2 && Nbjets_pT >= 2 ) { P0_pT = 1.174253; eP0_pT = 0.094725; P1_pT = -0.002936; eP1_pT = 0.000660; } 
       if ( Njets_pT == 3 && Nbjets_pT >= 2 ) { P0_pT = 0.999000; eP0_pT = 0.001169; P1_pT = -0.000100; eP1_pT = 0.000127; } 
       if ( Njets_pT == 4 && Nbjets_pT >= 2 ) { P0_pT = 0.999000; eP0_pT = 0.000018; P1_pT = -0.000100; eP1_pT = 0.000000; } 
       if ( Njets_pT == 5 && Nbjets_pT >= 2 ) { P0_pT = 0.999000; eP0_pT = 0.000064; P1_pT = -0.000100; eP1_pT = 0.000000; } 
       if ( Njets_pT >= 6 && Nbjets_pT >= 2 ) { P0_pT = 0.999000; eP0_pT = 0.001665; P1_pT = -0.000100; eP1_pT = 0.000010; } 
 
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
