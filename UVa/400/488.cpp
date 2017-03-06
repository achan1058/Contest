#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int h, w;
		cin >> h >> w;
		printX("");
		rep(i, 0, w) {
			printf("%s", i > 0 ? "\n" : "");
			rep(j, 1, h) {
				rep(k, 0, j)
					printf("%d", j);
				printf("\n");
			}
			rrep(j, h, 1) {
				rep(k, 0, j)
					printf("%d", j);
				printf("\n");
			}
		}
	}
}
