#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v, N;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		int diff = -inf, big = -inf;
		rep(i, 0, n) {
			cin >> v;
			diff = max(diff, big - v);
			big = max(v, big);
		}

		printf("%d\n", diff);
	}
}