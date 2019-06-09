#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b;
	while (cin >> a >> b) {
		int mx = 0;
		rep(i, min(a, b), max(a, b) + 1) {
			ll n = i;
			int cur = 1;
			while (n != 1) {
				if (n % 2)
					n = 3 * n + 1;
				else
					n /= 2;
				cur++;
			}
			mx = max(mx, cur);
		}
		print(a, b, mx);
	}
}
