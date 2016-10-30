#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int parity = 0;
		vi arr(n);
		read(arr);
		rep(i, 0, n) {
			while (arr[i] != i + 1) {
				swap(arr[i], arr[arr[i] - 1]);
				parity++;
			}
		}

		printf("%s\n", parity % 2 ? "Marcelo" : "Carlos");
	}
}
