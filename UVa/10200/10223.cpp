#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	map<ll, int> m;
	ll ans = 0;
	for (int n = 1; ans <= 4294967295ll; n++) {
		ans = binom(2 * n, n) / (n + 1);
		m[ans] = n;
	}
	while (cin >> ans)
		print(m[ans]);
}
