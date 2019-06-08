#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, p;
	string s;
	whileX(cin >> n >> p && (n | p) != 0) {
		getline(cin, s);
		rep(i, 0, n)
			getline(cin, s);

		double best = inf, c;
		int meet = 0;
		string name, best_name;
		rep(i, 0, p) {
			int f;
			getline(cin, name);
			cin >> c >> f;
			getline(cin, s);
			rep(j, 0, f)
				getline(cin, s);

			if (f > meet || (f == meet && c < best)) {
				meet = f;
				best = c;
				best_name = name;
			}
		}

		printX("RFP #%d\n", X);
		print(best_name);
	}
}
