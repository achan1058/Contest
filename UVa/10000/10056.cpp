#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	rep(X, 0, N) {
		double n, k, p, q;
		cin >> n >> p >> k;
		q = 1 - p;
		if (p == 0)
			printf("0.0000\n");
		else
			printf("%.4f\n", p * pow(q, k - 1) / (1 - pow(q, n)));
	}
}
