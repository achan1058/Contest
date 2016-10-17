#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, M, a, b;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		cin >> M;
		vi digits(M);
		irep(d, digits) {
			cin >> a >> b;
			d = a + b;
		}
		rrep(i, M - 1, 0) {
			if (digits[i] >= 10) {
				digits[i] -= 10;
				digits[i - 1]++;
			}
		}
		irep(d, digits)
			printf("%d", d);
		printf("\n");
	}
}
