#include <bits/stdc++.h>
#include "header.h"

class MultiplicationTable2Easy {
public:
	string isGoodSet(vector<int> table, vector<int> t) {
		int n = sqrt(sz(table));
		rep(i, 0, sz(t)) {
			rep(j, 0, sz(t)) {
				bool good = false;
				rep(k, 0, sz(t)) {
					if (table[t[i] * n + t[j]] == t[k]) {
						good = true;
						break;
					}
				}

				if (!good)
					return "Not Good";
			}
		}
		return "Good";
	}
};
