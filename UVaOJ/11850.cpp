#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		bool good = true;
		vi dist(n);
		rep(i, 0, n)
			cin >> dist[i];
		sort(all(dist));
		rep(i, 0, n - 1) {
			if (dist[i + 1] - dist[i] > 200) {
				good = false;
				break;
			}
		}
		if (1422 - dist[n - 1] > 100)
			good = false;

		printf("%sPOSSIBLE\n", good ? "" : "IM");
	}
}
