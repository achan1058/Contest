#include <bits/stdc++.h>
#include "header.h"

class BichromeBoard {
public:
	string ableToDraw(vector<string> board) {
		bool odd = true, even = true;
		rep(i, 0, sz(board)) {
			rep(j, 0, sz(board[i])) {
				if ((i + j) % 2 == 0) {
					if (board[i][j] == 'W')
						odd = false;
					else if (board[i][j] == 'B')
						even = false;
				} else {
					if (board[i][j] == 'B')
						odd = false;
					else if (board[i][j] == 'W')
						even = false;
				}
			}
		}
		return (odd || even ? "Possible" : "Impossible");
	}
};
