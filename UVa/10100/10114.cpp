#include <bits/stdc++.h>
#include "header.h"

int main() {
	int m, n;
	double d, pay;
	while (cin >> m >> d >> pay >> n && m >= 0) {
		double p = pay / m, worth = pay + d;
		vector<pair<int, double>> rate(n);
		rep(i, 0, n)
			cin >> rate[i].first >> rate[i].second;
		int t = 0;
		worth *= 1 - rate[0].second;
		rep(i, 0, m + 1) {
			if (pay < worth - eps) {
				print("%d %s", i, i == 1 ? "month" : "months");
				break;
			}
			if (t < n - 1 && i + 1 == rate[t + 1].first)
				t++;
			worth *= 1 - rate[t].second;
			pay -= p;
		}
	}
}
