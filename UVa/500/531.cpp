#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	vvs strs(2);
	int cur = 0;
	string s;
	while (cin >> s) {
		if (s == "#") {
			if (cur == 0) {
				cur = 1;
			} else {
				vs seq = lcs(strs[0], strs[1]);
				bool fs = true;

				irep(s, seq) {
					printf("%s%s", fs ? "" : " ", s.c_str());
					fs = false;
				}

				cur = 0;
				printf("\n");
				strs[0].clear();
				strs[1].clear();
			}
		} else {
			strs[cur].pb(s);
		}
	}
}
