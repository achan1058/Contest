#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, C, d;
	cin >> N;
	rep(X, 0, N) {
		cin >> C >> d;
		double r = C + 5. / 9 * d;
		printf("Case %d: %.2f\n", X + 1, r);
	}
}
