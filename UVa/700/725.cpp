#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s = "0123456789";
	map<int, vector<pair<string, string>>> m;
	do {
		string a = s.substr(0, 5), b = s.substr(5, 10);
		int an = stoi(a), bn = stoi(b);
		if (an % bn == 0)
			m[an / bn].pb({ a, b });
	} while (next_permutation(all(s)));

	whileX (cin >> n && n != 0) {
		printX("");
		if (sz(m[n]) == 0) {
			print("There are no solutions for %d.", n);
		} else {
			irep(sol, m[n])
				print(sol.first, '/', sol.second, '=', n);
		}
	}
}
