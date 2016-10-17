#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs ss;
	string s;
	int max_len = 0;

	while (getline(cin, s))
		ss.push_back(s);
	irep(str, ss) {
		max_len = max(max_len, int(sz(str)));
		str.resize(max_len, ' ');
	}
	rep(j, 0, sz(ss.back())) {
		rrep(i, sz(ss) - 1, 0) {
			if (j < sz(ss[i]))
				printf("%c", ss[i][j]);
		}
		printf("\n");
	}
}
