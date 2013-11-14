   // Declaration of leaf types
   Int_t           runNumber;
   Int_t           eventNumber;
   Int_t           channelNumber;
   Int_t           lbNumber;
   Int_t           rndRunNumber;
   Int_t           dataPeriod;
   Float_t         mu;
   Float_t         mcWeight;
   Float_t         eventWeight_PRETAG;
   Float_t         eventWeight_BTAG;
   Int_t           pvxp_n;
   Int_t           hfor;
   Float_t         vxp_z;
   Float_t         mc_vxp_z;
   Double_t        mcevt_pdf1;
   Double_t        mcevt_pdf2;
   Int_t           mcevt_pdf_id1;
   Int_t           mcevt_pdf_id2;
   Double_t        mcevt_pdf_scale;
   Double_t        mcevt_pdf_x1;
   Double_t        mcevt_pdf_x2;
   Float_t         scaleFactor_PILEUP;
   Float_t         scaleFactor_ELE;
   Float_t         scaleFactor_MUON;
   Float_t         scaleFactor_BTAG;
   Float_t         scaleFactor_TRIGGER;
   Float_t         scaleFactor_WJETSNORM;
   Float_t         scaleFactor_WJETSSHAPE;
   Float_t         scaleFactor_JVFSF;
   Float_t         scaleFactor_ZVERTEX;
   Float_t         scaleFactor_ALLPRETAG;
   Float_t         scaleFactor_ALLBTAG;
   Int_t           truE;
   Int_t           truM;
   Bool_t          trigE;
   Bool_t          trigM;
   Bool_t          passGRL;
   Bool_t          cosmicEvent;
   Bool_t          isOS;
   Bool_t          hasGoodVertex;
   Float_t         ht;
   Float_t         mass;
   Float_t         massInv_LL;
   Float_t         massInv_BQQ;
   Float_t         massTrans_BLMet;
   Float_t         massTrans_LMet;
   UInt_t          flag_DL;
   UInt_t          flag_TTZ;
   UInt_t          channel_DL;
   UInt_t          channel_TTZ;
   Float_t         scaledWeight;
   UInt_t          lep_n;
   Bool_t          lep_truthMatched[4];   //[lep_n]
   UShort_t        lep_trigMatched[4];   //[lep_n]
   Float_t         lep_pt[4];   //[lep_n]
   Float_t         lep_eta[4];   //[lep_n]
   Float_t         lep_phi[4];   //[lep_n]
   Float_t         lep_E[4];   //[lep_n]
   Float_t         lep_z0[4];   //[lep_n]
   Float_t         lep_charge[4];   //[lep_n]
   Bool_t          lep_isTight[4];   //[lep_n]
   UInt_t          lep_type[4];   //[lep_n]
   UInt_t          lep_flag[4];   //[lep_n]
   Float_t         el_cl_eta[4];   //[lep_n]
   Float_t         lep_ptcone30[4];   //[lep_n]
   Float_t         lep_etcone20[4];   //[lep_n]
   Float_t         lep_miniIso10_4[4];   //[lep_n]
   Float_t         lep_trackd0pvunbiased[4];   //[lep_n]
   Float_t         lep_tracksigd0pvunbiased[4];   //[lep_n]
   Float_t         massTrans_LMet_Vec[4];   //[lep_n]
   UInt_t          lepPair_n;
   Bool_t          isSameFlavor_LL_Vec[6];   //[lepPair_n]
   Bool_t          isOppSign_LL_Vec[6];   //[lepPair_n]
   Float_t         massInv_LL_Vec[6];   //[lepPair_n]
   Float_t         met_sumet;
   Float_t         met_et;
   Float_t         met_phi;
   UInt_t          jet_n;
   UInt_t          bjet_n;
   UInt_t          alljet_n;
   Float_t         jet_pt[12];   //[alljet_n]
   Float_t         jet_eta[12];   //[alljet_n]
   Float_t         jet_phi[12];   //[alljet_n]
   Float_t         jet_E[12];   //[alljet_n]
   Float_t         jet_m[12];   //[alljet_n]
   Float_t         jet_jvf[12];   //[alljet_n]
   Int_t           jet_trueflav[12];   //[alljet_n]
   Int_t           jet_truthMatched[12];   //[alljet_n]
   Float_t         jet_SV0[12];   //[alljet_n]
   Float_t         jet_MV1[12];   //[alljet_n]
   Float_t         jet_MV1c[12];   //[alljet_n]
   UInt_t          jet_flag[12];   //[alljet_n]
   Int_t           ttHDiLepBlind;
   Int_t           lep_LHflag[4];   //[lep_n]
   Int_t           lep_ppflag[4];   //[lep_n]
   std::vector<int>     *el_topgood;
   Bool_t          EF_2e12Tvh_loose1;
   Bool_t          EF_e24vh_medium1_e7_medium1;
   Bool_t          EF_e12Tvh_medium1_mu8;
   Bool_t          EF_e24vhi_loose1_mu8;
   Bool_t          EF_e24vhi_medium1;
   Bool_t          EF_e60_medium1;
   Bool_t          EF_mu24i_tight;
   Bool_t          EF_mu36_tight;
   Bool_t          EF_mu18_tight_mu8_EFFS;
   Float_t         met_etx;
   Float_t         met_ety;
   Float_t         met_RefEle_sumet;
   Float_t         met_RefEle_etx;
   Float_t         met_RefEle_ety;
   Float_t         met_RefJet_sumet;
   Float_t         met_RefJet_etx;
   Float_t         met_RefJet_ety;
   Float_t         met_SoftJets_sumet;
   Float_t         met_SoftJets_etx;
   Float_t         met_SoftJets_ety;
   Float_t         met_CellOut_sumet;
   Float_t         met_CellOut_etx;
   Float_t         met_CellOut_ety;
   Float_t         met_Muon_Total_Muid_etx;
   Float_t         met_Muon_Total_Muid_ety;
   UInt_t          particle_jet_n;
   Float_t         particle_jet_hthad;
   Float_t         particle_jet_lead_pt;
   UInt_t          mc_n;
   std::vector<float>   *mc_E;
   std::vector<float>   *mc_pt;
   std::vector<float>   *mc_eta;
   std::vector<float>   *mc_phi;
   std::vector<int>     *mc_barcode;
   std::vector<int>     *mc_status;
   std::vector<int>     *mc_pdgId;
   std::vector<float>   *mc_charge;
   std::vector<std::vector<int> > *mc_parent_index;
   std::vector<std::vector<int> > *mc_child_index;
   UInt_t          true_lep_n;
   std::vector<float>   *true_lep_E;
   std::vector<float>   *true_lep_pt;
   std::vector<float>   *true_lep_eta;
   std::vector<float>   *true_lep_phi;
   std::vector<unsigned int> *true_lep_type;
   std::vector<int>     *true_lep_charge;
   UInt_t          true_jet_n;
   std::vector<float>   *true_jet_E;
   std::vector<float>   *true_jet_pt;
   std::vector<float>   *true_jet_eta;
   std::vector<float>   *true_jet_phi;
   std::vector<float>   *true_jet_m;
   std::vector<float>   *true_jet_dR_Bhadron;
   UInt_t          true_non_int_n;
   std::vector<float>   *true_non_int_E;
   std::vector<float>   *true_non_int_pt;
   std::vector<float>   *true_non_int_eta;
   std::vector<float>   *true_non_int_phi;
   std::vector<int>     *true_non_int_type;

   // List of branches
   TBranch        *b_runNumber;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_channelNumber;   //!
   TBranch        *b_lbNumber;   //!
   TBranch        *b_rndRunNumber;   //!
   TBranch        *b_dataPeriod;   //!
   TBranch        *b_mu;   //!
   TBranch        *b_mcWeight;   //!
   TBranch        *b_eventWeight_PRETAG;   //!
   TBranch        *b_eventWeight_BTAG;   //!
   TBranch        *b_pvxp_n;   //!
   TBranch        *b_hfor;   //!
   TBranch        *b_vxp_z;   //!
   TBranch        *b_mc_vxp_z;   //!
   TBranch        *b_mcevt_pdf1;   //!
   TBranch        *b_mcevt_pdf2;   //!
   TBranch        *b_mcevt_pdf_id1;   //!
   TBranch        *b_mcevt_pdf_id2;   //!
   TBranch        *b_mcevt_pdf_scale;   //!
   TBranch        *b_mcevt_pdf_x1;   //!
   TBranch        *b_mcevt_pdf_x2;   //!
   TBranch        *b_m_scaleFactor_PILEUP;   //!
   TBranch        *b_m_scaleFactor_ELE;   //!
   TBranch        *b_m_scaleFactor_MUON;   //!
   TBranch        *b_m_scaleFactor_BTAG;   //!
   TBranch        *b_m_scaleFactor_TRIGGER;   //!
   TBranch        *b_m_scaleFactor_WJETSNORM;   //!
   TBranch        *b_m_scaleFactor_WJETSSHAPE;   //!
   TBranch        *b_m_scaleFactor_JVFSF;   //!
   TBranch        *b_m_scaleFactor_ZVERTEX;   //!
   TBranch        *b_m_scaleFactor_ALLPRETAG;   //!
   TBranch        *b_m_scaleFactor_ALLBTAG;   //!
   TBranch        *b_truE;   //!
   TBranch        *b_truM;   //!
   TBranch        *b_trigE;   //!
   TBranch        *b_trigM;   //!
   TBranch        *b_passGRL;   //!
   TBranch        *b_cosmicEvent;   //!
   TBranch        *b_isOS;   //!
   TBranch        *b_hasGoodVertex;   //!
   TBranch        *b_ht;   //!
   TBranch        *b_mass;   //!
   TBranch        *b_massInv_LL;   //!
   TBranch        *b_massInv_BQQ;   //!
   TBranch        *b_massTrans_BLMet;   //!
   TBranch        *b_massTrans_LMet;   //!
   TBranch        *b_flag_DL;   //!
   TBranch        *b_flag_TTZ;   //!
   TBranch        *b_channel_DL;   //!
   TBranch        *b_channel_TTZ;   //!
   TBranch        *b_scaledWeight;   //!
   TBranch        *b_lep_n;   //!
   TBranch        *b_lep_truthMatched;   //!
   TBranch        *b_lep_trigMatched;   //!
   TBranch        *b_lep_pt;   //!
   TBranch        *b_lep_eta;   //!
   TBranch        *b_lep_phi;   //!
   TBranch        *b_lep_E;   //!
   TBranch        *b_lep_z0;   //!
   TBranch        *b_lep_charge;   //!
   TBranch        *b_lep_isTight;   //!
   TBranch        *b_lep_type;   //!
   TBranch        *b_lep_flag;   //!
   TBranch        *b_el_cl_eta;   //!
   TBranch        *b_lep_ptcone30;   //!
   TBranch        *b_lep_etcone20;   //!
   TBranch        *b_lep_miniIso10_4;   //!
   TBranch        *b_lep_trackd0pvunbiased;   //!
   TBranch        *b_lep_tracksigd0pvunbiased;   //!
   TBranch        *b_massTrans_LMet_Vec;   //!
   TBranch        *b_lepPair_n;   //!
   TBranch        *b_isSameFlavor_LL_Vec;   //!
   TBranch        *b_isOppSign_LL_Vec;   //!
   TBranch        *b_massInv_LL_Vec;   //!
   TBranch        *b_met_sumet;   //!
   TBranch        *b_met_et;   //!
   TBranch        *b_met_phi;   //!
   TBranch        *b_jet_n;   //!
   TBranch        *b_bjet_n;   //!
   TBranch        *b_alljet_n;   //!
   TBranch        *b_jet_pt;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_jet_E;   //!
   TBranch        *b_jet_m;   //!
   TBranch        *b_jet_jvf;   //!
   TBranch        *b_jet_trueflav;   //!
   TBranch        *b_jet_truthMatched;   //!
   TBranch        *b_jet_SV0;   //!
   TBranch        *b_jet_MV1;   //!
   TBranch        *b_jet_MV1c;   //!
   TBranch        *b_jet_flag;   //!
   TBranch        *b_ttHDiLepBlind;   //!
   TBranch        *b_lep_LHflag;   //!
   TBranch        *b_lep_ppflag;   //!
   TBranch        *b_el_topgood;   //!
   TBranch        *b_EF_2e12Tvh_loose1;   //!
   TBranch        *b_EF_e24vh_medium1_e7_medium1;   //!
   TBranch        *b_EF_e12Tvh_medium1_mu8;   //!
   TBranch        *b_EF_e24vhi_loose1_mu8;   //!
   TBranch        *b_EF_e24vhi_medium1;   //!
   TBranch        *b_EF_e60_medium1;   //!
   TBranch        *b_EF_mu24i_tight;   //!
   TBranch        *b_EF_mu36_tight;   //!
   TBranch        *b_EF_mu18_tight_mu8_EFFS;   //!
   TBranch        *b_met_etx;   //!
   TBranch        *b_met_ety;   //!
   TBranch        *b_met_RefEle_sumet;   //!
   TBranch        *b_met_RefEle_etx;   //!
   TBranch        *b_met_RefEle_ety;   //!
   TBranch        *b_met_RefJet_sumet;   //!
   TBranch        *b_met_RefJet_etx;   //!
   TBranch        *b_met_RefJet_ety;   //!
   TBranch        *b_met_SoftJets_sumet;   //!
   TBranch        *b_met_SoftJets_etx;   //!
   TBranch        *b_met_SoftJets_ety;   //!
   TBranch        *b_met_CellOut_sumet;   //!
   TBranch        *b_met_CellOut_etx;   //!
   TBranch        *b_met_CellOut_ety;   //!
   TBranch        *b_met_Muon_Total_Muid_etx;   //!
   TBranch        *b_met_Muon_Total_Muid_ety;   //!
   TBranch        *b_particle_jet_n;   //!
   TBranch        *b_particle_jet_hthad;   //!
   TBranch        *b_particle_jet_lead_pt;   //!
   TBranch        *b_mc_n;   //!
   TBranch        *b_mc_E;   //!
   TBranch        *b_mc_pt;   //!
   TBranch        *b_mc_eta;   //!
   TBranch        *b_mc_phi;   //!
   TBranch        *b_mc_barcode;   //!
   TBranch        *b_mc_status;   //!
   TBranch        *b_mc_pdgId;   //!
   TBranch        *b_mc_charge;   //!
   TBranch        *b_mc_parent_index;   //!
   TBranch        *b_mc_child_index;   //!
   TBranch        *b_true_lep_n;   //!
   TBranch        *b_true_lep_E;   //!
   TBranch        *b_true_lep_pt;   //!
   TBranch        *b_true_lep_eta;   //!
   TBranch        *b_true_lep_phi;   //!
   TBranch        *b_true_lep_type;   //!
   TBranch        *b_true_lep_charge;   //!
   TBranch        *b_true_jet_n;   //!
   TBranch        *b_true_jet_E;   //!
   TBranch        *b_true_jet_pt;   //!
   TBranch        *b_true_jet_eta;   //!
   TBranch        *b_true_jet_phi;   //!
   TBranch        *b_true_jet_m;   //!
   TBranch        *b_true_jet_dR_Bhadron;   //!
   TBranch        *b_true_non_int_n;   //!
   TBranch        *b_true_non_int_E;   //!
   TBranch        *b_true_non_int_pt;   //!
   TBranch        *b_true_non_int_eta;   //!
   TBranch        *b_true_non_int_phi;   //!
   TBranch        *b_true_non_int_type;   //!




