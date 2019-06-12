#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vi heads(n), knights(m);
		ll cost = 0;
		read(heads);
		read(knights);
		sort(all(heads));
		sort(all(knights));
		int hi = 0, ki = 0;
		while (hi < sz(heads) && ki < sz(knights)) {
			if (knights[ki] >= heads[hi]) {
				cost += knights[ki];
				hi++;
			}
			ki++;
		}
		if (hi == sz(heads))
			print(cost);
		else
			print("Loowater is doomed!");
	}
}
