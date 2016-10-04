#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	vi fib = { 0, 1 };
	while (fib[sz(fib) - 1] != 0 || fib[sz(fib) - 2] != 1)
		fib.pb((fib[sz(fib) - 1] + fib[sz(fib) - 2]) & (1 << 20) - 1);
	fib.pop_back();
	while (cin >> n >> m)
		printf("%d\n", fib[n % sz(fib)] & (1 << m) - 1);
}
