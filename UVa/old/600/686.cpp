#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int n;
	vi primes = sieve(70000);
	while (cin >> n && n != 0) {
		int high_index = upper_bound(all(primes), n) - primes.begin(), low_index = 0, result = 0;

		while (high_index >= low_index) {
			if (primes[low_index] + primes[high_index] > n)
				high_index--;
			else if (primes[low_index] + primes[high_index] < n)
				low_index++;
			else {
				result++;
				high_index--;
				low_index++;
			}
		}
		printf("%d\n", result);
	}
}
