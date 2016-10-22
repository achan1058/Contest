#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "end") {
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
		printc("%d\n", sz(ships));
	}
}
