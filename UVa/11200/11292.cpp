#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m && (n | m) != 0) {
		vi d(n), k(m);
		read(d);
		read(k);
		sort(all(d));
		sort(all(k));
		int gold = 0, head = 0;
		rep(i, 0, m) {
			if (head == n)
				break;
			if (k[i] >= d[head]) {
				gold += k[i];
				head++;
			}
		}

		if (head == n)
			printf("%d\n", gold);
		else
			printf("Loowater is doomed!\n");
	}
}
