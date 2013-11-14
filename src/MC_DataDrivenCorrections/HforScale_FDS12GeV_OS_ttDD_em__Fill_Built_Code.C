    if ( ( ttNumMu_p == 1 && ttNumEl_n == 1 ) || ( ttNumEl_p == 1 && ttNumMu_n == 1 ) ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    ttNjets=2...>5, ttNbjets=0  
       if ( ttNjets == 2 && ttNbjets == 0 ) { ttScFac = 0.742374; ettScFac = 0.035568; } 
       if ( ttNjets == 3 && ttNbjets == 0 ) { ttScFac = 0.752298; ettScFac = 0.039722; } 
       if ( ttNjets == 4 && ttNbjets == 0 ) { ttScFac = 0.615462; ettScFac = 0.049894; } 
       if ( ttNjets == 5 && ttNbjets == 0 ) { ttScFac = 0.806877; ettScFac = 0.101923; } 
       if ( ttNjets >= 6 && ttNbjets == 0 ) { ttScFac = 1.076714; ettScFac = 0.200773; } 
  	   //    ttNjets=2...>5, ttNbjets=1  
       if ( ttNjets == 2 && ttNbjets == 1 ) { ttScFac = 0.983310; ettScFac = 0.014985; } 
       if ( ttNjets == 3 && ttNbjets == 1 ) { ttScFac = 0.863678; ettScFac = 0.017348; } 
       if ( ttNjets == 4 && ttNbjets == 1 ) { ttScFac = 0.821219; ettScFac = 0.026454; } 
       if ( ttNjets == 5 && ttNbjets == 1 ) { ttScFac = 0.801434; ettScFac = 0.047360; } 
       if ( ttNjets >= 6 && ttNbjets == 1 ) { ttScFac = 0.974856; ettScFac = 0.095546; } 
  	   //    ttNjets=2...>5, ttNbjets>=2  
       if ( ttNjets == 2 && ttNbjets >= 2 ) { ttScFac = 1.117870; ettScFac = 0.019279; } 
       if ( ttNjets == 3 && ttNbjets >= 2 ) { ttScFac = 1.046680; ettScFac = 0.021916; } 
       if ( ttNjets == 4 && ttNbjets >= 2 ) { ttScFac = 0.953145; ettScFac = 0.030913; } 
       if ( ttNjets == 5 && ttNbjets >= 2 ) { ttScFac = 0.926756; ettScFac = 0.052892; } 
       if ( ttNjets >= 6 && ttNbjets >= 2 ) { ttScFac = 1.423999; ettScFac = 0.127266; } 
 
       // == Redefine weight 
       myWeight *= ttScFac * HFOR_ttScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
