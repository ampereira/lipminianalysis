// #############################################################################
//
//    _      _         __  __ _       _                        _           _     
//   | |    (_)       |  \/  (_)     (_)     /\               | |         (_)    
//   | |     _ _ __   | \  / |_ _ __  _     /  \   _ __   __ _| |_   _ ___ _ ___ 
//   | |    | | '_ \  | |\/| | | '_ \| |   / /\ \ | '_ \ / _` | | | | / __| / __|
//   | |____| | |_) | | |  | | | | | | |  / ____ \| | | | (_| | | |_| \__ \ \__ \
//   |______|_| .__/  |_|  |_|_|_| |_|_| /_/    \_\_| |_|\__,_|_|\__, |___/_|___/
//            | |                                                 __/ |          
//            |_|                                                |___/           
//                                                                              
// #############################################################################
//                                                                              
//   LipMiniAnalysis                            \      | | / |  /    |   |  ||  
//                                               '-___-+-+'  |_/     |   |  |   
//   by Antonio Onofre                          `--___-++--^'|       |   | /|   
//      (antonio.onofre@cern.ch)                       ||    |       |   |' |   
//   date: 23.Nov.2012                          --___  ||    |       | _/|  |   
//                                              ==---:-++___ |  ___--+'  |  |   
//                                                '--_'|'---'+--___  |   |  |   
//                                                    '+-_   |     '-+__ |  |   
//                                              ._.          ._.       ._____   
//                                              | |          | |       | ___ \  
//                                              | |_.        | |       | .___/  
//                                              |___|        |_|       |_|
//      
//   Note:      this code was built from LipCbrAnalysis developed by                                                       
//              Nuno Castro   (nfcastro@lipc.fis.uc.pt)  and 
//              Filipe Veloso (fveloso@lipc.fis.uc.pt)             
//
//
// #############################################################################
//
//
//  file: LipMiniAnalysis.cxx
//
//  purpose: this is the declaration of the LipMiniAnalysis class, which is a
//  skeleton for particle physics analyses using ROOT 
//
//  authors: nfcastro, fveloso
//  first version: nov.2005
//
//  last change: 02.nov.2013
//  by: A. Pereira
//
// #############################################################################

#ifndef LipMiniAnalysis_h
#define LipMiniAnalysis_h

#include <TChain.h>
#include <TFile.h>
#include <TLorentzVector.h>
#include <TNtuple.h>
#include <TRandom3.h>

#include <vector>

#include <getopt.h>
#include <time.h>
#include <fstream>
#include <sys/statvfs.h>
#include <stdlib.h>

#include "EventData.h"
#include "TLorentzVectorWFlags.h"
#include "Ntu.h"
#include "MiniTTHReader.h"
#include "THisto.h"
#include "TInput.h"
#include "TMonteCarlo.h"
#include "utilities.h"
//#include "EventDataInterface.h"

#include <omp.h>

#include <iostream>
#include <sstream>


extern std::vector<Event::EventData> events;
// flag for data events
extern int isData;
// cuts for jets
extern double EtaCutJet;
//extern int number_of_threads;
//extern int dilep_iterations;

#define MAX_EVENTS 1000000
#define LIPMINIANALYSIS_VERSION 2.0

// #############################################################################
class LipMiniAnalysis {
// #############################################################################
		char localfilename[400];
public:

	TTree          *fChain;   //!pointer to the analyzed TTree or TChain
	Int_t           fCurrent; //!current Tree number in a TChain

	std::vector<Ntu*> nTuple;


	// VECTOR WITH ALL THE EVENTS

//  ostream cout("out");

	// The version of LipMiniAnalysis
	float LipMiniAnalysisVersion;

	// files to read (ntuples)
	TInput Input;

	// The constructor and destructor
	LipMiniAnalysis();
	virtual ~LipMiniAnalysis();

	// To set default and user's values
	void DefaultValues();
	virtual void UserValues();
	void CommandLineOptions(int print);
//  virtual void UserCommandLineOptions(char * const *options);
	virtual void UserCommandLineOptions(char *options, int print);
	void SetSystematics();

	// time
	time_t rawtimeI;
	time_t rawtimeF;

	// general stuff
	std::string SetSystematicsFileName;
	std::string OutputFileName;
	std::string BackgroundPdfFile;
	std::string GRLXMLFile;
	std::vector<const char*> SignalPdfFiles;
	double Luminosity;
	int DoLike;
	int Sample;
	int subperiod;

	// units
	double keV;
	double MeV;
	double GeV;
	double TeV;

	// masses
	double mZ;
	double mW;
	double mt;
	double mT;

	// flags for data
	int isQCDantie;
	int isPretag;
	int isQCDmmm;

	int data_e_periodC;
	int data_e_periodD;
	int data_e_periodE;
	int data_e_periodF;

	int data_m_periodB;
	int data_m_periodC;
	int data_m_periodD;
	int data_m_periodE;
	int data_m_periodF;

	int data_e_periodA_F;
	int data_e_periodG_H;
	int data_m_periodA_F;
	int data_m_periodG_H;

	int data_e_periodI;
	int data_m_periodI;
 
	// cuts for electrons
	double EtaCutEle;
//  double PtCutEle;
	double IsoCutEle;
	int    RemoveElCrack;

	// cuts for muons
	double EtaCutMuo;
//  double PtCutMuo;
	double IsoCutMuo;

	// cuts for photons
	double EtaCutPho;
	double PtCutPho;
	double IsoCutPho;

//  double PtCutJet;
	double IsoCutJet;

	// jet energy calibration? and btag cut; both for fullsim topview >= 12-13
//  double LightJetCalib;
//  double BJetCalib;
//  double BTagCut;

 
	// flag to do good objects selection
	int doGoodObjSelection;

	// Pdf Smooth
	int PdfSmooth[50];

	// overlap of jets with photons and taus
	//int JetOverlap;

	// Options for different reconstruction of objets within the same ntuples
//  Int_t RecoType;

	// The main loop
	void Loop();

	/*// Variables which are filled for each event
	int Isub;
	int LumiBlock; 
	int RunNumber; 
	int EveNumber; 
	int TruthEleNumber; 
	int TruthMuonNumber; 
	int ElectronTrigger;
	int MuonTrigger;
	int Cosmic;
	int HforFlag;
	double Ht_Mini;
	double massInv_LL_Mini;
	int jet_n_Mini;
	int EleMuoOverlap;
	int JetCleanning;
	int GoodRL;
	double MissPx;
	double MissPy;
	double MissPt;
	double Weight;
	double Sphericity;
	double Aplanarity;
	double Planarity;

	std::vector<TLorentzVectorWFlags> TruthVec;
	std::vector<TLorentzVectorWFlags> TauVec;
	std::vector<TLorentzVectorWFlags> MuonVec;
	std::vector<TLorentzVectorWFlags> ElectronVec;
	std::vector<TLorentzVectorWFlags> LeptonVec;
	std::vector<TLorentzVectorWFlags> PhotonVec;
	std::vector<TLorentzVectorWFlags> BTaggedJetVec;
	std::vector<TLorentzVectorWFlags> NonTaggedJetVec;
	std::vector<TLorentzVectorWFlags> JetVec;

	//std::vector<TVertex> Vtx;
	std::vector<TVector3> Vtx;*/

	// To fill vectors with subtypes of particles
	/*void FillMuonVec();
	void FillElectronVec();
	void FillBTaggedJetVec();
	void FillNonTaggedJetVec();

	// Fill all vectors
	void FillAllVectors();

	// to compute isolation angles
	void LeptonIsolationDeltaR();
	void PhotonIsolationDeltaR();
	void JetIsolationDeltaR();
	void TauIsolationDeltaR();*/


	// Main function
	int argc;
	char *const *argv;
	void Start(int i_argc, char *const *i_argv);

///////////////////////////////

	// amostras para ler
	std::vector<TMonteCarlo> MonteCarlo;
	virtual void DefineSamples();
	void ReadFiles(const char * ntu, const char * file, int type, double run, long double lum, long long int nGenEvt, std::string title);

	// stuff for selection levels
	// number of cuts: do not forget to change when a new cut is added
	//const static int MaxCuts=10;
	int MaxCuts;
//  int LastCut;
	virtual void DoCuts();
	virtual void first_DoCuts();
	virtual void second_DoCuts();

	virtual void preKinFit();

	// stuff for histograms
	//TH1D* histo[MaxCuts+1][100];
	//Isto vai estoirar se houver mais de 20 niveis de selecao ou mais de 200 
	//histogramas por nivel...
	//TH1D* histo[20][200];
	inline char* c(char *s, int i, const char *t) { sprintf(s, "sel%02i%s", i, t); return s;}
	virtual void BookHistograms(THistos&);
	virtual void FillHistograms(THistos&);

	// stuff for making pdf
	// TFile* SignalPdf;
	// TFile* BackgroundPdf;
	std::vector< std::vector<TH1D*> > PdfVec;
	std::vector<double> ThisEventPdfValues;
	inline char* pdf(char *s, int i) { sprintf(s, "pdf%02i", i); return s;}
	virtual void BookPdfHistos(Int_t);
	virtual void PdfValues();
	void FillPdf(Int_t);
	void ProcessPdf();

	// stuff for reading pdf and making likelihoods
	virtual void DefineSignalPdfSamples();
	TH1D* LogELikeSHist;
	TH1D* LogELikeBHist;
	TH1D* LogELikelihoodHist;
	TH1D* Log10LikeSHist;
	TH1D* Log10LikeBHist;
	TH1D* Log10LikelihoodHist;
	TH1D* LogELikeSHistVec[100];
	TH1D* LogELikeBHistVec[100];
	TH1D* LogELikelihoodHistVec[100];
	TH1D* Log10LikeSHistVec[100];
	TH1D* Log10LikeBHistVec[100];
	TH1D* Log10LikelihoodHistVec[100];
	std::vector<TH1D*> SignalPdfVec[100];
	std::vector<TH1D*> BackgroundPdfVec;
	double LogELikeSValue;
	double LogELikeBValue;
	double LogELikeLOverLikeBValue;
	double LogELikeMinCut;
	double LogELikeMaxCut;
	double Log10LikeSValue;
	double Log10LikeBValue;
	double Log10LikeLOverLikeBValue;
	double Log10LikeMinCut;
	double Log10LikeMaxCut;
	void ReadPdf();
	virtual void BookLikeHistos();
	void ProcessBookLikeHistos();
	void ComputeAndFillLikelihood();

	// nTuple with surviving events
	std::vector<TNtuple*> OutputNtuple;
	void CreateOutputNtuple();
	void FillOutputNtuple(Int_t);

	// stuff for calculations after events loop
	virtual void PostLoopCalculations();

	// stuff for print stuff
	void PrintSummary(int OutputLevel, Int_t i_syst);

	// systematics
	std::vector<Int_t> Syst;
	std::vector<std::string> SystName;

	// stuff for write histograms to file
	std::vector<TFile*> OutputFile;
	void CreateOutputFile();
	void WriteHistograms();

	
};

#endif
