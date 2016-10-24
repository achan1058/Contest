#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	whileX(cin >> n && n != 0) {
		int count = 0;
		rep(i, 0, n) {
			cin >> t;
			count += (t == 0 ? -1 : 1);
		}
		printc("%d\n", count);
	}
}
