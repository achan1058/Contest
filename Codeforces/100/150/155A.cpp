#include <bits/stdc++.h>
#include "header.h"

int main() {
	int ans = -2, best = -inf, worst = inf, n;
	forX() {
		cin >> n;
		if (n > best) {
			best = n;
			ans++;
		}
		if (n < worst) {
			worst = n;
			ans++;
		}
	}
	print("%d", ans);
}
