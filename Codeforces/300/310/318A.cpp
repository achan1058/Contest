#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, k;
	cin >> n >> k;
	ll odd = (n + 1) / 2;
	if (k <= odd)
		print("%lld", 2 * k - 1);
	else
		print("%lld", 2 * (k - odd));
}
