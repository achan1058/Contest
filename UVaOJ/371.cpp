#include <bits/stdc++.h>
#include "header.h"

map<ll, int> m;
ll fxn(ll n) {
	if (n % 2 == 1)
		return 3 * n + 1;
	else
		return n / 2;
}

int len(ll n) {
	if (n == 1)
		return 3;
	if (m.find(n) != m.end())
		return m[n];
	vl seq;
	while (m.find(n) == m.end()) {
		seq.pb(n);
		n = fxn(n);
	}
	rrep(i, sz(seq) - 1, 0)
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
