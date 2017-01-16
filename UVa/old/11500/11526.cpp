#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	forX() {
		cin >> n;
		if (n <= 0) {
			printf("0\n");
			continue;
		}
		int d = int(sqrt(n));
		ll ans = 0;
		for (int i = d - 1; i > 0; i--)
			ans += (n / i - n / (i + 1)) * i;
		for (int i = 1; i <= n / d; i++)
			ans += n / i;
		printf("%lld\n", ans);
	}
}
