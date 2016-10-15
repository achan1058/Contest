#include <bits/stdc++.h>
#include "bases.h"

int main() {
	string s;
	while (cin >> s) {
		int base = 2, sum = 0;
		fori(c, s) {
			if (!isalnum(c) || c == '0')
				continue;
			int t = minBase(string(1, c), true);
			base = max(base, t);
			sum += t - 1;
		}

		bool found = false;
		rep(i, base, 63) {
			if (sum % (i - 1) == 0) {
				printf("%d\n", i);
				found = true;
				break;
			}
		}

		if (!found)
			printf("such number is impossible!\n");
	}
}
