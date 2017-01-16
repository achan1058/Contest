#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, a;
	cin >> n;
	vl arr(21);
	rep(i, 0, n) {
		cin >> a;
		arr[a + 10]++;
	}
	ll ans = arr[10] * (arr[10] - 1) / 2;
	rep(i, 0, 10)
		ans += arr[i] * arr[20 - i];
	printf("%lld\n", ans);
}
