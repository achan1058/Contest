#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi arr(10002);
	rep(i, 0, 10001) {
		arr[i + 1] = arr[i];
		if (isPrime(i * i + i + 41))
			arr[i + 1]++;
	}

	int a, b;
	while (cin >> a >> b)
		printf("%.2f\n", (double(arr[b + 1] - arr[a]) * 100.) / (b - a + 1) + eps);
}
