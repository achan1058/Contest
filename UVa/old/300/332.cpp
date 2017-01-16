#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	ll numer;
	char c;
	string s;
	whileX(cin >> n && n != -1) {
		cin >> numer >> c >> s;
		int power = sz(s);
		ll v = numer = stoll(s), denom = 1;

		if (n != 0) {
			for (int i = 0; i < n; i++) {
				v /= 10;
				denom *= 10;
			}
			numer -= v;
			denom--;
		}

		for (int i = n; i < power; i++)
			denom *= 10;

		ll g = gcd(numer, denom);
		if (numer == 0) {
			numer = 0;
			denom = 1;
			g = 1;
		}
		printc("%lld/%lld\n", numer / g, denom / g);
	}
}
