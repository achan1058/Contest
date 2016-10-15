#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll ans = 0;
	map<char, ll> m;
	string s;
	cin >> s;
	irep(c, s)
		m[c]++;
	irep(v, m)
		ans += v.y * v.y;
	printf("%lld\n", ans);
}
