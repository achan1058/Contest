#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi hits(200, 0);
	vs pad = { "adgjmptw ", "behknqux", "cfilorvy", "sz" };
	string s;
	rep(i, 0, 4) {
		irep(c, pad[i])
			hits[c] = i + 1;
	}

	forX() {
		getline(cin, s);
		int result = 0;
		irep(c, s)
			result += hits[c];

		printp("%d\n", result);
	}
}
