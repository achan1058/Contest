#include <bits/stdc++.h>
#include "header.h"

pair<int, bool> check(const vs& grid, char c) {
	bool win = false;
	int count = 0;
	rep(i, 0, 3) {
		if (grid[i][0] == c && grid[i][1] == c && grid[i][2] == c)
			win = true;
		if (grid[0][i] == c && grid[1][i] == c && grid[2][i] == c)
			win = true;
	}
	if (grid[0][0] == c && grid[1][1] == c && grid[2][2] == c)
		win = true;
	if (grid[0][2] == c && grid[1][1] == c && grid[2][0] == c)
		win = true;
	drep(i, j, 3, 3)
		if (grid[i][j] == c)
			count++;
	return { count, win };
}

int main() {
	forX() {
		vs grid(3);
		read(grid);
		auto x = check(grid, 'X');
		auto o = check(grid, 'O');
		if (x.second && o.second)
			print("no");
		else if (x.second)
			print(x.first == o.first + 1 ? "yes" : "no");
		else if (o.second)
			print(x.first == o.first ? "yes" : "no");
		else
			print(x.first == o.first || x.first == o.first + 1 ? "yes" : "no");
	}
}
