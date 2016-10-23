#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int best = inf;
		rep(i, -sz(s1), sz(s2)) {
			bool good = true;
			rep(j, max(0, i), min(sz(s1) + i, sz(s2))) {
				if (s1[j - i] == '2' && s2[j] == '2') {
					good = false;
					break;
				}
			}
			if (good)
				best = min(best, max(sz(s1) + i, sz(s2)) - min(0, i));
		}
		printf("%d\n", best);
	}
}
