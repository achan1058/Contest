#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x1, y1, x2, y2;
	while (cin >> x1 >> y1 >> x2 >> y2 && (x1 | x2 | y1 | y2) != 0) {
		if (x1 == x2 && y1 == y2)
			printf("0\n");
		else if (x1 == x2 || y1 == y2 || abs(x2 - x1) == abs(y2 - y1))
			printf("1\n");
		else
			printf("2\n");
	}
}
