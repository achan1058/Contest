#include <bits/stdc++.h>
#include "primes.h"

int main() {
	ll t = 286, p = 165, h = 143;
	ll tn = t * (t + 1) / 2, pn = p * (3 * p - 1) / 2, hn = h * (2 * h - 1);
	while (true) {
		if (tn == pn && pn == hn) {
			printf("%lld\n", tn);
			break;
		} else if (tn <= pn && tn <= hn) {
			t++;
			tn = t * (t + 1) / 2;
		} else if (pn <= hn) {
			p++;
			pn = p * (3 * p - 1) / 2;
		} else {
			h++;
			hn = h * (2 * h - 1);
		}
	}
}
