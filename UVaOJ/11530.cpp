#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi hits(200, 0);
	vs pad = { "adgjmptw ", "behknqux", "cfilorvy", "sz" };
	int N;
	string s;
	rep(i, 0, 4) {
		fori(c, pad[i])
			hits[c] = i + 1;
	}

	cin >> N;
	getline(cin, s);
	rep(X, 0, N) {
		getline(cin, s);
		int result = 0;
		fori(c, s)
			result += hits[c];

		printf("Case #%d: %d\n", X + 1, result);
	}
}
