    if ( NumEl_p == 1 && NumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.816386; eScFac = 0.007243; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.745338; eScFac = 0.014213; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.713784; eScFac = 0.030019; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.756357; eScFac = 0.071389; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.633039; eScFac = 0.122528; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 0.935915; eScFac = 0.026000; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.858873; eScFac = 0.044174; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.706156; eScFac = 0.069883; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 0.650542; eScFac = 0.134345; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 1.119413; eScFac = 0.443999; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.163391; eScFac = 0.100629; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 0.989400; eScFac = 0.111007; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 0.796998; eScFac = 0.144431; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 0.758503; eScFac = 0.287883; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 0.305700; eScFac = 0.338618; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
