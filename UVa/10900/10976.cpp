#include <bits/stdc++.h>
#include "fraction.h"

int main() {
	int n;
	while (cin >> n) {
		Fraction<int> f(1, n);
		vector<Fraction<int>> v1, v2;
		rep(i, n + 1, 2 * n + 1) {
			Fraction<int> f1(1, i), f2 = f - f1;
			if (f2.num() == 1) {
				v1.pb(f2);
				v2.pb(f1);
			}
		}
		printf("%d\n", sz(v1));
		rep(i, 0, sz(v1))
			printf("1/%d = 1/%d + 1/%d\n", n, v1[i].den(), v2[i].den());
	}
}
