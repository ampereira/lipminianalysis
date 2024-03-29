   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("channelNumber", &channelNumber, &b_channelNumber);
   fChain->SetBranchAddress("lbNumber", &lbNumber, &b_lbNumber);
   fChain->SetBranchAddress("rndRunNumber", &rndRunNumber, &b_rndRunNumber);
   fChain->SetBranchAddress("dataPeriod", &dataPeriod, &b_dataPeriod);
   fChain->SetBranchAddress("mu", &mu, &b_mu);
   fChain->SetBranchAddress("mcWeight", &mcWeight, &b_mcWeight);
   fChain->SetBranchAddress("eventWeight_PRETAG", &eventWeight_PRETAG, &b_eventWeight_PRETAG);
   fChain->SetBranchAddress("eventWeight_BTAG", &eventWeight_BTAG, &b_eventWeight_BTAG);
   fChain->SetBranchAddress("pvxp_n", &pvxp_n, &b_pvxp_n);
   fChain->SetBranchAddress("hfor", &hfor, &b_hfor);
   fChain->SetBranchAddress("vxp_z", &vxp_z, &b_vxp_z);
   fChain->SetBranchAddress("mc_vxp_z", &mc_vxp_z, &b_mc_vxp_z);
   fChain->SetBranchAddress("mcevt_pdf1", &mcevt_pdf1, &b_mcevt_pdf1);
   fChain->SetBranchAddress("mcevt_pdf2", &mcevt_pdf2, &b_mcevt_pdf2);
   fChain->SetBranchAddress("mcevt_pdf_id1", &mcevt_pdf_id1, &b_mcevt_pdf_id1);
   fChain->SetBranchAddress("mcevt_pdf_id2", &mcevt_pdf_id2, &b_mcevt_pdf_id2);
   fChain->SetBranchAddress("mcevt_pdf_scale", &mcevt_pdf_scale, &b_mcevt_pdf_scale);
   fChain->SetBranchAddress("mcevt_pdf_x1", &mcevt_pdf_x1, &b_mcevt_pdf_x1);
   fChain->SetBranchAddress("mcevt_pdf_x2", &mcevt_pdf_x2, &b_mcevt_pdf_x2);
   fChain->SetBranchAddress("scaleFactor_PILEUP", &scaleFactor_PILEUP, &b_m_scaleFactor_PILEUP);
   fChain->SetBranchAddress("scaleFactor_ELE", &scaleFactor_ELE, &b_m_scaleFactor_ELE);
   fChain->SetBranchAddress("scaleFactor_MUON", &scaleFactor_MUON, &b_m_scaleFactor_MUON);
   fChain->SetBranchAddress("scaleFactor_BTAG", &scaleFactor_BTAG, &b_m_scaleFactor_BTAG);
   fChain->SetBranchAddress("scaleFactor_TRIGGER", &scaleFactor_TRIGGER, &b_m_scaleFactor_TRIGGER);
   fChain->SetBranchAddress("scaleFactor_WJETSNORM", &scaleFactor_WJETSNORM, &b_m_scaleFactor_WJETSNORM);
   fChain->SetBranchAddress("scaleFactor_WJETSSHAPE", &scaleFactor_WJETSSHAPE, &b_m_scaleFactor_WJETSSHAPE);
   fChain->SetBranchAddress("scaleFactor_JVFSF", &scaleFactor_JVFSF, &b_m_scaleFactor_JVFSF);
   fChain->SetBranchAddress("scaleFactor_ZVERTEX", &scaleFactor_ZVERTEX, &b_m_scaleFactor_ZVERTEX);
   fChain->SetBranchAddress("scaleFactor_ALLPRETAG", &scaleFactor_ALLPRETAG, &b_m_scaleFactor_ALLPRETAG);
   fChain->SetBranchAddress("scaleFactor_ALLBTAG", &scaleFactor_ALLBTAG, &b_m_scaleFactor_ALLBTAG);
   fChain->SetBranchAddress("truE", &truE, &b_truE);
   fChain->SetBranchAddress("truM", &truM, &b_truM);
   fChain->SetBranchAddress("trigE", &trigE, &b_trigE);
   fChain->SetBranchAddress("trigM", &trigM, &b_trigM);
   fChain->SetBranchAddress("passGRL", &passGRL, &b_passGRL);
   fChain->SetBranchAddress("cosmicEvent", &cosmicEvent, &b_cosmicEvent);
   fChain->SetBranchAddress("isOS", &isOS, &b_isOS);
   fChain->SetBranchAddress("hasGoodVertex", &hasGoodVertex, &b_hasGoodVertex);
   fChain->SetBranchAddress("ht", &ht, &b_ht);
   fChain->SetBranchAddress("mass", &mass, &b_mass);
   fChain->SetBranchAddress("massInv_LL", &massInv_LL, &b_massInv_LL);
   fChain->SetBranchAddress("massInv_BQQ", &massInv_BQQ, &b_massInv_BQQ);
   fChain->SetBranchAddress("massTrans_BLMet", &massTrans_BLMet, &b_massTrans_BLMet);
   fChain->SetBranchAddress("massTrans_LMet", &massTrans_LMet, &b_massTrans_LMet);
   fChain->SetBranchAddress("flag_DL", &flag_DL, &b_flag_DL);
   fChain->SetBranchAddress("flag_TTZ", &flag_TTZ, &b_flag_TTZ);
   fChain->SetBranchAddress("channel_DL", &channel_DL, &b_channel_DL);
   fChain->SetBranchAddress("channel_TTZ", &channel_TTZ, &b_channel_TTZ);
   fChain->SetBranchAddress("scaledWeight", &scaledWeight, &b_scaledWeight);
   fChain->SetBranchAddress("lep_n", &lep_n, &b_lep_n);
   fChain->SetBranchAddress("lep_truthMatched", lep_truthMatched, &b_lep_truthMatched);
   fChain->SetBranchAddress("lep_trigMatched", lep_trigMatched, &b_lep_trigMatched);
   fChain->SetBranchAddress("lep_pt", lep_pt, &b_lep_pt);
   fChain->SetBranchAddress("lep_eta", lep_eta, &b_lep_eta);
   fChain->SetBranchAddress("lep_phi", lep_phi, &b_lep_phi);
   fChain->SetBranchAddress("lep_E", lep_E, &b_lep_E);
   fChain->SetBranchAddress("lep_z0", lep_z0, &b_lep_z0);
   fChain->SetBranchAddress("lep_charge", lep_charge, &b_lep_charge);
   fChain->SetBranchAddress("lep_isTight", lep_isTight, &b_lep_isTight);
   fChain->SetBranchAddress("lep_type", lep_type, &b_lep_type);
   fChain->SetBranchAddress("lep_flag", lep_flag, &b_lep_flag);
   fChain->SetBranchAddress("el_cl_eta", el_cl_eta, &b_el_cl_eta);
   fChain->SetBranchAddress("lep_ptcone30", lep_ptcone30, &b_lep_ptcone30);
   fChain->SetBranchAddress("lep_etcone20", lep_etcone20, &b_lep_etcone20);
   fChain->SetBranchAddress("lep_miniIso10_4", lep_miniIso10_4, &b_lep_miniIso10_4);
   fChain->SetBranchAddress("lep_trackd0pvunbiased", lep_trackd0pvunbiased, &b_lep_trackd0pvunbiased);
   fChain->SetBranchAddress("lep_tracksigd0pvunbiased", lep_tracksigd0pvunbiased, &b_lep_tracksigd0pvunbiased);
   fChain->SetBranchAddress("massTrans_LMet_Vec", massTrans_LMet_Vec, &b_massTrans_LMet_Vec);
   fChain->SetBranchAddress("lepPair_n", &lepPair_n, &b_lepPair_n);
   fChain->SetBranchAddress("isSameFlavor_LL_Vec", isSameFlavor_LL_Vec, &b_isSameFlavor_LL_Vec);
   fChain->SetBranchAddress("isOppSign_LL_Vec", isOppSign_LL_Vec, &b_isOppSign_LL_Vec);
   fChain->SetBranchAddress("massInv_LL_Vec", massInv_LL_Vec, &b_massInv_LL_Vec);
   fChain->SetBranchAddress("met_sumet", &met_sumet, &b_met_sumet);
   fChain->SetBranchAddress("met_et", &met_et, &b_met_et);
   fChain->SetBranchAddress("met_phi", &met_phi, &b_met_phi);
   fChain->SetBranchAddress("jet_n", &jet_n, &b_jet_n);
   fChain->SetBranchAddress("bjet_n", &bjet_n, &b_bjet_n);
   fChain->SetBranchAddress("alljet_n", &alljet_n, &b_alljet_n);
   fChain->SetBranchAddress("jet_pt", jet_pt, &b_jet_pt);
   fChain->SetBranchAddress("jet_eta", jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_phi", jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("jet_E", jet_E, &b_jet_E);
   fChain->SetBranchAddress("jet_m", jet_m, &b_jet_m);
   fChain->SetBranchAddress("jet_jvf", jet_jvf, &b_jet_jvf);
   fChain->SetBranchAddress("jet_trueflav", jet_trueflav, &b_jet_trueflav);
   fChain->SetBranchAddress("jet_truthMatched", jet_truthMatched, &b_jet_truthMatched);
   fChain->SetBranchAddress("jet_SV0", jet_SV0, &b_jet_SV0);
   fChain->SetBranchAddress("jet_MV1", jet_MV1, &b_jet_MV1);
   fChain->SetBranchAddress("jet_MV1c", jet_MV1c, &b_jet_MV1c);
   fChain->SetBranchAddress("jet_flag", jet_flag, &b_jet_flag);
   fChain->SetBranchAddress("ttHDiLepBlind", &ttHDiLepBlind, &b_ttHDiLepBlind);
   fChain->SetBranchAddress("lep_LHflag", lep_LHflag, &b_lep_LHflag);
   fChain->SetBranchAddress("lep_ppflag", lep_ppflag, &b_lep_ppflag);
   fChain->SetBranchAddress("el_topgood", &el_topgood, &b_el_topgood);
   fChain->SetBranchAddress("EF_2e12Tvh_loose1", &EF_2e12Tvh_loose1, &b_EF_2e12Tvh_loose1);
   fChain->SetBranchAddress("EF_e24vh_medium1_e7_medium1", &EF_e24vh_medium1_e7_medium1, &b_EF_e24vh_medium1_e7_medium1);
   fChain->SetBranchAddress("EF_e12Tvh_medium1_mu8", &EF_e12Tvh_medium1_mu8, &b_EF_e12Tvh_medium1_mu8);
   fChain->SetBranchAddress("EF_e24vhi_loose1_mu8", &EF_e24vhi_loose1_mu8, &b_EF_e24vhi_loose1_mu8);
   fChain->SetBranchAddress("EF_e24vhi_medium1", &EF_e24vhi_medium1, &b_EF_e24vhi_medium1);
   fChain->SetBranchAddress("EF_e60_medium1", &EF_e60_medium1, &b_EF_e60_medium1);
   fChain->SetBranchAddress("EF_mu24i_tight", &EF_mu24i_tight, &b_EF_mu24i_tight);
   fChain->SetBranchAddress("EF_mu36_tight", &EF_mu36_tight, &b_EF_mu36_tight);
   fChain->SetBranchAddress("EF_mu18_tight_mu8_EFFS", &EF_mu18_tight_mu8_EFFS, &b_EF_mu18_tight_mu8_EFFS);
   fChain->SetBranchAddress("met_etx", &met_etx, &b_met_etx);
   fChain->SetBranchAddress("met_ety", &met_ety, &b_met_ety);
   fChain->SetBranchAddress("met_RefEle_sumet", &met_RefEle_sumet, &b_met_RefEle_sumet);
   fChain->SetBranchAddress("met_RefEle_etx", &met_RefEle_etx, &b_met_RefEle_etx);
   fChain->SetBranchAddress("met_RefEle_ety", &met_RefEle_ety, &b_met_RefEle_ety);
   fChain->SetBranchAddress("met_RefJet_sumet", &met_RefJet_sumet, &b_met_RefJet_sumet);
   fChain->SetBranchAddress("met_RefJet_etx", &met_RefJet_etx, &b_met_RefJet_etx);
   fChain->SetBranchAddress("met_RefJet_ety", &met_RefJet_ety, &b_met_RefJet_ety);
   fChain->SetBranchAddress("met_SoftJets_sumet", &met_SoftJets_sumet, &b_met_SoftJets_sumet);
   fChain->SetBranchAddress("met_SoftJets_etx", &met_SoftJets_etx, &b_met_SoftJets_etx);
   fChain->SetBranchAddress("met_SoftJets_ety", &met_SoftJets_ety, &b_met_SoftJets_ety);
   fChain->SetBranchAddress("met_CellOut_sumet", &met_CellOut_sumet, &b_met_CellOut_sumet);
   fChain->SetBranchAddress("met_CellOut_etx", &met_CellOut_etx, &b_met_CellOut_etx);
   fChain->SetBranchAddress("met_CellOut_ety", &met_CellOut_ety, &b_met_CellOut_ety);
   fChain->SetBranchAddress("met_Muon_Total_Muid_etx", &met_Muon_Total_Muid_etx, &b_met_Muon_Total_Muid_etx);
   fChain->SetBranchAddress("met_Muon_Total_Muid_ety", &met_Muon_Total_Muid_ety, &b_met_Muon_Total_Muid_ety);
   fChain->SetBranchAddress("particle_jet_n", &particle_jet_n, &b_particle_jet_n);
   fChain->SetBranchAddress("particle_jet_hthad", &particle_jet_hthad, &b_particle_jet_hthad);
   fChain->SetBranchAddress("particle_jet_lead_pt", &particle_jet_lead_pt, &b_particle_jet_lead_pt);
   fChain->SetBranchAddress("mc_n", &mc_n, &b_mc_n);
   fChain->SetBranchAddress("mc_E", &mc_E, &b_mc_E);
   fChain->SetBranchAddress("mc_pt", &mc_pt, &b_mc_pt);
   fChain->SetBranchAddress("mc_eta", &mc_eta, &b_mc_eta);
   fChain->SetBranchAddress("mc_phi", &mc_phi, &b_mc_phi);
   fChain->SetBranchAddress("mc_barcode", &mc_barcode, &b_mc_barcode);
   fChain->SetBranchAddress("mc_status", &mc_status, &b_mc_status);
   fChain->SetBranchAddress("mc_pdgId", &mc_pdgId, &b_mc_pdgId);
   fChain->SetBranchAddress("mc_charge", &mc_charge, &b_mc_charge);
   fChain->SetBranchAddress("mc_parent_index", &mc_parent_index, &b_mc_parent_index);
   fChain->SetBranchAddress("mc_child_index", &mc_child_index, &b_mc_child_index);
   fChain->SetBranchAddress("true_lep_n", &true_lep_n, &b_true_lep_n);
   fChain->SetBranchAddress("true_lep_E", &true_lep_E, &b_true_lep_E);
   fChain->SetBranchAddress("true_lep_pt", &true_lep_pt, &b_true_lep_pt);
   fChain->SetBranchAddress("true_lep_eta", &true_lep_eta, &b_true_lep_eta);
   fChain->SetBranchAddress("true_lep_phi", &true_lep_phi, &b_true_lep_phi);
   fChain->SetBranchAddress("true_lep_type", &true_lep_type, &b_true_lep_type);
   fChain->SetBranchAddress("true_lep_charge", &true_lep_charge, &b_true_lep_charge);
   fChain->SetBranchAddress("true_jet_n", &true_jet_n, &b_true_jet_n);
   fChain->SetBranchAddress("true_jet_E", &true_jet_E, &b_true_jet_E);
   fChain->SetBranchAddress("true_jet_pt", &true_jet_pt, &b_true_jet_pt);
   fChain->SetBranchAddress("true_jet_eta", &true_jet_eta, &b_true_jet_eta);
   fChain->SetBranchAddress("true_jet_phi", &true_jet_phi, &b_true_jet_phi);
   fChain->SetBranchAddress("true_jet_m", &true_jet_m, &b_true_jet_m);
   fChain->SetBranchAddress("true_jet_dR_Bhadron", &true_jet_dR_Bhadron, &b_true_jet_dR_Bhadron);
   fChain->SetBranchAddress("true_non_int_n", &true_non_int_n, &b_true_non_int_n);
   fChain->SetBranchAddress("true_non_int_E", &true_non_int_E, &b_true_non_int_E);
   fChain->SetBranchAddress("true_non_int_pt", &true_non_int_pt, &b_true_non_int_pt);
   fChain->SetBranchAddress("true_non_int_eta", &true_non_int_eta, &b_true_non_int_eta);
   fChain->SetBranchAddress("true_non_int_phi", &true_non_int_phi, &b_true_non_int_phi);
   fChain->SetBranchAddress("true_non_int_type", &true_non_int_type, &b_true_non_int_type);

