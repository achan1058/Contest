#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		ll r = ll(sqrt(n));
		printf("%s\n", r * r == n ? "yes" : "no");
	}
}
