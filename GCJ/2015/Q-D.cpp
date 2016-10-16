#include <bits/stdc++.h>
#include "header.h"

bool check(int x, int r, int c) {
	if (r > c)
		swap(r, c);
	if ((r * c) % x != 0)
		return false;
	if (r < (x + 1) / 2)
		return false;
	if (x >= 7)
		return false;
	if (x <= 3)
		return true;
	if (x == 4 && r == 2)
		return false;
	if (x == 6 && r == 3)
		return false;
	if (x == 5 && r == 3 && c == 5)
		return false;

	return true;
}

int main() {
	int x, r, c;
	forX() {
		cin >> x >> r >> c;
		printp("%s\n", check(x, r, c) ? "GABRIEL" : "RICHARD");
	}
}
