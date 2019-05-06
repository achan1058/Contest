#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	while (cin >> n >> k) {
		double ans = 1;
		rep(i, 0, k)
			ans += log10(n - i) - log10(i + 1);
		print("%d", (int)(ans + eps));
	}
}
