#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int k;
		cin >> k;
		if (k == 0) {
			printX("3\n");
			continue;
		} else if (k < 0) {
			k *= -1;
		}

		int n = int(sqrt(2 * k));
		while (k > n * (n + 1) / 2)
			n++;
		while (k % 2 != ((n + 1) / 2) % 2)
			n++;
		printX("%d\n", n);
	}
}
