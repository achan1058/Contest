#include <bits/stdc++.h>
#include "header.h"

int main() {
	bool first = true;
	forX() {
		int n, m;
		cin >> m >> n;
		rep(i, 0, n) {
			printf("%s", first ? "" : "\n");
			first = false;
			rep(j, 1, m) {
				rep(k, 0, j)
					printf("%d", j);
				print("");
			}
			rrep(j, m, 1) {
				rep(k, 0, j)
					printf("%d", j);
				print("");
			}
		}
	}
}
