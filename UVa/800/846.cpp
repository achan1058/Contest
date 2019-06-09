#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll l, r;
		cin >> l >> r;
		ll d = r - l;
		if (d == 0) {
			print(0);
			continue;
		}
		ll t = (sqrt(4 * d - 1));
		print(t);
	}
}
