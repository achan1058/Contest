#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<ll, ll> m;
	for (ll i = 2; i * i <= (1ll << 31); i++) {
		for (ll j = i * i, t = 2; j <= (1ll << 31); j *= i, t++) {
			if (m[j] == 0)
				m[j] = t;
		}
	}

	ll t;
	while (cin >> t && t != 0) {
		int v = m[abs(t)] > 0 ? m[abs(t)] : 1;
		while (t < 0 && v % 2 == 0)
			v /= 2;
		print(v);
	}
}
