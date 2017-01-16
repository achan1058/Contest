#include <bits/stdc++.h>
#include "header.h"

class EllysNumberGuessing {
public:
	int getNumber(vector<int> guesses, vector<int> answers) {
		vi cand = { guesses[0] - answers[0], guesses[0] + answers[0] };

		irep(i, cand) {
			if (i <= 0)
				i = -1;
			else if (i > 1000000000)
				i = -1;
		}
		rep(i, 0, sz(guesses)) {
			irep(v, cand) {
				if (v != guesses[i] - answers[i] && v != guesses[i] + answers[i])
					v = -1;
			}
		}

		sort(all(cand));

		if (cand[1] == -1)
			return -2;
		else if (cand[0] != -1)
			return -1;
		else
			return cand[1];

		return 0;
	}
};
