#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n > 0) {
		vi v(n);
		read(v);
		int num_gcd = 0;
		drep(i, j, n, i) {
			if (gcd(v[i], v[j]) == 1)
				num_gcd++;
		}

		if (num_gcd == 0)
			printf("No estimate for this data set.\n");
		else
			printf("%.6f\n", sqrt(3 * n * (n - 1) / (double)(num_gcd)));
	}
}
