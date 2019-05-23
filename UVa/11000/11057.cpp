#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, cost;
	while (cin >> n) {
		vi books(n);
		read(books);
		cin >> cost;
		map<int, int> small, med, large;
		irep(b, books) {
			if (2 * b == cost)
				med[b]++;
			else if (2 * b < cost)
				small[b]++;
			else
				large[b]++;
		}
		if (med[cost / 2] >= 2) {
			print("Peter should buy books whose prices are %d and %d.\n", cost / 2, cost / 2);
			continue;
		}

		irep(p, large) {
			if (small[cost - p.first] > 0) {
				print("Peter should buy books whose prices are %d and %d.\n", cost - p.first, p.first);
				break;
			}
		}
	}
}
