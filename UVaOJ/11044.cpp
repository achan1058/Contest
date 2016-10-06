#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, r, c;
	cin >> N;
	rep(X, 0, N) {
		cin >> r >> c;
		printf("%d\n", int(r / 3) * int(c / 3));
	}
}
