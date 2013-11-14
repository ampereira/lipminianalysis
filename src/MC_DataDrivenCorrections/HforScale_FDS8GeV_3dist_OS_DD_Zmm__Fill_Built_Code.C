    if ( NumMu_p == 1 && NumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.870600; eScFac = 0.005601; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.771028; eScFac = 0.009279; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.771284; eScFac = 0.019719; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.733327; eScFac = 0.039807; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.788737; eScFac = 0.098087; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.109485; eScFac = 0.023642; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.961289; eScFac = 0.032036; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.949235; eScFac = 0.058751; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 0.911470; eScFac = 0.106974; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 1.111840; eScFac = 0.262088; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.459848; eScFac = 0.076975; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.049845; eScFac = 0.110807; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 1.065215; eScFac = 0.133753; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.207970; eScFac = 0.291888; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 0.633426; eScFac = 0.262029; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
