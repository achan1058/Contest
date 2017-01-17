#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	forX() {
		vs board(30);
		int ans = 0, r = 0;
		lineX();
		while (getline(cin, board[r]) && board[r] != "")
			r++;

		int c = board[0].size();
		board.resize(r);

		drep(i, j, r, c) {
			if (board[i][j] == '1')
				ans = max(ans, floodfill(board, i, j, '0', vi({ 1, 1, 1, 0, -1, -1, -1, 0 }), vi({ -1, 0, 1, 1, 1, 0, -1, -1 })));
		}

		printX("%d\n", ans);
	}
}
