#include <bits/stdc++.h>
#include "header.h"

vi dx = { 2, 1, 0, 0, 0, 1, 2, 2 };
vi dy = { 2, 2, 2, 1, 0, 0, 0, 1 };

int main() {
	int N, n;
	cin >> N;
	rep(X, 0, N) {
		cin >> n;
		vs board(n), open(n);
		vvi count = mi(n + 2, n + 2, 0);
		bool boom = false;
		irep(s, board)
			cin >> s;
		irep(s, open)
			cin >> s;
		rep(i, 0, n) {
			rep(j, 0, n) {
				if (board[i][j] == '*') {
					rep(k, 0, 8)
						count[i + dx[k]][j + dy[k]] += 1;
					if (open[i][j] == 'x')
						boom = true;
				}
			}
		}
		printf("%s", X > 0 ? "\n" : "");
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
