#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int r, total = 0;
		cin >> r;
		vi rel(r);
		read(rel);

		sort(all(rel));
		rep(i, 0, r / 2)
			total += rel[r / 2] - rel[i];
		rep(i, r / 2, r)
			total += rel[i] - rel[r / 2];

		printf("%d\n", total);
	}
}
