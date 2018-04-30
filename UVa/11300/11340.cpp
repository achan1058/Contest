#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, cents;
		cin >> n;
		char c;
		map<char, int> cost;
		rep(i, 0, n) {
			cin >> c >> cents;
			cost[c] = cents;
		}
		cin >> n;
		string s;
		double total = 0;
		getline(cin, s);
		rep(i, 0, n) {
			getline(cin, s);
			irep(c, s)
				total += cost[c];
		}
		print("%.2f$", total / 100);
	}
}
