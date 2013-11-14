    if ( ttNumEl_p == 1 && ttNumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    ttNjets=2...>5, ttNbjets=0  
       if ( ttNjets == 2 && ttNbjets == 0 ) { ttScFac = 1.810160; ettScFac = 0.353298; } 
       if ( ttNjets == 3 && ttNbjets == 0 ) { ttScFac = 1.064696; ettScFac = 0.324755; } 
       if ( ttNjets == 4 && ttNbjets == 0 ) { ttScFac = 0.951147; ettScFac = 0.373074; } 
       if ( ttNjets == 5 && ttNbjets == 0 ) { ttScFac = 1.890661; ettScFac = 0.606310; } 
       if ( ttNjets >= 6 && ttNbjets == 0 ) { ttScFac = 1.823979; ettScFac = 0.739952; } 
  	   //    ttNjets=2...>5, ttNbjets=1  
       if ( ttNjets == 2 && ttNbjets == 1 ) { ttScFac = 1.075077; ettScFac = 0.046572; } 
       if ( ttNjets == 3 && ttNbjets == 1 ) { ttScFac = 0.858495; ettScFac = 0.050845; } 
       if ( ttNjets == 4 && ttNbjets == 1 ) { ttScFac = 0.828739; ettScFac = 0.066356; } 
       if ( ttNjets == 5 && ttNbjets == 1 ) { ttScFac = 0.776191; ettScFac = 0.124661; } 
       if ( ttNjets >= 6 && ttNbjets == 1 ) { ttScFac = 0.887344; ettScFac = 0.247074; } 
  	   //    ttNjets=2...>5, ttNbjets>=2  
       if ( ttNjets == 2 && ttNbjets >= 2 ) { ttScFac = 1.195364; ettScFac = 0.040819; } 
       if ( ttNjets == 3 && ttNbjets >= 2 ) { ttScFac = 1.095494; ettScFac = 0.046774; } 
       if ( ttNjets == 4 && ttNbjets >= 2 ) { ttScFac = 1.061220; ettScFac = 0.066510; } 
       if ( ttNjets == 5 && ttNbjets >= 2 ) { ttScFac = 0.985829; ettScFac = 0.106615; } 
       if ( ttNjets >= 6 && ttNbjets >= 2 ) { ttScFac = 0.862557; ettScFac = 0.184830; } 
 
       // == Redefine weight 
       myWeight *= ttScFac * HFOR_ttScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
