#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, p, q, w;
	cin >> N;
	rep(X, 1, N + 1) {
		cin >> n >> p >> q;
		int num = 0, weight = 0;
		rep(i, 0, n) {
			cin >> w;
			if (num < p && w + weight <= q) {
				num++;
				weight += w;
			}
		}
		printf("Case %d: %d\n", X, num);
	}
}
