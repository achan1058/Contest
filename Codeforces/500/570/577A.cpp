#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, ans = 0;
	cin >> n >> x;
	rep(i, (x + n - 1) / n, n + 1) {
		if (x % i == 0)
			ans++;
	}
	print(ans);
}
