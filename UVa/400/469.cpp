#include <bits/stdc++.h>
#include "floodfill.h"
#include "utils.h"
#include "header.h"

int main() {
	forX(true) {
		dx = dx8;
		dy = dy8;
		vs board;
		string s;
		while (getline(cin, s) && (s[0] == 'L' || s[0] == 'W'))
			board.pb(s);

		printX();
		do {
			int r, c;
			stringstream ss(s);
			ss >> r >> c;
			char fill = board[r - 1][c - 1] == 'W' ? 'U' : 'W';
			int ans = floodfill(board, r - 1, c - 1, fill);
			print(ans);
		} while (getline(cin, s) && s != "");
	}
}
