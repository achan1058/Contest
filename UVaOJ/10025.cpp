#include <bits/stdc++.h>
#include "header.h"

int main() {
	int k, X = 1, N;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> k;
		if (k == 0) {
			printf("3\n");
			continue;
		} else if (k < 0) {
			k *= -1;
		}

		int n = int(sqrt(2 * k));
		while (k > n * (n + 1) / 2)
			n++;
		while (k % 2 != ((n + 1) / 2) % 2)
			n++;
		printf("%d\n", n);
	}
}
