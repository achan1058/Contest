#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, ans = 0;
	cin >> n >> k;
	ans += n;
	while (n >= k) {
		ans += n / k;
		n = n % k + n / k;
	}
	print(ans);
}
