#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, cur, prev;
	cin >> N;
	rep(X, 1, N+1) {
		cin >> n >> prev;
		int up = 0, down = 0;
		rep(i, 0, n - 1) {
			cin >> cur;
			if (cur > prev)
				up++;
			else if (prev > cur)
				down++;
			prev = cur;
		}
		printf("Case %d: %d %d\n", X, up, down);
	}
}
