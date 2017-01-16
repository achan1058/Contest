#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, c;
	forX() {
		cin >> n;
		vb values(51000);
		int total = 0;
		values[0] = true;

		rep(i, 0, n) {
			cin >> c;
			rrep(j, total, 0) {
				if (values[j])
					values[j + c] = true;
			}
			total += c;
		}

		rrep(j, total / 2, 0) {
			if (values[j]) {
				printf("%d\n", total - 2 * j);
				break;
			}
		}
	}
}
