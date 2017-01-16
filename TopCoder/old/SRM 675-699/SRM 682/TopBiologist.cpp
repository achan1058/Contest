#include <bits/stdc++.h>
#include "header.h"

class TopBiologist {
public:
	string findShortestNewSequence(string sequence) {
		string s = "AGTC";
		rep(i, 1, sz(sequence) + 1) {
			string ans(i, 'A');
			rep(j, 0, 1 << 2 * i) {
				int j2 = j;
				rep(k, 0, i) {
					ans[k] = s[j2 % 4];
					j2 /= 4;
				}

				if (sequence.find(ans) == string::npos)
					return ans;
			}
		}

		return "";
	}
};
