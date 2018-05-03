#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(cin >> s && s != "end") {
		vs stacks;
		irep(c, s) {
			bool loaded = false;
			irep(st, stacks) {
				if (c <= st.back()) {
					st.pb(c);
					loaded = true;
					break;
				}
			}
			if (!loaded)
				stacks.pb(string(1, c));
		}
		printc("%d", sz(stacks));
	}
}
