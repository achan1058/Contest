#include <bits/stdc++.h>
#include "header.h"

int main() {
	mod = 34943;
	string s;
	while (getline(cin, s) && (sz(s) == 0 || s[0] != '#')) {
		int r = 0;
		fori(c, s) {
			r = add(r, c);
			r = mul(r, 1 << 8);
		}

		r = mul(r, 1 << 8);
		r = add(mod, -r);
		rrep(i, 3, 0) {
			int d = (r >> (4 * i)) % 16;
			if (d < 10)
				printf("%c", char(d + '0'));
			else
				printf("%c", char(d - 10 + 'A'));
			if (i == 2)
				printf(" ");
			else if (i == 0)
				printf("\n");
		}
	}
}
