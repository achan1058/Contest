#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n && n != 0) {
		vvl table(n);
		table[n - 1].resize(n);
		read(table[n - 1]);
		for (int i = n - 2; i >= 0; i--) {
			table[i].resize(i + 1);
			for (int j = 0; j <= i; j++)
				table[i][j] = table[i + 1][j + 1] - table[i + 1][j];
		}
		cin >> m;
		table[0].resize(m + 1, table[0][0]);
		for (int i = 1; i < n; i++) {
			table[i].resize(i + m + 1);
			for (int j = i + 1; j <= i + m; j++)
				table[i][j] = table[i][j - 1] + table[i - 1][j - 1];
		}

		printf("Term %d of the sequence is %lld\n", n + m, table.back().back());
	}
}
