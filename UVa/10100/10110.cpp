#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n != 0) {
		ll d = sqrt(n);
		printf("%s\n", d * d == n ? "yes" : "no");
	}
}
