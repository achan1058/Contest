#include <bits/stdc++.h>
#include "header.h"

bool isSquare(int i) {
	int ans = 0, j;
	irep(c, to_string(i))
		ans += c - '0';
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
