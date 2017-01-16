#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	int r, c;
	forX() {
		cin >> r >> c;
		vs board(r);
		read(board);
		map<char, int> result;

		drep(i, j, r, c) {
			if (board[i][j] != ' ') {
				result[board[i][j]]++;
				floodfill(board, i, j, ' ');
			}
		}

		vector<pair<int, char>> sorted;
		printf("World #%d\n", X);
		irep(pr, result)
			sorted.pb({ -pr.y, pr.x });

		sort(all(sorted));
		irep(pr, sorted)
			printf("%c: %d\n", pr.y, -pr.x);
	}
}
