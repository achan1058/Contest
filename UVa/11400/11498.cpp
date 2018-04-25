#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y, nx, ny;
	while (cin >> n && n != 0) {
		cin >> x >> y;
		rep(i, 0, n) {
			cin >> nx >> ny;
			if (x == nx || y == ny) {
				printf("divisa\n");
				continue;
			}
			printf("%c%c\n", ny > y ? 'N' : 'S', nx > x ? 'E' : 'O');
		}
	}
}
