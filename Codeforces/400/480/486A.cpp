#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	cin >> n;
	n = (n + 1) / 2 * (n % 2 ? -1 : 1);
	print("%lld", n);
}
