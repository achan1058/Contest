#include <bits/stdc++.h>
#include "header.h"

class EllysCandyGame {
	int iWin(vi& sweets, int filled, int my, int his) {
		if (filled == 0) {
			if (my > his)
				return 1;
			else if (his > my)
				return -1;
			else
				return 0;
		}

		int bestOutcome = -1;

		rep(i, 0, sz(sweets)) {
			if (sweets[i] > 0) {
				int v = sweets[i];

				my += sweets[i];
				sweets[i] = 0;
				if (i > 0)
					sweets[i - 1] *= 2;
				if (i < sz(sweets) - 1)
					sweets[i + 1] *= 2;

				int heCanWin = iWin(sweets, filled - 1, his, my);

				sweets[i] = v;
				my -= v;
				if (i > 0)
					sweets[i - 1] /= 2;
				if (i < sz(sweets) - 1)
					sweets[i + 1] /= 2;

				bestOutcome = max(bestOutcome, -heCanWin);
			}
		}

		return bestOutcome;
	}

public:
	string getWinner(vector<int> sweets) {
		int filled = 0;

		irep(v, sweets) {
			if (v > 0)
				filled++;
		}

		switch (iWin(sweets, filled, 0, 0)) {
		case 1:
			return "Elly";
		case -1:
			return "Kris";
		default:
			return "Draw";
		}
	}
};
