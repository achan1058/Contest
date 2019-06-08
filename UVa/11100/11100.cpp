#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		vi bag(n);
		read(bag);
		sort(all(bag));
		int count = 1, best = 1;
		rep(i, 1, n) {
			if (bag[i] == bag[i - 1]) {
				count++;
				best = max(best, count);
			} else {
				count = 1;
			}
		}
		printX("%d\n", best);
		rep(i, 0, best) {
			printf("%d", bag[i]);
			for (int j = i + best; j < n; j += best)
				printf(" %d", bag[j]);
			print();
		}
	}
}
