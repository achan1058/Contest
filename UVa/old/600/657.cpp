#include <bits/stdc++.h>
#include "floodfill.h"

bool rule(char& curg, char& newg, char source, char target, int& curv, int& newv, bool first) {
	if (newg == '*') {
		newg = '.';
		return true;
	} else if (newg == 'X' || (newg == 'x' && target != 'x')) {
		newg = target;
		return true;
	}
	return false;
}

int main() {
	int r, c;
	whileX(cin >> c >> r && (r | c) != 0) {
		vi rolls;
		vs board(r);
		read(board);

		drep(i, j, r, c) {
			if (board[i][j] != '.') {
				int roll = 0;
				floodfill(board, i, j, 'x', vi({ 1, 0, -1, 0 }), vi({ 0, 1, 0, -1 }), -1, -1, rule);
				drep(i2, j2, r, c) {
					if (board[i2][j2] == 'x') {
						floodfill(board, i2, j2, '.', vi({ 1, 0, -1, 0 }), vi({ 0, 1, 0, -1 }), -1, -1, rule);
						roll++;
					}
				}
				rolls.pb(roll);
			}
		}

		sort(all(rolls));
		printf("Throw %d\n", X);
		rep(i, 0, sz(rolls))
			printf("%s%d", i > 0 ? " " : "", rolls[i]);

		printf("\n\n");
	}
}
