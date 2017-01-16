#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n) {
		int in = 0;
		rep(i, 1, n)
			in += int(sqrt((2 * n - 1) * (2 * n - 1) - 4 * i * i) / 2);
		printX("In the case n = %d, %d cells contain segments of the circle.\n", n, 8 * n - 4);
		printf("There are %d cells completely contained in the circle.\n", 4 * in);
	}
}
