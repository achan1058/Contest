#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vi trains(n);
		read(trains);
		vi lis(n, 1), lds(n, 1);
		int mx = 0;
		for (int i = n - 1; i >= 0; i--) {
			for (int j = i + 1; j < n; j++) {
				if (trains[j] > trains[i])
					lis[i] = max(lis[i], lis[j] + 1);
				else if (trains[j] < trains[i])
					lds[i] = max(lds[i], lds[j] + 1);
			}
			mx = max(mx, lis[i] + lds[i] - 1);
		}
		printf("%d\n", mx);
	}
}
