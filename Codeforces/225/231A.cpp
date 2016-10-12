#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0, a, b, c;
	cin >> n;
	rep(i, 0, n) {
		cin >> a >> b >> c;
		if (a + b + c >= 2)
			ans++;
	}
	printf("%d\n", ans);
}
