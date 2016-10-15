#include <bits/stdc++.h>
#include "primes.h"

int digitSum(int n) {
	int r = 0;
	while (n > 0) {
		r += n % 10;
		n /= 10;
	}
	return r;
}

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		rep(i, n + 1, inf) {
			vi f = factor(i);
			int fd = 0;
			if (sz(f) == 1)
				continue;
			irep(v, f)
				fd += digitSum(v);
			if (fd == digitSum(i)) {
				printf("%d\n", i);
				break;
			}
		}
	}
}
