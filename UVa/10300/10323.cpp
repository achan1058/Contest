#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	ll N;
	vl fact = factTable(13);
	while (cin >> N) {
		if (N < 0 && N % 2 == 0)
			printf("Underflow!\n");
		else if (N < 0 && N % 2 == -1)
			printf("Overflow!\n");
		else if (N < 8)
			printf("Underflow!\n");
		else if (N > 13)
			printf("Overflow!\n");
		else
			printf("%lld\n", fact[int(N)]);
	}
}
