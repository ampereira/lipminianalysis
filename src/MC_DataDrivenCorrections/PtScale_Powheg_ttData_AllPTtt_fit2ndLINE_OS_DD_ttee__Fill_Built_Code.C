    if ( ttNumEl_p == 1 && ttNumEl_n == 1 ){ 
  
       // == Define pT of the reconstructed system =========== 
       Px_Xsys = Xsys.Px() + AllPTtt_pXmiss; 
       Py_Xsys = Xsys.Py() + AllPTtt_pYmiss; 
       Pt_Xsys = sqrt( Px_Xsys*Px_Xsys + Py_Xsys*Py_Xsys )/1000.; 
  
       // == Define pT and HFOR reweighting Scale Factors ==== 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.265432; eAllPTtt_P0_pT = 0.394798; AllPTtt_P1_pT = 0.000585; eAllPTtt_P1_pT = 0.000877; AllPTtt_P2_pT = -0.000012; eAllPTtt_P2_pT = 0.000006; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.292792; eAllPTtt_P0_pT = 0.557416; AllPTtt_P1_pT = 0.001280; eAllPTtt_P1_pT = 0.001102; AllPTtt_P2_pT = -0.000016; eAllPTtt_P2_pT = 0.000005; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.154934; eAllPTtt_P0_pT = 0.519716; AllPTtt_P1_pT = 0.000344; eAllPTtt_P1_pT = 0.001954; AllPTtt_P2_pT = -0.000007; eAllPTtt_P2_pT = 0.000014; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.179539; eAllPTtt_P0_pT = 0.675907; AllPTtt_P1_pT = 0.004000; eAllPTtt_P1_pT = 0.000000; AllPTtt_P2_pT = -0.000020; eAllPTtt_P2_pT = 0.000000; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { AllPTtt_P0_pT = 1.424391; eAllPTtt_P0_pT = 0.286292; AllPTtt_P1_pT = -0.004240; eAllPTtt_P1_pT = 0.001061; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000015; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.613549; eAllPTtt_P0_pT = 0.557722; AllPTtt_P1_pT = 0.000936; eAllPTtt_P1_pT = 0.000576; AllPTtt_P2_pT = -0.000011; eAllPTtt_P2_pT = 0.000004; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.861782; eAllPTtt_P0_pT = 0.797359; AllPTtt_P1_pT = 0.000657; eAllPTtt_P1_pT = 0.000681; AllPTtt_P2_pT = -0.000007; eAllPTtt_P2_pT = 0.000004; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.067171; eAllPTtt_P0_pT = 0.504811; AllPTtt_P1_pT = 0.000304; eAllPTtt_P1_pT = 0.001058; AllPTtt_P2_pT = -0.000004; eAllPTtt_P2_pT = 0.000016; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.159337; eAllPTtt_P0_pT = 0.423814; AllPTtt_P1_pT = 0.000497; eAllPTtt_P1_pT = 0.001710; AllPTtt_P2_pT = -0.000010; eAllPTtt_P2_pT = 0.000013; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { AllPTtt_P0_pT = 1.286492; eAllPTtt_P0_pT = 0.528391; AllPTtt_P1_pT = -0.001058; eAllPTtt_P1_pT = 0.000981; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000014; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.340427; eAllPTtt_P0_pT = 0.448872; AllPTtt_P1_pT = 0.000883; eAllPTtt_P1_pT = 0.000584; AllPTtt_P2_pT = -0.000011; eAllPTtt_P2_pT = 0.000004; } 
       if ( AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.175683; eAllPTtt_P0_pT = 1.367298; AllPTtt_P1_pT = 0.000239; eAllPTtt_P1_pT = 0.000327; AllPTtt_P2_pT = -0.000003; eAllPTtt_P2_pT = 0.000017; } 
       if ( AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.202877; eAllPTtt_P0_pT = 0.400121; AllPTtt_P1_pT = 0.000731; eAllPTtt_P1_pT = 0.001025; AllPTtt_P2_pT = -0.000011; eAllPTtt_P2_pT = 0.000006; } 
       if ( AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.389816; eAllPTtt_P0_pT = 0.676234; AllPTtt_P1_pT = 0.000748; eAllPTtt_P1_pT = 0.001642; AllPTtt_P2_pT = -0.000016; eAllPTtt_P2_pT = 0.000010; } 
       if ( AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { AllPTtt_P0_pT = 1.532433; eAllPTtt_P0_pT = 0.773207; AllPTtt_P1_pT = -0.000250; eAllPTtt_P1_pT = 0.002386; AllPTtt_P2_pT = -0.000015; eAllPTtt_P2_pT = 0.000011; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=0 =========== 
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 0 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 0 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=1 =========== 
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 1 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 1 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=0 ============================== HFOR=3 =========== 
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 0 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT=1  
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT == 1 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
  	   //    AllPTtt_Njets_pT=2...>5, AllPTtt_Nbjets_pT>=2  
       if ( hfor == 3 && AllPTtt_Njets_pT == 2 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 3 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 4 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT == 5 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
       if ( hfor == 3 && AllPTtt_Njets_pT >= 6 && AllPTtt_Nbjets_pT >= 2 ) { HFOR_AllPTtt_ScFac_pT = 1.000000; eHFOR_AllPTtt_ScFac_pT = 0.000000; } 
 
       // == Redefine weight 
       AllPTtt_ScFac_pT = AllPTtt_P0_pT + AllPTtt_P1_pT*Pt_Xsys + AllPTtt_P2_pT*Pt_Xsys*Pt_Xsys; 
       myWeight *= AllPTtt_ScFac_pT * HFOR_AllPTtt_ScFac_pT; 
 
    } 
    // ::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::  
