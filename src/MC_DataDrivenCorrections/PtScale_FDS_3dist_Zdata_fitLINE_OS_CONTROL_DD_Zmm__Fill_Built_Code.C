    if ( NumMu_pT_p == 1 && NumMu_pT_n == 1 ){ 
  
       // == Define pT of the Z reconstructed from leptons === 
       Pt_Zll = Z_mm.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    Njets_pT=2...>5, Nbjets_pT=0  
       if ( Njets_pT == 2 && Nbjets_pT == 0 ) { P0_pT = 1.068836; eP0_pT = 0.009496; P1_pT = -0.001179; eP1_pT = 0.000109; } 
       if ( Njets_pT == 3 && Nbjets_pT == 0 ) { P0_pT = 1.098721; eP0_pT = 0.018769; P1_pT = -0.001300; eP1_pT = 0.000161; } 
       if ( Njets_pT == 4 && Nbjets_pT == 0 ) { P0_pT = 1.108751; eP0_pT = 0.039999; P1_pT = -0.001427; eP1_pT = 0.000298; } 
       if ( Njets_pT == 5 && Nbjets_pT == 0 ) { P0_pT = 1.200000; eP0_pT = 0.049466; P1_pT = -0.002810; eP1_pT = 0.000248; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 0 ) { P0_pT = 1.168824; eP0_pT = 0.152534; P1_pT = -0.002566; eP1_pT = 0.000873; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( Njets_pT == 2 && Nbjets_pT == 1 ) { P0_pT = 1.084531; eP0_pT = 0.031569; P1_pT = -0.001394; eP1_pT = 0.000333; } 
       if ( Njets_pT == 3 && Nbjets_pT == 1 ) { P0_pT = 1.200000; eP0_pT = 0.025065; P1_pT = -0.002464; eP1_pT = 0.000022; } 
       if ( Njets_pT == 4 && Nbjets_pT == 1 ) { P0_pT = 1.228746; eP0_pT = 0.074179; P1_pT = -0.002934; eP1_pT = 0.000389; } 
       if ( Njets_pT == 5 && Nbjets_pT == 1 ) { P0_pT = 0.989656; eP0_pT = 0.129385; P1_pT = -0.002391; eP1_pT = 0.000468; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 1 ) { P0_pT = 1.000570; eP0_pT = 0.358834; P1_pT = -0.003232; eP1_pT = 0.000846; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( Njets_pT == 2 && Nbjets_pT >= 2 ) { P0_pT = 0.990000; eP0_pT = 0.000648; P1_pT = -0.002035; eP1_pT = 0.000004; } 
       if ( Njets_pT == 3 && Nbjets_pT >= 2 ) { P0_pT = 1.250000; eP0_pT = 0.393078; P1_pT = -0.003063; eP1_pT = 0.000019; } 
       if ( Njets_pT == 4 && Nbjets_pT >= 2 ) { P0_pT = 1.096865; eP0_pT = 0.162113; P1_pT = -0.002159; eP1_pT = 0.001284; } 
       if ( Njets_pT == 5 && Nbjets_pT >= 2 ) { P0_pT = 0.897790; eP0_pT = 0.263851; P1_pT = -0.001849; eP1_pT = 0.007674; } 
       if ( Njets_pT >= 6 && Nbjets_pT >= 2 ) { P0_pT = 0.990000; eP0_pT = 0.014574; P1_pT = -0.008110; eP1_pT = 0.001415; } 
 
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
