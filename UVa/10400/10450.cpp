#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl fib(51);
	int n, N;
	fib[1] = 2;
	fib[2] = 3;
	rep(i, 3, 51)
		fib[i] = fib[i - 1] + fib[i - 2];
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n;
		printf("Scenario #%d:\n%lld\n\n", X, fib[n]);
	}
}
