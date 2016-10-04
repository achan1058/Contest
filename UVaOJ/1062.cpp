#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int X = 1;
	while (cin >> s && s != "end") {
		vs ships;
		irep(c, s) {
			bool found = false;
			irep(h, ships) {
				if (c <= h.back()) {
					h.pb(c);
					found = true;
					break;
				}
			}
			if (!found)
				ships.pb(string(1, c));
		}
		printf("Case %d: %d\n", X, sz(ships));
		X++;
	}
}
