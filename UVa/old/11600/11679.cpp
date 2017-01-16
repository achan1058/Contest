#include <bits/stdc++.h>
#include "header.h"

int main() {
	int b, n, v1, v2, d;
	while (cin >> b >> n && (b | n) != 0) {
		vi cash(b);
		read(cash);
		for (int i = 0; i < n; i++) {
			cin >> v1 >> v2 >> d;
			cash[v1 - 1] -= d;
			cash[v2 - 1] += d;
		}

		bool bad = false;
		for (int i = 0; i < b; i++) {
			if (cash[i] < 0) {
				printf("N\n");
				bad = true;
				break;
			}
		}
		if (!bad)
			printf("S\n");
	}
}
