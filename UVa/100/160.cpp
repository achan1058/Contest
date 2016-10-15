#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vvi f(2);
	rep(i, 2, 101)
		f.pb(factor(i));
	while (cin >> n && n != 0) {
		vi terms(110);
		rep(i, 2, n + 1)
			irep(v, f[i])
				terms[v]++;

		printf("%3d! =", n);
		int num_blocks = 0;

		rep(i, 2, n + 1) {
			if (terms[i] > 0) {
				if (num_blocks == 15) {
					num_blocks = 0;
					printf("\n      ");
				}
				printf("%3d", terms[i]);
				num_blocks++;
			}
		}
		printf("\n");
	}
}
