#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, q, target;
	whileX(cin >> n >> q && (n | q) != 0) {
		printf("CASE# %d:\n", X);
		vi marble(n);
		read(marble);
		sort(all(marble));
		rep(i, 0, q) {
			cin >> target;
			auto it = lower_bound(all(marble), target);

			if (it == marble.end() || *it != target)
				printf("%d not found\n", target);
			else
				printf("%d found at %d\n", target, (it - marble.begin()) + 1);
		}
	}
}
