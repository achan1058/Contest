#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n >= 3)
		printf("%lld\n", (n * (n - 2) * (2 * n - 5) - (n % 2 ? 3 : 0)) / 24);
}
