#include <bits/stdc++.h>
#include "header.h"

class MagicalStringDiv2 {
public:
	int minimalMoves(string S) {
		int change = 0;
		rep(i, 0, sz(S) / 2)
			change += (S[i] == '<' ? 1 : 0);
		rep(i, sz(S) / 2, sz(S))
			change += (S[i] == '>' ? 1 : 0);
		return change;
	}
};
