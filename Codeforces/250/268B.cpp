#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, ans = 0;
	cin >> n;
	rep(i, 1, n)
		ans += i * (n - i);
	ans += n;
	printf("%d\n", ans);
}
