#include <bits/stdc++.h>
#include "header.h"

vs cons = { "BFPV", "CGJKQSXZ", "DT", "L", "MN", "R" };
int main() {
	string s;
	vi sound(300);
	rep(i, 0, 6) {
		irep(c, cons[i])
			sound[c] = i + 1;
	}

	while (cin >> s) {
		int prev = -1;
		irep(c, s) {
			int cur = sound[c];
			if (cur != prev && cur != 0)
				printf("%d", cur);
			prev = cur;
		}
		printf("\n");
	}
}
