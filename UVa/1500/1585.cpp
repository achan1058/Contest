#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		vs runs = tokenize(s, [](int c)->int { return c == 'X'; });
		int ans = 0;
		irep(r, runs)
			ans += sz(r) * (sz(r) + 1) / 2;
		print("%d", ans);
	}
}
