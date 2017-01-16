#include <bits/stdc++.h>
#include "header.h"

int main() {
	int row, col, cell;
	while (cin >> row >> col >> cell && (row | col | cell) != 0)
		printf("%d\n", ((row - 7) * (col - 7) + cell) / 2);
}
