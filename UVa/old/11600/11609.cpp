#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	ll mod = 1000000007, n;
	forX() {
		cin >> n;
		n *= power(2ll, n - 1, mod);
		n %= mod;
		printp("%lld\n", n);
	}
}
