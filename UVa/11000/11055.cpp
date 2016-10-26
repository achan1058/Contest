#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vvi arr = mi(n, n, 0);
		read(arr);
		irep(a, arr) {
			int mn = *min_element(all(a));
			irep(v, a)
				v -= mn;
		}

		bool good = true;
		drep(j, i, n, n - 1) {
			if (arr[i][j] != arr[i + 1][j]) {
				good = false;
				goto end;
			}
		}
	end:;

		printf("%shomogeneous\n", good ? "" : "not ");
	}
}
