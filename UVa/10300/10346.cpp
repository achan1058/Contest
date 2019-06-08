#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, d;
	while (cin >> n >> d) {
		int ans = 0, stubs = 0;
		while (n > 0) {
			ans += n;
			stubs += n;
			n = stubs / d;
			stubs %= d;
		}
		print(ans);
	}
}
