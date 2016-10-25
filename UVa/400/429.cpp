#include <bits/stdc++.h>
#include "shortest_path.h"

bool dist1(const string& s1, const string& s2) {
	bool diff = false;
	if (sz(s1) != sz(s2))
		return false;
	rep(i, 0, sz(s1)) {
		if (s1[i] != s2[i]) {
			if (diff)
				return false;
			diff = true;
		}
	}
	return true;
}

int main() {
	string s, s1, s2;
	forX() {
		if (X == 1)
			getline(cin, s);
		vs strs;
		while (cin >> s && s != "*")
			strs.pb(s);

		printX("");
		getline(cin, s);
		int n = sz(strs);
		vvi mat = mi(n, n, inf);

		rep(i, 0, n) {
			mat[i][i] = 0;
			rep(j, i + 1, n) {
				if (dist1(strs[i], strs[j]))
					mat[i][j] = mat[j][i] = 1;
			}
		}

		vvi distmat = floydWarshall(mat).x;
		while (getline(cin, s) && s != "") {
			stringstream ss(s);
			ss >> s1 >> s2;
			int v1, v2;

			rep(i, 0, n) {
				if (s1 == strs[i]) {
					v1 = i;
					break;
				}
			}
			rep(i, 0, n) {
				if (s2 == strs[i]) {
					v2 = i;
					break;
				}
			}
			printf("%s %s %d\n", s1.c_str(), s2.c_str(), distmat[v1][v2]);
		}
	}
}
