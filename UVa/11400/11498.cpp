#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y, nx, ny;
	while (cin >> n && n != 0) {
		cin >> x >> y;
		rep(i, 0, n) {
			cin >> nx >> ny;
			if (x == nx || y == ny) {
				print("divisa");
				continue;
			}
			print("%c%c", ny > y ? 'N' : 'S', nx > x ? 'E' : 'O');
		}
	}
}
