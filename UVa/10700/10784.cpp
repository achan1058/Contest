#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	whileX(cin >> n && n != 0) {
		int ans = int(ceil((sqrt(9 + 8 * n) + 3) / 2));
		printc("%d", ans);
	}
}
