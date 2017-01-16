#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, diff = 0;
		cin >> n;
		vi ladders(n + 1);
		read(ladders, 1);
		rrep(i, n - 1, 0) {
			int gap = ladders[i + 1] - ladders[i];
			if (gap > diff)
				diff = gap;
			else if (gap == diff)
				diff++;
		}
		printc("%d\n", diff);
	}
}
