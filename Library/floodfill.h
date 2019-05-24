#pragma once
#include <bits/stdc++.h>
using namespace std;

vector<int> dx = { 1, 0, -1, 0 }, dy = { 0, 1, 0, -1 };
template<class T, class U>
int floodfill(vector<T>& grid, int x0, int y0, U target = 0, bool strict = true) {
	int r = grid.size(), c = grid[0].size(), d = dx.size(), count = 1;
	queue<pair<int, int>> q;
	U source = grid[x0][y0];
	grid[x0][y0] = target;
	q.push({ x0, y0 });

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] == target || (grid[nx][ny] != source && strict))
				continue;

			grid[nx][ny] = target;
			q.push({ nx, ny });
			count++;
		}
	}
	return count;
}

template<class T>
T flooddist(const vector<vector<T>>& grid, int x0, int y0, int x1, int y1, T non_pos = inf) {
	if (x0 == x1 && y0 == y1) return grid[x0][y0];
	int r = grid.size(), c = grid[0].size(), d = dx.size();
	vector<vector<T>> dist(r, vector<T>(c, non_pos));

	priority_queue<pair<T, pair<int, int>>> q;
	dist[x0][y0] = grid[x0][y0];
	q.push({ -dist[x0][y0], { x0, y0 } });

	while (!q.empty()) {
		int v = -q.top().first, x = q.top().second.first, y = q.top().second.second;
		q.pop();
		for (int k = 0; k < d; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= r || ny < 0 || ny >= c || grid[nx][ny] == non_pos || dist[x][y] + grid[nx][ny] >= dist[nx][ny])
				continue;
			if (nx == x1 && ny == y1)
				return dist[x][y] + grid[nx][ny];

			dist[nx][ny] = dist[x][y] + grid[nx][ny];
			q.push({ -dist[nx][ny], { nx, ny } });
		}
	}
	return non_pos;
}
