#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		bool good = true;
		int v;
		rep(i, 0, 13) {
			cin >> v;
			good &= v != 0;
		}
		printf("Set #%d: %s\n", X, good ? "Yes" : "No");
	}
}
