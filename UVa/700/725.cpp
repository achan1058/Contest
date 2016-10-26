#include <bits/stdc++.h>
#include "header.h"

int main() {
	string perm = "0123456789";
	vector<vector<pii>> pairs(80);
	int n;
	do {
		int x = stoi(perm.substr(0, 5)), y = stoi(perm.substr(5, 5));
		if (x % y == 0) {
			int n = x / y;
			pairs[n].pb({ x, y });
		}
	} while (next_permutation(all(perm)));

	rep(i, 0, 80)
		sort(all(pairs[i]));
	whileX(cin >> n && n != 0) {
		printX("");
		if (pairs[n].empty())
			printf("There are no solutions for %d.\n", n);
		else {
			irep(p, pairs[n])
				printf("%05d / %05d = %d\n", p.x, p.y, n);
		}
	}
}
