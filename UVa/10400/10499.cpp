#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n;
	while (cin >> n && n > 0) {
		printv(n == 1 ? 0 : 25 * n);
		print('%');
	}
}
