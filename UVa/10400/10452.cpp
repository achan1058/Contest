#include <bits/stdc++.h>
#include "floodfill.h"

bool rule(int& curg, int& newg, int source, int target, int& curv, int& newv, bool first) {
	if (first)
		curg = -1;
	else if (newg < inf)
		return false;
	newg = curg + 1;
	return true;
}

int main() {
	char ch;
	int r, c;
	string good = "IEHOVA";
	vi dx({ 1, 0, 0 }), dy({ 0, 1, -1 });
	vs dir = { "forth", "left", "right" };

	forX() {
		cin >> r >> c;
		int x0, y0, x1, y1;
		vvi board = mi(r, c, -1);
		for (int i = 0; i < r; i++) {
			for (int j = 0; j < c; j++) {
				cin >> ch;
				if (ch == '#') {
					board[i][j] = 0;
					x0 = i;
					y0 = j;
				} else if (ch == '@') {
					board[i][j] = inf;
					x1 = i;
					y1 = j;
				} else {
					for (char t : good) {
						if (ch == t)
							board[i][j] = inf;
					}
				}
			}
		}

		floodfill(board, x0, y0, 0, dx, dy, x1, y1, rule);
		while (x0 != x1 || y0 != y1) {
			for (int i = 0; i < sz(dx); i++) {
				int nx = x1 - dx[i], ny = y1 - dy[i];
				if (nx >= 0 && nx < r && ny >= 0 && ny < c && board[nx][ny] == board[x1][y1] - 1) {
					x1 = nx;
					y1 = ny;
					printf("%s%s", dir[i].c_str(), x0 == x1 && y0 == y1 ? "\n" : " ");
					break;
				}
			}
		}
	}
}
