#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n = 1000001;
	vi mu(n, 1), m(n);
	vb isPrime(n, true);

	rep(i, 2, n) {
		if (isPrime[i]) {
			for (int j = i; j < n; j += i) {
				isPrime[j] = false;
				mu[j] *= -1;
			}
			if (i <= 1000) {
				for (int j = i * i; j < n; j += i * i)
					mu[j] = 0;
			}
		}
	}
	rep(i, 1, n)
		m[i] = mu[i] + m[i - 1];
	while (cin >> n && n != 0) {
		printf("%8d%8d%8d\n", n, mu[n], m[n]);
	}
}
