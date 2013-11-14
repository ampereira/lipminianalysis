    if ( NumEl_pT_p == 1 && NumEl_pT_n == 1 ){ 
  
       // == Define pT of the Z reconstructed from leptons === 
       Pt_Zll = Z_ee.Pt()/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    Njets_pT=2...>5, Nbjets_pT=0  
       if ( Njets_pT == 2 && Nbjets_pT == 0 ) { P0_pT = 1.079153; eP0_pT = 0.009258; P1_pT = -0.001241; eP1_pT = 0.000145; } 
       if ( Njets_pT == 3 && Nbjets_pT == 0 ) { P0_pT = 1.106003; eP0_pT = 0.022485; P1_pT = -0.001254; eP1_pT = 0.000266; } 
       if ( Njets_pT == 4 && Nbjets_pT == 0 ) { P0_pT = 1.187313; eP0_pT = 0.047290; P1_pT = -0.001879; eP1_pT = 0.000474; } 
       if ( Njets_pT == 5 && Nbjets_pT == 0 ) { P0_pT = 1.263856; eP0_pT = 0.116122; P1_pT = -0.002124; eP1_pT = 0.000935; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 0 ) { P0_pT = 1.000000; eP0_pT = 0.471566; P1_pT = -0.000000; eP1_pT = 0.004199; } 
  	   //    Njets_pT=2...>5, Nbjets_pT=1  
       if ( Njets_pT == 2 && Nbjets_pT == 1 ) { P0_pT = 1.072917; eP0_pT = 0.031228; P1_pT = -0.001083; eP1_pT = 0.000464; } 
       if ( Njets_pT == 3 && Nbjets_pT == 1 ) { P0_pT = 1.129907; eP0_pT = 0.059583; P1_pT = -0.001501; eP1_pT = 0.000688; } 
       if ( Njets_pT == 4 && Nbjets_pT == 1 ) { P0_pT = 1.242431; eP0_pT = 0.112641; P1_pT = -0.002495; eP1_pT = 0.001159; } 
       if ( Njets_pT == 5 && Nbjets_pT == 1 ) { P0_pT = 1.379946; eP0_pT = 0.155124; P1_pT = -0.003156; eP1_pT = 0.001289; } 
       if ( Njets_pT >= 6 && Nbjets_pT == 1 ) { P0_pT = 1.000000; eP0_pT = 0.000000; P1_pT = -0.000000; eP1_pT = 0.000000; } 
  	   //    Njets_pT=2...>5, Nbjets_pT>=2  
       if ( Njets_pT == 2 && Nbjets_pT >= 2 ) { P0_pT = 1.226950; eP0_pT = 0.072125; P1_pT = -0.003051; eP1_pT = 0.000970; } 
       if ( Njets_pT == 3 && Nbjets_pT >= 2 ) { P0_pT = 1.257227; eP0_pT = 0.080673; P1_pT = -0.003188; eP1_pT = 0.001000; } 
       if ( Njets_pT == 4 && Nbjets_pT >= 2 ) { P0_pT = 1.466996; eP0_pT = 0.000866; P1_pT = -0.004500; eP1_pT = 0.000008; } 
       if ( Njets_pT == 5 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.000000; P1_pT = -0.000000; eP1_pT = 0.000000; } 
       if ( Njets_pT >= 6 && Nbjets_pT >= 2 ) { P0_pT = 1.000000; eP0_pT = 0.000000; P1_pT = -0.000000; eP1_pT = 0.000000; } 
 
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
