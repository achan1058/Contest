#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		ll a, b, c, total = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> a >> b >> c;
			total += a * c;
		}
		print("%lld", total);
	}
}
