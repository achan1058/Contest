#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, e, c, ans = 0;
		cin >> n >> e >> c;
		n += e;

		while (n >= c) {
			ans += n / c;
			n = n / c + n % c;
		}
		printd(ans);
	}
}
