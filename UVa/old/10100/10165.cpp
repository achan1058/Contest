#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int v, total = 0;
		rep(i, 0, n) {
			cin >> v;
			total ^= v;
		}
		printf(total == 0 ? "No\n" : "Yes\n");
	}
}
