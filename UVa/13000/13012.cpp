#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int ans = 0, v;
		rep(i, 0, 5) {
			cin >> v;
			if (v == n)
				ans++;
		}
		printf("%d\n", ans);
	}
}
