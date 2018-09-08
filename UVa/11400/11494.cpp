#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x1, x2, y1, y2;
	while (cin >> x1 >> y1 >> x2 >> y2 && (x1 | x2 | y1 | y2) != 0) {
		if (x1 == x2 && y1 == y2)
			print("0");
		else if (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2))
			print("1");
		else
			print("2");
	}
}
