#include <bits/stdc++.h>
#include "header.h"

int serialize(vvi& game) {
	int r = 0;
	drep(i, j, 3, 3) {
		r *= 3;
		r += game[i][j];
	}
	return r;
}

bool isWon(vvi& game) {
	rep(i, 0, 3) {
		if (game[i][0] == game[i][1] && game[i][1] == game[i][2] && game[i][0] != 0)
			return true;
		if (game[0][i] == game[1][i] && game[1][i] == game[2][i] && game[0][i] != 0)
			return true;
	}
	if (game[0][0] == game[1][1] && game[1][1] == game[2][2] && game[0][0] != 0)
		return true;
	if (game[0][2] == game[1][1] && game[1][1] == game[2][0] && game[0][2] != 0)
		return true;

	return false;
}

int main() {
	vb isValid(20000);
	vvi game = mi(3, 3, 0);
	int player = 1;
	queue<pair<vvi, int>> q;
	q.push({ game, player });
	isValid[0] = true;

	while (!q.empty()) {
		game = q.front().x;
		player = q.front().y;
		q.pop();

		if (isWon(game))
			continue;
		drep(i, j, 3, 3) {
			if (game[i][j] == 0) {
				game[i][j] = player;
				int next = serialize(game);
				if (!isValid[next]) {
					isValid[next] = true;
					q.push({ game, 3 - player });
				}
				game[i][j] = 0;
			}
		}
	}

	char c;
	forX() {
		drep(i, j, 3, 3) {
			cin >> c;
			if (c == '.')
				game[i][j] = 0;
			else if (c == 'X')
				game[i][j] = 1;
			else if (c == 'O')
				game[i][j] = 2;
		}
		printf("%s\n", isValid[serialize(game)] ? "yes" : "no");
	}
}
