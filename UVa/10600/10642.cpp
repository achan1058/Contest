#include <bits/stdc++.h>
#include "header.h"

ll toPos(int x, int y) {
	ll d = x + y;
	ll pos = d * (d + 1) / 2;
	return pos + x;
}

int main() {
	forX() {
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		printc(abs(toPos(x1, y1) - toPos(x2, y2)));
	}
}
