#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r, c;
	cin >> r >> c;
	vs grid = mc(r, c, '.');
	for (int i = 0; i < r; i += 2)
		grid[i] = string(c, '#');
	for (int i = 1; i < r; i += 4)
		grid[i].back() = '#';
	for (int i = 3; i < r; i += 4)
		grid[i][0] = '#';
	irep(s, grid)
		printv(s);
}
