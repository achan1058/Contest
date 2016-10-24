#pragma once
#include "header.h"

template<class U, class W> bool floodfillRule(U& curg, U& newg, U source, U target, W& curv, W& newv) {
	if (newg == source) {
		newg = target;
		return true;
	} else {
		return false;
	}
}
template<class T, class U, class V = vi, class W = int>
int floodfill(vector<T>& grid, int x0, int y0, U target = 0, vi dx = { 1, 0, -1, 0 }, vi dy = { 0, 1, 0, -1 }, int x1 = -1, int y1 = -1,
	bool(process)(U& curg, U& newg, U source, U target, W& curv, W& newv) = floodfillRule<U, W>, vector<V>* value = nullptr) {
	int r = sz(grid), c = sz(grid[0]), count = 1;
	queue<pii> q;
	U source = grid[x0][y0];
	W dummy;
	q.push({ x0, y0 });
	grid[x0][y0] = target;

	while (!q.empty()) {
		int x = q.front().x, y = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x + dx[i], ny = y + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || 
				!process(grid[x][y], grid[nx][ny], source, target,
					value == nullptr ? dummy : (*value)[x][y],
					value == nullptr ? dummy : (*value)[nx][ny]))
				continue;

			q.push({ nx, ny });
			count++;

			if (x1 != -1 && y1 != -1 && nx == x1 && ny == y1)
				return count;
		}
	}
	return x1 != -1 && y1 != -1 ? -1 : count;
}
