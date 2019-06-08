#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c, d;
	while (cin >> a >> b >> c >> d && (a | b | c | d) != 0) {
		int ans = 1080;
		ans += (40 + a - b) % 40 * 9;
		ans += (40 + c - b) % 40 * 9;
		ans += (40 + c - d) % 40 * 9;
		printd(ans);
	}
}
