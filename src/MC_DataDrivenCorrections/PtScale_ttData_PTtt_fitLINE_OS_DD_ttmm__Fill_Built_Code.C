    if ( PTtt_NumMu_pT_p == 1 && PTtt_NumMu_pT_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + PTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + PTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000069; ePTtt_P0_pT = 0.000035; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000079; ePTtt_P0_pT = 0.000057; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000000; ePTtt_P0_pT = 0.000058; PTtt_P1_pT = -0.000000; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000103; ePTtt_P0_pT = 0.000073; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { PTtt_P0_pT = 1.000125; ePTtt_P0_pT = 0.000125; PTtt_P1_pT = -0.000001; ePTtt_P1_pT = 0.000001; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.171830; ePTtt_P0_pT = 0.000923; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000013; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.133102; ePTtt_P0_pT = 0.045364; PTtt_P1_pT = -0.001686; ePTtt_P1_pT = 0.000574; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.053998; ePTtt_P0_pT = 0.069636; PTtt_P1_pT = -0.000589; ePTtt_P1_pT = 0.000760; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.085504; ePTtt_P0_pT = 0.194630; PTtt_P1_pT = -0.000836; ePTtt_P1_pT = 0.001904; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { PTtt_P0_pT = 1.296916; ePTtt_P0_pT = 0.000545; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000005; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.166860; ePTtt_P0_pT = 0.000000; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000000; } 
       if ( PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.118471; ePTtt_P0_pT = 0.042266; PTtt_P1_pT = -0.001507; ePTtt_P1_pT = 0.000538; } 
       if ( PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.228355; ePTtt_P0_pT = 0.159533; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.001747; } 
       if ( PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.141435; ePTtt_P0_pT = 0.104568; PTtt_P1_pT = -0.001349; ePTtt_P1_pT = 0.000998; } 
       if ( PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { PTtt_P0_pT = 1.311290; ePTtt_P0_pT = 0.000022; PTtt_P1_pT = -0.002500; ePTtt_P1_pT = 0.000000; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 0 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 1 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 0 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT=1  
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT == 1 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
  	   //    PTtt_Njets_pT=2...>5, PTtt_Nbjets_pT>=2  
       if ( hfor == 3 && PTtt_Njets_pT == 2 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 3 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 4 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT == 5 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && PTtt_Njets_pT >= 6 && PTtt_Nbjets_pT >= 2 ) { HFOR_PTtt_ScFac_pT = 1.000000; eHFOR_PTtt_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       PTtt_ScFac_pT = PTtt_P0_pT + PTtt_P1_pT * Pt_Xsys; 
       myWeight *= PTtt_ScFac_pT * HFOR_PTtt_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
