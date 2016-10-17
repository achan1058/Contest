#include <bits/stdc++.h>
#include "header.h"

int main() {
	int t, n, v;
	cin >> t;
	rep(X, 1, t + 1) {
		cin >> n;
		int mile = 0, juice = 0;
		rep(i, 0, n) {
			cin >> v;
			mile += v / 30 * 10 + 10;
			juice += v / 60 * 15 + 15;
		}

		if (mile < juice)
			printf("Case %d: Mile %d\n", X, mile);
		else if (mile > juice)
			printf("Case %d: Juice %d\n", X, juice);
		else
			printf("Case %d: Mile Juice %d\n", X, juice);
	}
}
