#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c, d, L;
	while (cin >> a >> b >> c >> d >> L && (a | b | c | d | L) != 0) {
		int ans = 0;
		rep(n, 0, L + 1) {
			if ((a * n * n + b * n + c) % d == 0)
				ans++;
		}
		printv(ans);
	}
}
