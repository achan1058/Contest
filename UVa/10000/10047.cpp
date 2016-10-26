#include <bits/stdc++.h>
#include "header.h"

int r, c;
vector<vector<vvi>> board;
vi dx = { -1, 0, 1, 0 }, dy = { 0, 1, 0, -1 };
void floodfill(int x0, int y0) {
	queue<tuple<int, int, int, int>> q;
	q.push({ x0, y0, 0, 0 });
	board[x0][y0][0][0] = 0;
	while (!q.empty()) {
		int x1 = get<0>(q.front()), y1 = get<1>(q.front()), c1 = get<2>(q.front()), d1 = get<3>(q.front());
		q.pop();
		if (board[x1][y1][c1][(d1 + 1) % 4] > board[x1][y1][c1][d1] + 1) {
			board[x1][y1][c1][(d1 + 1) % 4] = board[x1][y1][c1][d1] + 1;
			q.push({ x1, y1, c1, (d1 + 1) % 4 });
		}
		if (board[x1][y1][c1][(d1 + 3) % 4] > board[x1][y1][c1][d1] + 1) {
			board[x1][y1][c1][(d1 + 3) % 4] = board[x1][y1][c1][d1] + 1;
			q.push({ x1, y1, c1, (d1 + 3) % 4 });
		}

		int nx = x1 + dx[d1], ny = y1 + dy[d1];
		if (nx < 0 || nx >= r || ny < 0 || ny >= c || board[nx][ny][(c1 + 1) % 5][d1] <= board[x1][y1][c1][d1] + 1)
			continue;

		board[nx][ny][(c1 + 1) % 5][d1] = board[x1][y1][c1][d1] + 1;
		q.push({ nx, ny, (c1 + 1) % 5, d1 });
	}
}

int main() {
	char ch;
	whileX(cin >> r >> c && (r | c) != 0) {
		int x0, y0, x1, y1;
		board = vector<vector<vvi>>(r, vector<vvi>(c, mi(5, 4, inf)));
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> ch;
				if (ch == '#') {
					for (int k = 0; k < 5; k++) {
						for (int l = 0; l < 4; l++)
							board[i][j][k][l] = -1;
					}
				} else if (ch == 'S') {
					x0 = i;
					y0 = j;
				} else if (ch == 'T') {
					x1 = i;
					y1 = j;
				}
			}
		}
		floodfill(x0, y0);

		int best = inf;
		for (int l = 0; l < 4; l++)
			best = min(best, board[x1][y1][0][l]);
		printX("Case #%d\n", X);
		if (best == inf)
			printf("destination not reachable\n");
		else
			printf("minimum time = %d sec\n", best);
	}
}
