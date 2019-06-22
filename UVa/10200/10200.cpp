#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	vi ans(10002);
	ans[0] = 0;
	rep(i, 0, 10001)
		ans[i + 1] = ans[i] + (isPrime(i * i + i + 41) ? 1 : 0);

	int a, b;
	while (cin >> a >> b)
		print("%.2f", 100. * (ans[b + 1] - ans[a]) / (b - a + 1) + eps);
}
