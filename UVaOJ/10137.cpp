#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	double cur;
	while (cin >> n && n != 0) {
		int total = 0;
		vi costs(n);
		fori(c, costs) {
			cin >> cur;
			c = (int)(cur * 100 + eps);
			total += c;
		}

		int average = total / n, over = total % n, diff = 0;
		sort(all(costs));
		rep(i, 0, n) {
			if (i >= n - over)
				diff += abs(costs[i] - (average + 1));
			else
				diff += abs(costs[i] - average);
		}
		printf("$%.2f\n", diff / 200.);
	}
}
