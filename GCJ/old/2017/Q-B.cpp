#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll n, i = 1;
		cin >> n;
		while (i < 1000000000000000000ll) {
			ll t = n / i, a = (t / 10) % 10, b = t % 10;
			if (a > b)
				n = t * i - 1;
			else
				i *= 10;
		}
		printp("%lld\n", n);
	}
}