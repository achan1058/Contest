#include <bits/stdc++.h>
#include "header.h"

int main() {
	int z, i, m, l, X = 1;
	while (cin >> z >> i >> m >> l && (z | i | m | l) != 0) {
		vi remain(m, 0);
		rep(j, 1, m + 1) {
			if (remain[l] != 0) {
				printf("Case %d: %d\n", X, j - remain[l]);
				break;
			}

			remain[l] = j;
			l = (z * l + i) % m;
		}
		X++;
	}
}
