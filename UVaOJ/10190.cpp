#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		if (m <= 1 || n <= 1) {
			printf("Boring!\n");
			continue;
		}
		vi l = { n };
		while (n > 1) {
			if (n % m != 0) {
				l.clear();
				break;
			}
			n /= m;
			l.pb(n);
		}

		if (l.empty())
			printf("Boring!\n");
		else {
			bool fs = true;
			fori(v, l) {
				printf("%s%d", fs ? "" : " ", v);
				fs = false;
			}
			printf("\n");
		}
	}
}
