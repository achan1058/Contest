#include <bits/stdc++.h>
#include "header.h"

bool isSquare(int i) {
	int ans = 0, j;
	while (i > 0) {
		ans += i % 10;
		i /= 10;
	}
	for (j = 0; j * j < ans; j++);
	return j * j == ans;
}

int main() {
	int square_count = 0;
	rep(i, 16, inf) {
		if (isSquare(i * i)) {
			square_count++;
			if (square_count == 7) {
				rep(j, i - 6, i + 1)
					printf("%d %d\n", j, j * j);
				return 0;
			}
		} else
			square_count = 0;
	}
}
