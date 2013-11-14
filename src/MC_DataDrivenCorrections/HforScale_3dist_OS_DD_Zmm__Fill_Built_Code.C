    if ( NumMu_p == 1 && NumMu_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.820113; eScFac = 0.004921; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.712032; eScFac = 0.009156; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.672501; eScFac = 0.018455; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.604690; eScFac = 0.035500; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.715492; eScFac = 0.081563; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.007195; eScFac = 0.019308; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.826459; eScFac = 0.027899; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.788141; eScFac = 0.055102; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 1.106912; eScFac = 0.154588; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 1.052351; eScFac = 0.237339; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.279050; eScFac = 0.079857; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.048630; eScFac = 0.078004; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 1.112733; eScFac = 0.143051; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 0.826252; eScFac = 0.242986; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 0.955817; eScFac = 0.488133; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
