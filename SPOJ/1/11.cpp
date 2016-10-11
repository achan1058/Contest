#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		int total = 0;
		cin >> n;
		while (n > 0) {
			n /= 5;
			total += n;
		}
		printf("%d\n", total);
	}
}
