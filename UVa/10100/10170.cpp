#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll s, d;
	while (cin >> s >> d) {
		int n = ceil((-1 + sqrt(1 + 4 * s * s - 4 * s + 8 * d)) / 2);
		print(n);
	}
}
