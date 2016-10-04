#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, d, k, total;
	cin >> N;
	rep(X, 0, N) {
		cin >> d >> k;
		total = 0;
		k--;
		d--;
		rep(i, 0, d) {
			total <<= 1;
			total += k & 1;
			k >>= 1;
		}
		total += 1 << d;
		printf("%d\n", total);
	}
}
