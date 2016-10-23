#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int k;
		ll tax = 0;
		cin >> k;

		vi deduct = { 180000, 300000, 400000, 300000, inf };
		vl rate = { 0, 10, 15, 20, 25 };

		rep(i, 0, 5) {
			int d = min(k, deduct[i]);
			tax += d * rate[i];
			k -= d;
		}

		printc("%lld\n", tax == 0 ? 0 : max((tax + 99) / 100, 2000ll));
	}
}
