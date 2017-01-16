#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	int n, m;
	whileX(cin >> n >> m && (n | m) != 0) {
		vs board(n);
		read(board);
		vector<pair<int, char>> out;

		drep(i, j, n, m) {
			if (board[i][j] != '.') {
				char c = board[i][j];
				out.pb({ -floodfill(board, i, j, '.'), c });
			}
		}
		sort(all(out));
		printf("Problem %d:\n", X);
		irep(v, out)
			printf("%c %d\n", v.y, -v.x);
	}
}
