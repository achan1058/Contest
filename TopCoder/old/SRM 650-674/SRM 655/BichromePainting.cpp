#include <bits/stdc++.h>
#include "header.h"

bool uncolor(int n, int k, vs& board) {
	rep(i, 0, n - k + 1) {
		rep(j, 0, n - k + 1) {
			bool black = false, white = false;
			rep(i2, 0, k) {
				rep(j2, 0, k) {
					if (board[i + i2][j + j2] == 'W')
						white = true;
					else if (board[i + i2][j + j2] == 'B')
						black = true;
					if (black && white)
						goto end;
				}
			}
			if ((black && !white) || (white && !black)) {
				rep(i2, 0, k) {
					rep(j2, 0, k)
						board[i + i2][j + j2] = ' ';
				}
				return true;
			}
		end:;
		}
	}
	return false;
}

class BichromePainting {
public:
	string isThatPossible(vector<string> board, int k) {
		int n = sz(board);
		while (uncolor(n, k, board));

		bool good = true;
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (board[i][j] != ' ')
					good = false;
			}
		}

		return good ? "Possible" : "Impossible";
	}
};
