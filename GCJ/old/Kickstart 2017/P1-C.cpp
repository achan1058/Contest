#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		ll l, r;
		cin >> l >> r;
		ll m = min(l, r);
		printp("%lld\n", m * (m + 1) / 2);
	}
}