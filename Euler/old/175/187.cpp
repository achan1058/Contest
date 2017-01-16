#include <bits/stdc++.h>
#include "primes.h"

int main() {
	vi primes = sieve(50000000);
	int ans = 0, head = 0, tail = sz(primes) - 1;
	rep(head, 0, inf) {
		while (primes[head] * primes[tail] >= 100000000)
			tail--;
		if (head > tail)
			break;
		ans += tail - head + 1;
	}
	printf("%d\n", ans);
}
