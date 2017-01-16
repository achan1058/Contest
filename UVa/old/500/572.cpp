#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	int r, c;
	while (cin >> r >> c && r != 0) {
		vs board(r);
		read(board);

		int num_pockets = 0;
		drep(i, j, r, c) {
			if (board[i][j] == '@') {
				num_pockets++;
				floodfill(board, i, j, '*', vi({ 1, 0, -1, 0, 1, 1, -1, -1 }), vi({ 0, 1, 0, -1, 1, -1, -1, 1 }));
			}
		}
		printf("%d\n", num_pockets);
	}
}
