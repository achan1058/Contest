#include <bits/stdc++.h>
#include "header.h"

int main() {
	string perm = "0123456789";
	vector<vector<pii>> pairs(80);
	int X = 1, n;
	do {
		int x = stoi(perm.substr(0, 5)), y = stoi(perm.substr(5, 5));
		if (x % y == 0) {
			int n = x / y;
			pairs[n].pb({ x, y });
		}
	} while (next_permutation(all(perm)));

	rep(i, 0, 80)
		sort(all(pairs[i]));
	while (cin >> n && n != 0) {
		if (X > 1)
			printf("\n");
		if (pairs[n].empty())
			printf("There are no solutions for %d.\n", n);
		else {
			fori(p, pairs[n])
				printf("%05d / %05d = %d\n", p.x, p.y, n);
		}
		X++;
	}
}
