#include <bits/stdc++.h>
#include "header.h"

int main() {
	vs names(16);
	read(names);
	vvd win = md(16, 16, 0);
	vvd percent = md(5, 16, 0);
	percent[0] = vd(16, 1);
	drep(i, j, 16, 16) {
		cin >> win[i][j];
		win[i][j] /= 100;
	}

	for (int i = 0; i < 4; i++) {
		int size = 1 << i;
		for (int j = 0; j < 16; j += 2 * size) {
			drep(j1, j2, size, size) {
				int l = j1 + j, r = j2 + j + size;
				percent[i + 1][l] += win[l][r] * percent[i][l] * percent[i][r];
				percent[i + 1][r] += win[r][l] * percent[i][l] * percent[i][r];
			}
		}
	}

	rep(i, 0, 16)
		printf("%-10s p=%.2f%%\n", names[i].c_str(), percent[4][i] * 100);
}
