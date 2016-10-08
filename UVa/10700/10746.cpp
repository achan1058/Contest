#include <bits/stdc++.h>
#include "matching.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vvd graph = md(n, m, 0);
		rep(i, 0, n) {
			rep(j, 0, m) {
				cin >> graph[i][j];
			}
		}
		printf("%.2f\n", hungarian(graph).x / n);
	}
}
