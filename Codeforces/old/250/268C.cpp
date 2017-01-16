#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	cin >> n >> m;
	n = min(n, m);
	printf("%d\n", n + 1);
	rep(i, 0, n + 1)
		printf("%d %d\n", i, n - i);
}
