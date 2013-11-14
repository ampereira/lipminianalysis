    if ( ttNumMu_p == 1 && ttNumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    ttNjets=2...>5, ttNbjets=0  
       if ( ttNjets == 2 && ttNbjets == 0 ) { ttScFac = 0.844066; ettScFac = 0.317263; } 
       if ( ttNjets == 3 && ttNbjets == 0 ) { ttScFac = 0.454272; ettScFac = 0.242884; } 
       if ( ttNjets == 4 && ttNbjets == 0 ) { ttScFac = 0.295001; ettScFac = 0.292940; } 
       if ( ttNjets == 5 && ttNbjets == 0 ) { ttScFac = 0.291042; ettScFac = 0.497976; } 
       if ( ttNjets >= 6 && ttNbjets == 0 ) { ttScFac = 0.448369; ettScFac = 0.801717; } 
  	   //    ttNjets=2...>5, ttNbjets=1  
       if ( ttNjets == 2 && ttNbjets == 1 ) { ttScFac = 1.002615; ettScFac = 0.041263; } 
       if ( ttNjets == 3 && ttNbjets == 1 ) { ttScFac = 0.937535; ettScFac = 0.032395; } 
       if ( ttNjets == 4 && ttNbjets == 1 ) { ttScFac = 0.947903; ettScFac = 0.050041; } 
       if ( ttNjets == 5 && ttNbjets == 1 ) { ttScFac = 0.987269; ettScFac = 0.087965; } 
       if ( ttNjets >= 6 && ttNbjets == 1 ) { ttScFac = 0.958471; ettScFac = 0.140482; } 
  	   //    ttNjets=2...>5, ttNbjets>=2  
       if ( ttNjets == 2 && ttNbjets >= 2 ) { ttScFac = 1.208077; ettScFac = 0.029141; } 
       if ( ttNjets == 3 && ttNbjets >= 2 ) { ttScFac = 1.076428; ettScFac = 0.030513; } 
       if ( ttNjets == 4 && ttNbjets >= 2 ) { ttScFac = 0.957548; ettScFac = 0.048824; } 
       if ( ttNjets == 5 && ttNbjets >= 2 ) { ttScFac = 0.994168; ettScFac = 0.076456; } 
       if ( ttNjets >= 6 && ttNbjets >= 2 ) { ttScFac = 1.016623; ettScFac = 0.127146; } 
 
       // == Redefine weight 
       myWeight *= ttScFac * HFOR_ttScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
