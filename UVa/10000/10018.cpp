#include <bits/stdc++.h>
#include "header.h"

ll rev(ll n) {
	ll ans = 0;
	while (n > 0) {
		ans *= 10;
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

int main() {
	forX() {
		ll n, r;
		cin >> n;
		int iter = 0;
		while (true) {
			r = rev(n);
			if (iter > 0 && n == r)
				break;
			n += r;
			iter++;
		}
		printf("%d %lld\n", iter, n);
	}
}
