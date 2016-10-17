#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		vi v(n);
		int count = 0;
		rep(i, 0, n)
			cin >> v[i];
		rep(i, 0, n) {
			rep(j, 0, n - 1 - i) {
				if (v[j] > v[j + 1]) {
					swap(v[j], v[j + 1]);
					count++;
				}
			}
		}
		printf("Minimum exchange operations : %d\n", count);
	}
}
