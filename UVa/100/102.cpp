#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi in(9);
	map<string, vi> m = {
		{"BGC", {1, 2, 3, 5, 6, 7} },
		{"BCG", {1, 2, 3, 4, 6, 8} },
		{"GBC", {0, 2, 4, 5, 6, 7} },
		{"GCB", {0, 2, 3, 4, 7, 8} },
		{"CBG", {0, 1, 4, 5, 6, 8} },
		{"CGB", {0, 1, 3, 5, 7, 8} },
	};
	while (read(in)) {
		string ans;
		int best = inf;
		irep(p, m) {
			int cur = 0;
			irep(i, p.second)
				cur += in[i];
			if (cur < best) {
				best = cur;
				ans = p.first;
			}
		}
		print(ans, best);
	}
}
