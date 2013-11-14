#ifndef LIP_THISTO
#define LIP_THISTO

#include <TH1.h>

#define THistoX 25
#define THistoY 2500


typedef TH1* THistos[THistoX][THistoY];

class THisto {

public:
	THistos histo;
	THisto();
};

#endif
