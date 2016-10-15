#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, l, t;
	char c;
	string s;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vi cost(500, 0);
		int total_cost = 0;
		rep(i, 0, n) {
			cin >> c >> t;
			cost[c + 200] = t;
		}

		cin >> l;
		getline(cin, s);
		rep(i, 0, l) {
			getline(cin, s);

			fori(ch, s)
				total_cost += cost[ch + 200];
		}
		printf("%.2f$\n", total_cost / 100. + eps);
	}
}
