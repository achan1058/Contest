#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		string s;
		cin >> n;
		getline(cin, s);
		vector<pair<int, string>> candidates;
		rep(i, 0, n) {
			getline(cin, s);
			vb alpha(26);
			int distinct = 0;
			irep(c, s) {
				if (c == ' ')
					continue;
				if (!alpha[c - 'A']) {
					distinct++;
					alpha[c - 'A'] = true;
				}
			}
			candidates.pb({ -distinct, s });
		}

		sort(all(candidates));
		printp("%s\n", candidates[0].y.c_str());
	}
}