    if ( NumMu_p == 1 && NumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.872774; eScFac = 0.005526; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.769849; eScFac = 0.009157; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.773688; eScFac = 0.019447; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.741536; eScFac = 0.039547; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.789431; eScFac = 0.096580; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.107624; eScFac = 0.023120; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.962103; eScFac = 0.031441; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.968158; eScFac = 0.059032; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 0.903517; eScFac = 0.106045; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 1.138652; eScFac = 0.267511; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.493530; eScFac = 0.077928; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.072360; eScFac = 0.110909; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 1.042714; eScFac = 0.127569; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.205519; eScFac = 0.285003; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 0.619284; eScFac = 0.260382; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
