#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n > 0) {
		if (n >= 4 && n % 2 == 0) {
			int e = n * 3 / 2, start = 1;
			printf("%d\n", e);
			if (n % 4 == 2) {
				start = 7;
				printf("1 2\n");
				printf("3 2\n");
				printf("3 4\n");
				printf("5 4\n");
				printf("5 6\n");
				printf("1 6\n");
				printf("1 4\n");
				printf("2 5\n");
				printf("3 6\n");
			}

			for (int i = start; i <= n; i += 4) {
				printf("%d %d\n", i, i + 1);
				printf("%d %d\n", i, i + 2);
				printf("%d %d\n", i, i + 3);
				printf("%d %d\n", i + 1, i + 2);
				printf("%d %d\n", i + 1, i + 3);
				printf("%d %d\n", i + 2, i + 3);
			}
		}
		else {
			printf("Impossible\n");
		}
	}
}
