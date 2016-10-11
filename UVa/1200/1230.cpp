#include <bits/stdc++.h>
#include "number_theory.h"

int main() {
	int x, y, n, N;
	cin >> N;
	rep(X, 0, N) {
		cin >> x >> y >> n;
		printf("%d\n", power(x, y, n));
	}
}
