#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n >= 0)
		printf("%lld\n", n * (n + 1) / 2 + 1);
}
