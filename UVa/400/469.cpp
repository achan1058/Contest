#include <bits/stdc++.h>
#include "floodfill.h"

int t;
bool rule(char& curg, char& newg, char source, char target, int& curv, int& newv, bool first) {
	if (newg == source) {
		newg = target;
		newv = t;
		return true;
	}
	return false;
}

int main() {
	string s;
	forX() {
		vs board;
		if (X == 1)
			getline(cin, s);
		while (getline(cin, s) && (s[0] == 'W' || s[0] == 'L'))
			board.pb(s);

		int r = sz(board), c = sz(board[0]);
		t = 1;
		vvi bc = mi(r, c, 0);
		map<int, int> ans;
		drep(i, j, r, c) {
			if (board[i][j] == 'W') {
				ans[t] = floodfill(board, i, j, 'L', vi({ 1, 0, -1, 0, 1, 1, -1, -1 }), vi({ 0, 1, 0, -1, 1, -1, -1, 1 }), -1, -1, rule, &bc);
				t++;
			}
		}

		printX("");
		do {
			stringstream ss(s);
			int x, y;
			ss >> x >> y;
			printf("%d\n", ans[bc[x - 1][y - 1]]);
		} while (getline(cin, s) && s != "");
	}
}
