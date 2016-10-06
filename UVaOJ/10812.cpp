#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		int sum, diff;
		cin >> sum >> diff;

		if (diff > sum || (diff + sum) % 2 == 1)
			printf("impossible\n");
		else
			printf("%d %d\n", (diff + sum) / 2, (sum - diff) / 2);
	}
}
