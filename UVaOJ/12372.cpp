#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	int x, y, z;
	rep(X, 1, N + 1) {
		cin >> x >> y >> z;
		printf("Case %d: %s\n", X, x > 20 || y > 20 || z > 20 ? "bad" : "good");
	}
}