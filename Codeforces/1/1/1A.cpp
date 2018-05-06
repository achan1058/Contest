#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, m, a;
	cin >> n >> m >> a;
	n = (n + a - 1) / a;
	m = (m + a - 1) / a;
	print("%lld", n * m);
}
