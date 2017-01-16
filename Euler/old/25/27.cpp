#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vb primes = sieveVector(1000000);
	int besta = 0, bestb = 0, best = 0;
	rep(a, -999, 1000) {
		rep(b, 0, 1001) {
			rep(n, 0, inf) {
				int t = n * n + a * n + b;
				if (t < 2 || t % 2 == 0 || !primes[t / 2]) {
					if (n >= best) {
						best = n + 1;
						besta = a;
						bestb = b;
					}
					break;
				}
			}
		}
	}
	printf("%d\n", besta * bestb);
}
