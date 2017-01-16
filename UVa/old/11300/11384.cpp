#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n) {
		int d = 1, i = 0;
		while (d <= n) {
			d <<= 1;
			i++;
		}

		printf("%d\n", i);
	}
}
