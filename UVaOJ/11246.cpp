#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, k;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> k;
		int total = n, sign = 1;
		while (n > 0) {
			n /= k;
			sign *= -1;
			total += n * sign;
		}
		printf("%d\n", total);
	}
}
