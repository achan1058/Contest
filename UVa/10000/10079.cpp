#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n >= 0) {
		print("%lld", (n * n + n) / 2 + 1);
	}
}
