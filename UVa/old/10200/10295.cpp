#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, v;
	string s;
	map<string, int> value;
	cin >> n >> m;
	rep(i, 0, n) {
		cin >> s >> v;
		value[s] = v;
	}
	rep(i, 0, m) {
		ll total = 0;
		while (cin >> s && s != ".")
			total += value[s];
		printf("%lld\n", total);
	}
}
