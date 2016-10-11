#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int n;
	vi sum(501);
	sum[1] = 0;
	rep(x, 2, 501) {
		sum[x] = sum[x - 1];
		rep(i, 1, x)
			sum[x] += gcd(x, i);
	}
	while (cin >> n && n != 0)
		printf("%d\n", sum[n]);
}
