#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m, v;
	while (cin >> n >> m) {
		vvi arr(1000001);
		rep(i, 1, n + 1) {
			cin >> v;
			arr[v].pb(i);
		}
		rep(j, 0, m) {
			cin >> n >> v;
			printf("%d\n", n <= sz(arr[v]) ? arr[v][n - 1] : 0);
		}
	}
}
