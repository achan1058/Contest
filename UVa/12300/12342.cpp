#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int k, tax = 0;
		cin >> k;

		vi deduct = { 180000, 300000, 400000, 300000, inf };
		vd rate = { 0, .1, .15, .2, .25 };

		rep(i, 0, 5) {
			int d = min(k, deduct[i]);
			tax += ceil(d * rate[i] - eps);
			k -= d;
		}

		printc("%d\n", tax == 0 ? 0 : max(tax, 2000));
	}
}
