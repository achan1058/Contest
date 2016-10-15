#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll ans = 0;
	map<char, ll> m;
	string s;
	cin >> s;
	fori(c, s)
		m[c]++;
	fori(v, m)
		ans += v.y * v.y;
	printf("%lld\n", ans);
}
