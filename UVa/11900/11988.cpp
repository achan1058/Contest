#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		vs front, back(1);
		bool isback = true;
		irep(c, s) {
			if (c == '[') {
				isback = false;
				front.pb("");
			} else if (c == ']') {
				isback = true;
				back.pb("");
			} else {
				if (isback)
					back.back().pb(c);
				else
					front.back().pb(c);
			}
		}

		rrep(i, sz(front) - 1, 0)
			printf("%s", front[i].c_str());
		irep(r, back)
			printf("%s", r.c_str());
		printf("\n");
	}
}
