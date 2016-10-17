#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, n, p, h;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> p;
		vi days(n + 1);
		rep(i, 0, p) {
			cin >> h;
			for (int j = 0; j <= n; j += h)
				days[j] = true;
		}

		int num = 0;
		rep (j, 1, n + 1) {
			if (days[j] && j % 7 != 0 && j % 7 != 6)
				num++;
		}
		printf("%d\n", num);
	}
}
