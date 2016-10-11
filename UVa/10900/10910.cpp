#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	int N, n, t, p;
	cin >> N;
	for (int X = 1; X <= N; X++) {
		cin >> n >> t >> p;
		printf("%lld\n", binomial<ll>(t - n * p + n - 1, n - 1));
	}
}
