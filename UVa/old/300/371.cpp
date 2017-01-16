#include <bits/stdc++.h>
#include "header.h"

unordered_map<ll, int> m;
int len(ll n) {
	if (n == 1)
		return 3;
	if (m.find(n) != m.end())
		return m[n];
	vl seq;
	while (m.find(n) == m.end()) {
		seq.pb(n);
		n = (n % 2 ? 3 * n + 1 : n / 2);
	}
	rep(i, 0, sz(seq))
		m[seq[i]] = m[n] + sz(seq) - i;

	return m[seq[0]];
}

int main() {
	ll a, b;
	m[1] = 0;
	while (cin >> a >> b && (a | b) != 0) {
		if (a > b)
			swap(a, b);

		int longest = 0;
		ll longindex = -1;
		for (ll i = a; i <= b; i++) {
			int l = len(i);
			if (l > longest) {
				longest = l;
				longindex = i;
			}
		}

		printf("Between %lld and %lld, %lld generates the longest sequence of %d values.\n", a, b, longindex, longest);
	}
}
