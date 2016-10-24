#pragma once
#include "header.h"

template<class T, class U>
int floodfill(vector<T>& grid, int x0, int y0, U target = 0, vi dx = { 1, 0, -1, 0 }, vi dy = { 0, 1, 0, -1 }) {
	int r = sz(grid), c = sz(grid[0]), count = 1;
	queue<pii> q;
	U source = grid[x0][y0];
	q.push({ x0, y0 });
	grid[x0][y0] = target;

	while (!q.empty()) {
		int x1 = q.front().x, y1 = q.front().y;
		q.pop();
		rep(i, 0, sz(dx)) {
			int nx = x1 + dx[i], ny = y1 + dy[i];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] != source)
				continue;

			grid[nx][ny] = target;
			q.push({ nx, ny });
			count++;
		}
	}
	return count;
}
