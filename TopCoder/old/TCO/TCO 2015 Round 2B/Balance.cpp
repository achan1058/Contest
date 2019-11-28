#include <bits/stdc++.h>
#include "header.h"

struct Tree {
	vector<Tree> children;
};

int n;
vi dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
vpii floodfill(vs& board, int x0, int y0, char c) {
	queue<pii> q;
	vpii todo;
	vi left(n, n), right(n, 0);
	q.push({ x0, y0 });
	board[x0][y0] = ' ';
	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n)
				continue;
			if (board[nx][ny] != c) {
				if (board[nx][ny] != ' ')
					todo.pb({ nx, ny });
				continue;
			}

			board[nx][ny] = ' ';
			q.push({ nx, ny });
		}
	}
	return{ todo };
}

Tree buildTree(vs& board, vpii& check, char c) {
	Tree result;
	irep(p, check) {
		if (board[p.x][p.y] == c) {
			Tree t;
			vpii todo = floodfill(board, p.x, p.y, c);
			if (c == '#')
				t = buildTree(board, todo, '.');
			else
				t = buildTree(board, todo, '#');
			result.children.pb(t);
		}
	}
	return result;
}

bool compareTree(Tree t1, Tree t2) {
	if (sz(t1.children) != sz(t2.children))
		return false;
	if (sz(t1.children) == 0)
		return true;
	int num = sz(t1.children);
	vi perm(num);

	rep(i, 0, num)
		perm[i] = i;
	do {
		bool good = true;
		rep(i, 0, num) {
			if (!compareTree(t1.children[i], t2.children[perm[i]])) {
				good = false;
				break;
			}
		}
		if (good)
			return true;
	} while (next_permutation(all(perm)));
	return false;
}

class Balance {
public:
	string canTransform(vector<string> initial, vector<string> target) {
		n = sz(initial) + 2;
		vs int2 = mc(n, n, '#'), tar2 = mc(n, n, '#');
		rep(i, 1, n - 1) {
			rep(j, 1, n - 1) {
				int2[i][j] = initial[i - 1][j - 1];
				tar2[i][j] = target[i - 1][j - 1];
			}
		}
		vpii check;
		rep(i, 0, n) {
			check.pb({ 0, i });
			check.pb({ n - 1, i });
			check.pb({ i, 0 });
			check.pb({ i, n - 1 });
		}
		Tree t1 = buildTree(int2, check, '#');
		Tree t2 = buildTree(tar2, check, '#');
		if (compareTree(t1, t2))
			return "Possible";
		else
			return "Impossible";
	}
};
