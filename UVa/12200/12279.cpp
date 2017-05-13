#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		int ans = 0, v;
		rep(i, 0, n) {
			cin >> v;
			if (v > 0)
				ans++;
			else
				ans--;
		}
		printc("%d\n", ans);
	}
}
