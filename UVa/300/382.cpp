#include <bits/stdc++.h>
#include "primes.h"

int main() {
	int N;
	printf("PERFECTION OUTPUT\n");
	while (cin >> N && N != 0) {
		int sum = sumFactors(factor(N));
		if (sum == 2 * N)
			printf("%5d  PERFECT\n", N);
		else if (sum > 2 * N)
			printf("%5d  ABUNDANT\n", N);
		else
			printf("%5d  DEFICIENT\n", N);
	}
	printf("END OF OUTPUT\n");
}
