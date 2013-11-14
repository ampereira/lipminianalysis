    if ( ttNumMu_p == 1 && ttNumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ttScFac = 1.000000; eHFOR_ttScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    ttNjets=2...>5, ttNbjets=0  
       if ( ttNjets == 2 && ttNbjets == 0 ) { ttScFac = 1.629922; ettScFac = 0.309843; } 
       if ( ttNjets == 3 && ttNbjets == 0 ) { ttScFac = 1.129877; ettScFac = 0.233757; } 
       if ( ttNjets == 4 && ttNbjets == 0 ) { ttScFac = 0.726944; ettScFac = 0.283666; } 
       if ( ttNjets == 5 && ttNbjets == 0 ) { ttScFac = 0.878697; ettScFac = 0.475517; } 
       if ( ttNjets >= 6 && ttNbjets == 0 ) { ttScFac = 0.634542; ettScFac = 0.809240; } 
  	   //    ttNjets=2...>5, ttNbjets=1  
       if ( ttNjets == 2 && ttNbjets == 1 ) { ttScFac = 0.993369; ettScFac = 0.041544; } 
       if ( ttNjets == 3 && ttNbjets == 1 ) { ttScFac = 0.945401; ettScFac = 0.032076; } 
       if ( ttNjets == 4 && ttNbjets == 1 ) { ttScFac = 0.957583; ettScFac = 0.049459; } 
       if ( ttNjets == 5 && ttNbjets == 1 ) { ttScFac = 0.995787; ettScFac = 0.087311; } 
       if ( ttNjets >= 6 && ttNbjets == 1 ) { ttScFac = 0.965137; ettScFac = 0.138535; } 
  	   //    ttNjets=2...>5, ttNbjets>=2  
       if ( ttNjets == 2 && ttNbjets >= 2 ) { ttScFac = 1.209912; ettScFac = 0.029034; } 
       if ( ttNjets == 3 && ttNbjets >= 2 ) { ttScFac = 1.075430; ettScFac = 0.030251; } 
       if ( ttNjets == 4 && ttNbjets >= 2 ) { ttScFac = 0.957962; ettScFac = 0.048753; } 
       if ( ttNjets == 5 && ttNbjets >= 2 ) { ttScFac = 0.982970; ettScFac = 0.076730; } 
       if ( ttNjets >= 6 && ttNbjets >= 2 ) { ttScFac = 1.017445; ettScFac = 0.127119; } 
 
       // == Redefine weight 
       myWeight *= ttScFac * HFOR_ttScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
