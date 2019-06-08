#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		vl coeff;
		ll t;

		{
			stringstream ss(s);
			while (ss >> t)
				coeff.pb(t);
		}

		getline(cin, s);
		stringstream ss(s);
		bool first = true;
		while (ss >> t) {
			ll ans = 0;
			irep(c, coeff) {
				ans *= t;
				ans += c;
			}
			printf("%s%lld", first ? "" : " ", ans);
			first = false;
		}
		print();
	}
}
