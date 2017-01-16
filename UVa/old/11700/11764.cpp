#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, cur, prev;
	forX() {
		cin >> n >> prev;
		int up = 0, down = 0;
		rep(i, 0, n - 1) {
			cin >> cur;
			if (cur > prev)
				up++;
			else if (prev > cur)
				down++;
			prev = cur;
		}
		printc("%d %d\n", up, down);
	}
}
