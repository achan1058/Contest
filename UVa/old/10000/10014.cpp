#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		double v, a1;
		cin >> n >> v;
		a1 = n * v / (n + 1);
		cin >> v;
		a1 += v / (n + 1);
		rep(i, 0, n) {
			cin >> v;
			a1 -= 2 * (n - i) * v / (n + 1);
		}
		printX("%.2f\n", a1);
	}
}
