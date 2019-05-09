#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, v1, v2, dist = -1;
		cin >> n;
		rep(i, 0, n) {
			cin >> v1 >> v2;
			if (dist == -1)
				dist = v1 - v2;
			else if (dist != v1 - v2)
				dist = -inf;
		}
		printX("%s\n", dist >= 0 ? "yes" : "no");
	}
}
