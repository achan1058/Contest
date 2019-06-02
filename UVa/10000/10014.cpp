#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		double a0, an1;
		vd c(n);
		cin >> a0 >> an1;
		read(c);

		double ans = n * a0 + an1;
		rep(i, 0, n)
			ans -= 2 * c[i] * (n - i);
		printX("%.2f\n", ans / (n + 1));
	}
}
