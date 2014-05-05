#ifndef LIP_TMONTECARLO
#define LIP_TMONTECARLO

#include <string>
#include <vector>
#include <iostream>
#include <TFile.h>
#include <cmath>
#include <cstdlib>
#include "THisto.h"

class TMonteCarlo {
	int p_type;
	double p_run;
	long double p_lum;
	long long int p_nGenEvt;
	std::string p_title;
	double p_CrossSection;
	TDirectory *dir;

public:
	TMonteCarlo (int type, double run, long double lum, long long int nGenEvt, std::string title);
	TMonteCarlo (int type, double run, long double lum, long long int nGenEvt, std::string title, int MaxCuts);
	~TMonteCarlo (void);
	inline void AddSelEvt (Int_t i_syst, Int_t level) {p_nSelEvt[i_syst][level]++;}
	inline void AddSelWeightedEvt (Int_t i_syst, Int_t level, Double_t weight) {p_nSelWeightedEvt[i_syst][level]+=weight;}
	inline int type (void) {return p_type;}
	inline double run (void) {return p_run;}
	inline double CrossSection (void) {return p_CrossSection;}
	inline long long int nGenEvt (void) {return p_nGenEvt;}
	void SetnGenEvt (long long int nGenEvt);
	inline std::string title (void) {return p_title;}
	inline long double lum (void) {return p_lum;}
	inline double nSelEvt (Int_t i_syst, Int_t level) {return p_nSelEvt[i_syst][level];}
	inline double nSelWeightedEvt (Int_t i_syst, Int_t level) {return p_nSelWeightedEvt[i_syst][level];}
	//  inline double nSelWeightedEvtErr(int level) {if (p_type != 0 ) {if (nSelEvt(level) != 0) { return nSelWeightedEvt(level)/sqrt(nSelEvt(level));} else {return p_nSelWeightedEvtErr[level];}} // nSelWeightedEvt(level)/nSelEvt(level)*sqrt(nSelEvt(level))
	double nSelWeightedEvtErr (Int_t i_syst, Int_t level);
	void SetnSelWeightedEvtErr (Int_t i_syst, Int_t level, double err);
	inline double nSelWeightedEvtEff (Int_t i_syst, Int_t level) {return (p_nGenEvt > 0.) ? 100.*(nSelEvt(i_syst, level)/p_nGenEvt) : 0.;}
	inline double nSelWeightedEvtEffErr (Int_t i_syst, Int_t level) {return (nSelWeightedEvt(i_syst, 0) > 0.) ? 100.*(sqrt(nSelWeightedEvt(i_syst, level))/nSelWeightedEvt(i_syst, 0)) : 0.;}
	inline TDirectory* Dir (void) {return dir;}

	// cada elemento destes vectores é uma referência/sistemático
	std::vector<THisto> histo;
	std::vector< std::vector<Double_t> > p_nSelEvt;
	std::vector< std::vector<Double_t> > p_nSelWeightedEvt;
	std::vector< std::vector<Double_t> > p_nSelWeightedEvtErr;
};

#endif
