#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = 0, v;
	forX() {
		int tally = 0;
		rep(i, 0, 3) {
			cin >> v;
			tally += v;
		}
		ans += tally >= 2 ? 1 : 0;
	}
	print(ans);
}
