#include <bits/stdc++.h>
#include "header.h"

int main() {
	unordered_map<int, int> m;
	vi order;
	int n;
	while (cin >> n) {
		m[n]++;
		if (m[n] == 1)
			order.pb(n);
	}
	irep(v, order)
		print(v, m[v]);
}
