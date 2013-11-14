    if ( NumEl_p == 1 && NumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.840508; eScFac = 0.006475; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.777369; eScFac = 0.012957; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.702990; eScFac = 0.025289; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.811229; eScFac = 0.065008; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.719542; eScFac = 0.118555; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.026260; eScFac = 0.025438; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.926582; eScFac = 0.041083; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.776960; eScFac = 0.067085; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 1.558491; eScFac = 0.292117; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 0.836091; eScFac = 0.257423; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.391610; eScFac = 0.099965; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.043993; eScFac = 0.103889; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 0.794513; eScFac = 0.143079; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.289812; eScFac = 0.401194; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 1.499240; eScFac = 0.932154; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
