#include <bits/stdc++.h>
#include "header.h"

class EllysScrabble {
public:
	string getMin(string letters, int maxDistance) {
		int n = sz(letters);
		string out;
		vb used(n);
		rep(i, 0, n) {
			if (i - maxDistance >= 0 && !used[i - maxDistance]) {
				out.pb(letters[i - maxDistance]);
				used[i - maxDistance] = true;
			} else {
				int best = -1;
				rep(j, max(0, i - maxDistance + 1), min(n, i + maxDistance + 1)) {
					if (!used[j] && (best == -1 || letters[j] < letters[best]))
						best = j;
				}
				used[best] = true;
				out.pb(letters[best]);
			}
		}

		return out;
	}
};
