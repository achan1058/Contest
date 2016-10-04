#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int total = 0, v;
		rep(i, 0, n) {
			cin >> v;
			total ^= v;
		}

		printf("%s\n", total == 0 ? "No" : "Yes");
	}
}
