#include "THisto.h"

THisto::THisto () {

	for (int i = 0; i < THistoX; ++i) {
		for (int j = 0; j < THistoY; ++j) {
			histo[i][j] = NULL;
		}
	}
}
