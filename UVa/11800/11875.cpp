#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, t;
	forX() {
		cin >> n;
		rep(i, 0, n / 2)
			cin >> t;
		cin >> t;
		printc("%d\n", t);
		rep(i, 0, n / 2)
			cin >> t;
	}
}
