#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int n;
	while (cin >> n && n > 0) {
		vi v(n);
		int num_gcd = 0;
		irep(l, v)
			cin >> l;
		rep(i, 0, n) {
			rep(j, i + 1, n) {
				if (gcd(v[i], v[j]) == 1)
					num_gcd++;
			}
		}

		if (num_gcd == 0)
			printf("No estimate for this data set.\n");
		else
			printf("%.6f\n", sqrt(3 * n * (n - 1) / (double)(num_gcd)));
	}
}
