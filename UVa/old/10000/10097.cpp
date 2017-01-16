#include <bits/stdc++.h>
#include "header.h"

int n, n3;
vvi board, grid;
int floodfill(int x0, int y0) {
	queue<pii> q;
	q.push({ x0, y0 });
	board[x0][y0] = 0;
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();

		if (x1 == n3 - 1 || y1 == n3 - 1)
			return board[x1][y1];
		if (grid[x1][y1] > 0 && board[x1][y1] + 1 < board[grid[x1][y1] - 1][y1]) {
			board[grid[x1][y1] - 1][y1] = board[x1][y1] + 1;
			q.push({ grid[x1][y1] - 1, y1 });
		}
		if (grid[y1][x1] > 0 && board[x1][y1] + 1 < board[x1][grid[y1][x1] - 1]) {
			board[x1][grid[y1][x1] - 1] = board[x1][y1] + 1;
			q.push({ x1, grid[y1][x1] - 1 });
		}
	}

	return inf;
}

int main() {
	int n, n1, n2;
	whileX(cin >> n && n != 0) {
		board = mi(n, n, inf);
		grid = mi(n, n, inf);
		read(grid);
		cin >> n1 >> n2 >> n3;
		int ans = floodfill(n1 - 1, n2 - 1);
		printf("Game #%d\n", X);
		if (ans == inf)
			printf("Destination is Not Reachable !\n\n");
		else
			printf("Minimum Number of Moves = %d\n\n", ans);
	}
}
