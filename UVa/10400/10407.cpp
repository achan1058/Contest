#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi nums;
	int n;
	while (cin >> n && n != 0) {
		int ans = 0, t;
		while (cin >> t && t != 0)
			ans = gcd(ans, t - n);
		print(ans);
	}
}
