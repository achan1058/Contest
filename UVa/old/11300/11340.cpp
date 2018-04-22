#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v;
		char c;
		cin >> n;
		vi cost(256);
		rep(i, 0, n) {
			cin >> c >> v;
			cost[c] = v;
		}
		cin >> n;
		string s;
		getline(cin, s);
		int total = 0;
		rep(i, 0, n) {
			getline(cin, s);
			irep(ch, s)
				total += cost[ch];
		}
		printf("%.2f$\n", total / 100.);
	}
}
