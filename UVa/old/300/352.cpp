#include <bits/stdc++.h>
#include "floodfill.h"

int main() {
	int n;
	whileX(cin >> n) {
		int count = 0;
		vs board(n);
		read(board);

		drep(i, j, n, n) {
			if (board[i][j] == '1') {
				floodfill(board, i, j, '0', vi({ -1, -1, -1, 0, 1, 1, 1, 0 }), vi({ -1, 0, 1, 1, 1, 0, -1, -1 }));
				count++;
			}
		}
		printf("Image number %d contains %d war eagles.\n", X, count);
	}
}
