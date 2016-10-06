#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, x, y, xi, yi;
	while (cin >> n && n != 0) {
		cin >> x >> y;
		rep(i, 0, n) {
			cin >> xi >> yi;
			if (xi == x || yi == y) {
				printf("divisa\n");
				continue;
			}
			printf("%c%c\n", yi > y ? 'N' : 'S', xi > x ? 'E' : 'O');
		}
	}
}
