#include <bits/stdc++.h>
#include "header.h"

vi dx = { 2, 1, 0, 0, 0, 1, 2, 2 };
vi dy = { 2, 2, 2, 1, 0, 0, 0, 1 };
int main() {
	int n;
	forX() {
		cin >> n;
		vs board(n), open(n);
		vvi count = mi(n + 2, n + 2, 0);
		bool boom = false;
		read(board);
		read(open);
		drep(i, j, n, n) {
			if (board[i][j] == '*') {
				rep(k, 0, 8)
					count[i + dx[k]][j + dy[k]] += 1;
				if (open[i][j] == 'x')
					boom = true;
			}
		}
		printX("");
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (boom && board[i][j] == '*')
					printf("*");
				else if (open[i][j] == 'x')
					printf("%d", count[i + 1][j + 1]);
				else
					printf(".");
			}
			printf("\n");
		}
	}
}
