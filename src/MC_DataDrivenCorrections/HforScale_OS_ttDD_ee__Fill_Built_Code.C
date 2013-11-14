    if ( ttNumEl_p == 1 && ttNumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    ttNjets=2...>5, ttNbjets=0  
       if ( ttNjets == 2 && ttNbjets == 0 ) { ttScFac = 2.634962; ettScFac = 0.342245; } 
       if ( ttNjets == 3 && ttNbjets == 0 ) { ttScFac = 1.690305; ettScFac = 0.312178; } 
       if ( ttNjets == 4 && ttNbjets == 0 ) { ttScFac = 1.359447; ettScFac = 0.363054; } 
       if ( ttNjets == 5 && ttNbjets == 0 ) { ttScFac = 2.183179; ettScFac = 0.597681; } 
       if ( ttNjets >= 6 && ttNbjets == 0 ) { ttScFac = 2.002787; ettScFac = 0.741351; } 
  	   //    ttNjets=2...>5, ttNbjets=1  
       if ( ttNjets == 2 && ttNbjets == 1 ) { ttScFac = 1.078115; ettScFac = 0.046441; } 
       if ( ttNjets == 3 && ttNbjets == 1 ) { ttScFac = 0.871848; ettScFac = 0.050096; } 
       if ( ttNjets == 4 && ttNbjets == 1 ) { ttScFac = 0.842001; ettScFac = 0.065463; } 
       if ( ttNjets == 5 && ttNbjets == 1 ) { ttScFac = 0.727787; ettScFac = 0.130575; } 
       if ( ttNjets >= 6 && ttNbjets == 1 ) { ttScFac = 0.960096; ettScFac = 0.224180; } 
  	   //    ttNjets=2...>5, ttNbjets>=2  
       if ( ttNjets == 2 && ttNbjets >= 2 ) { ttScFac = 1.193941; ettScFac = 0.040932; } 
       if ( ttNjets == 3 && ttNbjets >= 2 ) { ttScFac = 1.094251; ettScFac = 0.046894; } 
       if ( ttNjets == 4 && ttNbjets >= 2 ) { ttScFac = 1.062563; ettScFac = 0.066472; } 
       if ( ttNjets == 5 && ttNbjets >= 2 ) { ttScFac = 0.985915; ettScFac = 0.106617; } 
       if ( ttNjets >= 6 && ttNbjets >= 2 ) { ttScFac = 0.854657; ettScFac = 0.185108; } 
 
       // == Redefine weight 
       myWeight *= ttScFac * HFOR_ttScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
