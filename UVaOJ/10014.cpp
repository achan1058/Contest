#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		printf("%s", X > 0 ? "\n" : "");
		double v, a1;
		cin >> n >> v;
		a1 = n * v / (n + 1);
		cin >> v;
		a1 += v / (n + 1);
		rep(i, 0, n) {
			cin >> v;
			a1 -= 2 * (n - i) * v / (n + 1);
		}
		printf("%.2f\n", a1);
	}
}
