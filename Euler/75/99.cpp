#include <bits/stdc++.h>
#include "header.h"

int main() {
	fstream in("Euler/input/99.txt");
	int b, e, bestind = -1;
	double best = 0;
	char c;

	rep(i, 0, 1000) {
		in >> b >> c >> e;
		if (log(b) * e > best) {
			best = log(b) * e;
			bestind = i + 1;
		}
	}

	printf("%d\n", bestind);
}
