#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi age(101);
		int v;
		rep(i, 0, n) {
			cin >> v;
			age[v]++;
		}
		bool first = true;
		rep(i, 0, sz(age)) {
			rep(j, 0, age[i]) {
				if (!first)
					printf(" ");
				first = false;
				printf("%d", i);
			}
		}
		print();
	}
}
