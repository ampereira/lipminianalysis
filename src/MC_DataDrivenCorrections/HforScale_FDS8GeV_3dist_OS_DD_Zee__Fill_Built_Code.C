    if ( NumEl_p == 1 && NumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.837394; eScFac = 0.006557; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.773378; eScFac = 0.013086; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.699731; eScFac = 0.025527; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.793846; eScFac = 0.064495; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.724836; eScFac = 0.121777; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.023107; eScFac = 0.025795; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.913210; eScFac = 0.041091; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.788812; eScFac = 0.068822; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 1.681391; eScFac = 0.323306; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 0.879207; eScFac = 0.282681; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.378553; eScFac = 0.100351; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.031334; eScFac = 0.103071; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 0.764314; eScFac = 0.137131; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.419865; eScFac = 0.443295; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 1.722896; eScFac = 1.237424; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
