#include <bits/stdc++.h>
#include "header.h"

class MagicalStringDiv1 {
public:
	int getLongest(string S) {
		vi left(sz(S) + 1), right(sz(S) + 1);
		int best = 0;
		rep(i, 0, sz(S)) {
			left[i + 1] = left[i] + (S[i] == '>' ? 1 : 0);
			right[i + 1] = right[i] + (S[sz(S) - i - 1] == '<' ? 1 : 0);
		}
		rep(i, 0, sz(S) + 1)
			best = max(best, min(left[i], right[sz(S) - i]));
		return 2 * best;
	}
};
