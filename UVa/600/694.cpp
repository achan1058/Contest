#include <bits/stdc++.h>
#include "header.h"

int main() {
	ll n, a, l;
	whileX(cin >> n >> l && n >= 0 && l >= 0) {
		a = n;
		int t = 1;
		while (a != 1) {
			if (a % 2)
				a = 3 * a + 1;
			else
				a /= 2;
			if (a > l)
				break;
			t++;
		}
		printc("A = %lld, limit = %lld, number of terms = %d", n, l, t);
	}
}
