#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		int mn = 0, mx = inf;
		vi containers(n);
		irep(v, containers) {
			cin >> v;
			mn = max(mn, v);
		}

		while (mn < mx) {
			int mid = (mn + mx) / 2, numc = 1, cur = 0;
			irep(v, containers) {
				if (v + cur <= mid)
					cur += v;
				else {
					cur = v;
					numc++;
				}
			}

			if (numc <= m)
				mx = mid;
			else
				mn = mid + 1;
		}
		printf("%d\n", mn);
	}
}
