#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vl f, m;
	f.pb(1);
	m.pb(0);
	while (f.back() < 10000000000ll) {
		ll fb = f.back(), mb = m.back();
		f.pb(mb + 1);
		m.pb(mb + fb);
	}
	while (cin >> n && n >= 0)
		printf("%lld %lld\n", m[n], m[n] + f[n]);
}
