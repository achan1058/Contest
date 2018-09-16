#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s[0] != '#') {
		mod = 34943;
		int tally = 0;
		irep(c, s) {
			tally = mul(tally, 256);
			tally = add(tally, c);
		}
		tally = mul(tally, 256);
		tally = mul(tally, 256);
		tally = add(-tally, mod);
		print("%02X %02X", tally / 256, tally % 256);
	}
}
