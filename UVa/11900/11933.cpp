#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi out(2, 0);
		int cur = 0, e = 1;
		while (n > 0) {
			if (n % 2 == 1) {
				out[cur] += e;
				cur = 1 - cur;
			}
			n /= 2;
			e *= 2;
		}
		printf("%d %d\n", out[0], out[1]);
	}
}
