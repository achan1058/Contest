#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, X = 1;
	while (cin >> n && n >= 0) {
		n--;
		int result = 0;
		while (n > 0) {
			result++;
			n /= 2;
		}
		printf("Case %d: %d\n", X, result);
		X++;
	}
}
