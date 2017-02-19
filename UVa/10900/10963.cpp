#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, a, b;
		cin >> n >> a >> b;

		bool good = true;
		int diff = a - b;
		rep(i, 1, n) {
			cin >> a >> b;
			good &= a - b == diff;
		}
		printX("%s\n", good ? "yes" : "no");
	}
}
