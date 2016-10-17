#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		ll s = ll(sqrt(n) + eps);
		printf("%s\n", s * s == n ? "yes" : "no");
	}
}
