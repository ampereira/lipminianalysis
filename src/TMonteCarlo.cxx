#include "TMonteCarlo.h"


TMonteCarlo::TMonteCarlo (int type, double run, long double lum, long long int nGenEvt, std::string title) {

	if (type != 0 && type != 1 && type != 2 ) {
		std::cout << "ERROR: unknown MC type for process " << title << std::endl;
		exit(0);
	}

	if (lum <= 0.) {
		std::cout << "ERROR: luminosity is less than or equal to 0 for process " << title << std::endl;
		exit(0);
	}

	p_type=type;
	p_run=run;
	p_lum=lum;
	p_nGenEvt=nGenEvt;
	p_title=title;
	p_CrossSection=nGenEvt/lum;

	if (p_type == 1) {
		dir = new TDirectory(title.c_str(), title.c_str());
	} else {
		if (p_type == 0) {
			dir = gDirectory;
		}
	}
}

TMonteCarlo::TMonteCarlo (int type, double run, long double lum, long long int nGenEvt, std::string title, int MaxCuts) {

	if (type != 0 && type != 1 && type != 2 ) {
		std::cout << "ERROR: unknown MC type for process " << title << std::endl;
		exit(0);
	}

	if (lum <= 0.) {
		std::cout << "ERROR: luminosity is less than or equal to 0 for process " << title << std::endl;
		exit(0);
	}

	p_type=type;
	p_run=run;
	p_lum=lum;
	p_nGenEvt=nGenEvt;
	p_title=title;
	p_CrossSection=nGenEvt/lum;

	if (p_type == 1) {
		dir = new TDirectory(title.c_str(), title.c_str());
	} else {
		if (p_type == 0) {
			dir = gDirectory;
		}
	}
}

TMonteCarlo::~TMonteCarlo (void) {
	
}

void TMonteCarlo::SetnGenEvt (long long int nGenEvt) {

	if (p_type == 0 ) {
		p_nGenEvt=nGenEvt;
	} else {
		std::cout << "ERROR: Cannot set manually the statistical error for process " << p_title << std::endl;
		exit(0);
	}
}

void TMonteCarlo::SetnSelWeightedEvtErr (Int_t i_syst, int level, double err) {

	if (p_type == 0 ) {
		p_nSelWeightedEvtErr[i_syst][level]=err;
	} else {
		std::cout << "ERROR: Cannot set manually the statistical error for process " << p_title << std::endl;
		exit(0);
	}
}

double TMonteCarlo::nSelWeightedEvtErr (Int_t i_syst, int level) {

	if (p_type != 0) {
		if (nSelEvt(i_syst, level) != 0) {
			return nSelWeightedEvt(i_syst, level)/sqrt(nSelEvt(i_syst, level));
		} else {
			return nSelWeightedEvt(i_syst, 0)/nSelEvt(i_syst, 0);
		}
	} else {
		return p_nSelWeightedEvtErr[i_syst][level];
	}
}
