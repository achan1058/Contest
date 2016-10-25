#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi v(n);
		read(v);
		int count = 0;
		drep(i, j, n, n - i - 1) {
			if (v[j] > v[j + 1]) {
				swap(v[j], v[j + 1]);
				count++;
			}
		}
		printf("Minimum exchange operations : %d\n", count);
	}
}
