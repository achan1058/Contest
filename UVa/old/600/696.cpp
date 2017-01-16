#include <bits/stdc++.h>
#include "header.h"

int small(int n) { return n / 2 + (n % 4 != 0 ? 1 : 0); }
int main() {
	int m, n;
	while (cin >> m >> n && (m | n) != 0) {
		int v;
		if (n == 1 || m == 1)
			v = max(n, m);
		else if (n == 2)
			v = small(m) * n;
		else if (m == 2)
			v = small(n) * m;
		else
			v = (m * n + 1) / 2;
		printf("%d knights may be placed on a %d row %d column board.\n", v, m, n);
	}
}
