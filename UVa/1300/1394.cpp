#include <bits/stdc++.h>
#include "misc.h"

int main() {
	int n, k, m;
	while (cin >> n >> k >> m && (n | k | m) != 0) {
		int d = ((m - k) % n + n) % n;
		printf("%d\n", (joseph(n, k) + d) % n + 1);
	}
}
