#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	char c;
	forX() {
		cin >> c >> n >> m;
		if (c == 'k')
			printf("%d\n", (n * m + 1) / 2);
		else if (c == 'r' || c == 'Q')
			printf("%d\n", min(m, n));
		else
			printf("%d\n", ((n + 1) / 2) * ((m + 1) / 2));
	}
}
