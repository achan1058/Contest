#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, a, f;
	cin >> N;
	rep(X, 0, N) {
		cin >> a >> f;
		printf("%s", X > 0 ? "\n" : "");
		rep(i, 0, f) {
			printf("%s", i > 0 ? "\n" : "");
			rep(j, 1, a) {
				rep(k, 0, j)
					printf("%d", j);
				printf("\n");
			}
			rrep(j, a, 1) {
				rep(k, 0, j)
					printf("%d", j);
				printf("\n");
			}
		}
	}
}
