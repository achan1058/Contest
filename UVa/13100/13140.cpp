#include <bits/stdc++.h>
#include "header.h"

vb squares(101);
bool isSquare(int n) {
	int ans = 0;
	while (n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return squares[ans];
}

int main() {
	int tally = 0;
	rep(i, 0, 11)
		squares[i * i] = true;
	for (int i = 16; ; i++) {
		if (isSquare(i * i)) {
			tally++;
			if (tally == 7) {
				rep(j, i - 6, i + 1)
					print("%d %d", j, j * j);
				break;
			}
		} else {
			tally = 0;
		}
	}
}
