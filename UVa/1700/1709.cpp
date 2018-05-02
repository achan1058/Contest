#include <bits/stdc++.h>
#include "header.h"

int main() {
	double p, a, b, c, d;
	int n;
	while (cin >> p >> a >> b >> c >> d >> n) {
		double highest = -inf, ans = 0;
		rep(i, 1, n + 1) {
			double price = p * (sin(a * i + b) + cos(c * i + d) + 2);
			highest = max(highest, price);
			ans = max(ans, highest - price);
		}
		print("%.9f", ans);
	}
}
