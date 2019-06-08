#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, v;
	cin >> n >> k;
	string s;
	map<string, int> value;
	rep(i, 0, n) {
		cin >> s >> v;
		value[s] = v;
	}
	rep(i, 0, k) {
		ll total = 0;
		while (cin >> s && s != ".")
			total += value[s];
		printl(total);
	}
}
