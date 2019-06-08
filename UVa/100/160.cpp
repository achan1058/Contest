#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vector<map<int, int>> primes(101);
	rep(n, 2, 101) {
		primes[n] = primes[n - 1];
		irep(p, factor(n))
			primes[n][p]++;
	}
	int n;
	while (cin >> n && n != 0) {
		printf("%3d! =", n);
		int t = 0;
		irep(p, primes[n]) {
			t++;
			printf("%3d", p.second);
			if (t == sz(primes[n])) {
				print();
			} else if (t % 15 == 0) {
				print();
				printf("      ");
			}
		}
	}
}
