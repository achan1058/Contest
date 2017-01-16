#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, f;
	forX() {
		cin >> a >> f;
		printX("");
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
