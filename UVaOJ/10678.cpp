#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	double L, D;
	cin >> N;
	rep(X, 0, N) {
		cin >> D >> L;
		printf("%.3f\n", PI * L *sqrt(L * L - D * D) / 4);
	}
}
