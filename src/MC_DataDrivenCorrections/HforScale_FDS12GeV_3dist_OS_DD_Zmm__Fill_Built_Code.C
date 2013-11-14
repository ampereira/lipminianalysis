    if ( NumMu_p == 1 && NumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.873297; eScFac = 0.005470; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.772045; eScFac = 0.009074; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.774141; eScFac = 0.019237; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.749126; eScFac = 0.039519; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.775380; eScFac = 0.092879; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.106503; eScFac = 0.023258; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.965438; eScFac = 0.031265; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.981455; eScFac = 0.059504; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 0.907030; eScFac = 0.105281; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 1.136733; eScFac = 0.265217; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.507896; eScFac = 0.078123; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.095778; eScFac = 0.112450; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 1.050964; eScFac = 0.128960; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.226268; eScFac = 0.290258; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 0.656711; eScFac = 0.275403; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
