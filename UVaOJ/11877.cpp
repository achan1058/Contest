#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int bot = 0, total = -n;
		while (n > 0) {
			bot += n;
			total += n;
			n = bot / 3;
			bot = bot % 3;
		}
		if (bot % 3 == 2)
			total++;
		printf("%d\n", total);
	}
}
