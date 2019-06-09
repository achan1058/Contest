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
		vl ans;
		while (ss >> t) {
			ll v = 0;
			irep(c, coeff) {
				v *= t;
				v += c;
			}
			ans.pb(v);
		}
		print(ans);
	}
}
