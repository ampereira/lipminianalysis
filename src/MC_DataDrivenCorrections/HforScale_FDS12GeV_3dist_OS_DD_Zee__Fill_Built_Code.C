    if ( NumEl_p == 1 && NumEl_n == 1 ){ 
  
       // == Define HFOR Scale Factors ============ 
       if ( hfor == 0 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 1 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
       if ( hfor == 3 ) { HFOR_ScFac = 1.000000; eHFOR_ScFac = 0.000000; } 
  
       // == Define Multiplicity Scale Factors ==== 
  	   //    Njets=2...>5, Nbjets=0  
       if ( Njets == 2 && Nbjets == 0 ) { ScFac = 0.842593; eScFac = 0.006425; } 
       if ( Njets == 3 && Nbjets == 0 ) { ScFac = 0.778397; eScFac = 0.012853; } 
       if ( Njets == 4 && Nbjets == 0 ) { ScFac = 0.702299; eScFac = 0.025026; } 
       if ( Njets == 5 && Nbjets == 0 ) { ScFac = 0.820134; eScFac = 0.065308; } 
       if ( Njets >= 6 && Nbjets == 0 ) { ScFac = 0.756417; eScFac = 0.123924; } 
  	   //    Njets=2...>5, Nbjets=1  
       if ( Njets == 2 && Nbjets == 1 ) { ScFac = 1.030930; eScFac = 0.025334; } 
       if ( Njets == 3 && Nbjets == 1 ) { ScFac = 0.928509; eScFac = 0.040901; } 
       if ( Njets == 4 && Nbjets == 1 ) { ScFac = 0.775314; eScFac = 0.066007; } 
       if ( Njets == 5 && Nbjets == 1 ) { ScFac = 1.518968; eScFac = 0.277822; } 
       if ( Njets >= 6 && Nbjets == 1 ) { ScFac = 0.852929; eScFac = 0.263707; } 
  	   //    Njets=2...>5, Nbjets>=2  
       if ( Njets == 2 && Nbjets >= 2 ) { ScFac = 1.397675; eScFac = 0.099967; } 
       if ( Njets == 3 && Nbjets >= 2 ) { ScFac = 1.039354; eScFac = 0.103911; } 
       if ( Njets == 4 && Nbjets >= 2 ) { ScFac = 0.785510; eScFac = 0.144532; } 
       if ( Njets == 5 && Nbjets >= 2 ) { ScFac = 1.243880; eScFac = 0.378979; } 
       if ( Njets >= 6 && Nbjets >= 2 ) { ScFac = 1.982228; eScFac = 1.178992; } 
 
       // == Redefine weight 
       myWeight *= ScFac * HFOR_ScFac; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
