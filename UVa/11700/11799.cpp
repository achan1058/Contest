#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, f;
	forX() {
		int fast = 0;
		cin >> n;
		rep(i, 0, n) {
			cin >> f;
			fast = max(f, fast);
		}
		printc("%d\n", fast);
	}
}
