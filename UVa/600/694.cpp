#include <bits/stdc++.h>
#include "header.h"

ll collatz(ll n) {
	if (n % 2 == 0)
		return n / 2;
	else
		return 3 * n + 1;
}

int main() {
	ll n, b;
	whileX(cin >> n >> b && (n >= 0 || b >= 0)) {
		ll t = n;
		int len = 1;
		while (t != 1 && t <= b) {
			t = collatz(t);
			len++;
		}
		if (t > b)
			len--;
		printc("A = %lld, limit = %lld, number of terms = %d\n", n, b, len);
	}
}
