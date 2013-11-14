   // Declaration of leaf types
  /*  Int_t           */ runNumber = 0;
  /*  Int_t           */ eventNumber = 0;
  /*  Int_t           */ channelNumber = 0;
  /*  Int_t           */ rndRunNumber = 0;
  /*  Int_t           */ dataPeriod = 0;
  /*  Float_t         */ mu = 0;
  /*  Float_t         */ mcWeight = 0;
  /*  Float_t         */ eventWeight_PRETAG = 0;
  /*  Float_t         */ eventWeight_BTAG = 0;
  /*  Int_t           */ pvxp_n = 0;
  /*  Int_t           */ hfor = 0;
  /*  Float_t         */ vxp_z = 0;
  /*  Float_t         */ mc_vxp_z = 0;
  /*  Double_t        */ mcevt_pdf1 = 0;
  /*  Double_t        */  mcevt_pdf2 = 0;
  /*  Int_t           */ mcevt_pdf_id1 = 0;
  /*  Int_t           */ mcevt_pdf_id2 = 0;
  /*  Double_t        */ mcevt_pdf_scale = 0;
  /*  Double_t        */ mcevt_pdf_x1 = 0;
  /*  Double_t        */ mcevt_pdf_x2 = 0;
  /*  Float_t         */ scaleFactor_PILEUP = 0;
  /*  Float_t         */ scaleFactor_ELE = 0;
  /*  Float_t         */ scaleFactor_MUON = 0;
  /*  Float_t         */ scaleFactor_DILEP = 0;
  /*  Float_t         */ scaleFactor_BTAG = 0;
  /*  Float_t         */ scaleFactor_WJETSNORM = 0;
  /*  Float_t         */ scaleFactor_WJETSSHAPE = 0;
  /*  Float_t         */ scaleFactor_JVFSF = 0;
  /*  Float_t         */ scaleFactor_ZVERTEX = 0;
  /*  Float_t         */ scaleFactor_ALLPRETAG = 0;
  /*  Float_t         */ scaleFactor_ALLBTAG = 0;
  /*  Int_t           */ truE = 0;
  /*  Int_t           */ truM = 0;
  /*  Bool_t          */ trigE = 0;
  /*  Bool_t          */ trigM = 0;
  /*  Bool_t          */ passGRL = 0;
  /*  Bool_t          */ cosmicEvent = 0;
  /*  Bool_t          */ isOS = 0;
  /*  Bool_t          */ hasGoodVertex = 0;
  /*  Float_t         */ ht = 0;
  /*  Float_t         */ mass = 0;
  /*  Float_t         */ massInv_LL = 0;
  /*  Float_t         */ massInv_BQQ = 0;
  /*  Float_t         */ massTrans_BLMet = 0;
  /*  Float_t         */ massTrans_LMet = 0;
  /*  UInt_t          */ flag_DL = 0;
  /*  UInt_t          */ flag_TTZ = 0;
  /*  UInt_t          */ channel_DL = 0;
  /*  UInt_t          */ channel_TTZ = 0;
  /*  Float_t         */ scaledWeight = 0;
  /*  UInt_t          */ lep_n = 0;
   for (int il=0; il<3; il++) {
  /*  Bool_t          */ lep_truthMatched[il] = 0;   //[lep_n]
  /*  UShort_t        */ lep_trigMatched[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_pt[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_eta[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_phi[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_E[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_z0[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_charge[il] = 0;   //[lep_n]
  /*  Bool_t          */ lep_isTight[il] = 0;   //[lep_n]
  /*  UInt_t          */ lep_type[il] = 0;   //[lep_n]
  /*  UInt_t          */ lep_flag[il] = 0;   //[lep_n]
  /*  Float_t         */ el_cl_eta[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_ptcone30[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_etcone20[il] = 0;   //[lep_n]
  /*  Float_t         */ lep_miniIso10_4[il] = 0;   //[lep_n]
  /*  Float_t         */ massTrans_LMet_Vec[il] = 0;   //[lep_n]
  /*  UInt_t          */ lepPair_n = 0;
  /*  Bool_t          */ isSameFlavor_LL_Vec[il] = 0;   //[lepPair_n]
  /*  Bool_t          */ isOppSign_LL_Vec[il] = 0;   //[lepPair_n]
  /*  Float_t         */ massInv_LL_Vec[il] = 0;   //[lepPair_n]
   }
  /*  Float_t         */ met_sumet = 0;
  /*  Float_t         */ met_et = 0;
  /*  Float_t         */ met_phi = 0;
  /*  UInt_t          */ jet_n = 0;
  /*  UInt_t          */ alljet_n = 0;
   for (int ij=0; ij<13; ij++) {
  /*  Float_t         */ jet_pt[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_eta[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_phi[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_E[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_m[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_jvf[ij] = 0;   //[alljet_n]
  /*  Int_t           */ jet_trueflav[ij] = 0;   //[alljet_n]
  /*  Int_t           */ jet_truthMatched[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_SV0[ij] = 0;   //[alljet_n]
  /*  Float_t         */ jet_MV1[ij] = 0;   //[alljet_n]
  /*  UInt_t          */ jet_flag[ij] = 0;   //[alljet_n]
   }
  /*  Int_t           */ ttHDiLepBlind = 0;
  /*  Bool_t          */ EF_2e12Tvh_loose1 = 0;
  /*  Bool_t          */ EF_e24vh_medium1_e7_medium1 = 0;
  /*  Bool_t          */ EF_e12Tvh_medium1_mu8 = 0;
  /*  Bool_t          */ EF_e24vhi_loose1_mu8 = 0;
  /*  Bool_t          */ EF_e24vhi_medium1 = 0;
  /*  Bool_t          */ EF_e60_medium1 = 0;
  /*  Bool_t          */ EF_mu24i_tight = 0;
  /*  Bool_t          */ EF_mu36_tight = 0;
  /*  Bool_t          */ EF_mu18_tight_mu8_EFFS = 0;
  /*  UInt_t          */ particle_jet_n = 0;
  /*  Float_t         */ particle_jet_hthad = 0;
  /*  Float_t         */ particle_jet_lead_pt = 0;
  /*  UInt_t          */ mc_n = 0;
  /*  vector<float>   */ mc_E->clear();
  /*  vector<float>   */ mc_pt->clear();
  /*  vector<float>   */ mc_eta->clear();
  /*  vector<float>   */ mc_phi->clear();
  /*  vector<int>     */ mc_barcode->clear();
  /*  vector<int>     */ mc_status->clear();
  /*  vector<int>     */ mc_pdgId->clear();
  /*  vector<float>   */ mc_charge->clear();
  /*  vector<vector<int> > */ mc_parent_index->clear();
  /*  vector<vector<int> > */ mc_child_index->clear();

