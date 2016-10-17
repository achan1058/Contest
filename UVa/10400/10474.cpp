#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, q, X = 1, target;
	while (cin >> n >> q && (n | q) != 0) {
		vi marble(n);
		printf("CASE# %d:\n", X);
		irep(m, marble)
			cin >> m;
		sort(all(marble));
		rep(i, 0, q) {
			cin >> target;
			auto it = lower_bound(all(marble), target);

			if (it == marble.end() || *it != target)
				printf("%d not found\n", target);
			else
				printf("%d found at %d\n", target, (it - marble.begin()) + 1);
		}
		X++;
	}
}
