#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, m;
	whileX(cin >> n >> m && (n | m) != 0)
		printc("%lld\n", n * (n - 1) * m * (m - 1) / 4);
}
