#pragma once
#include <bits/stdc++.h>
using namespace std;

// uses adjacency matrix, returns flow value, flow, cut
template<class T>
tuple<T, vector<vector<T>>, vector<bool>> pushRelabel(const vector<vector<T>>& graph, int source, int target) {
	int n = graph.size();
	vector<vector<T>> flow(n, vector<T>(n, 0));
	vector<T> excess(n);
	vector<int> height(n), height_count(2 * n);
	vector<bool> cut(n);
	queue<int> q;

	height[source] = n;
	height_count[0] = n - 1;
	height_count[n] = 1;

	for (int i = 0; i < n; i++) {
		flow[source][i] = graph[source][i];
		flow[i][source] = -graph[source][i];
		excess[i] += graph[source][i];
		excess[source] -= graph[source][i];
		if (excess[i] > 0 && i != source && i != target)
			q.push(i);
	}

	while (!q.empty()) {
		int u = q.front(), min_height = inf;
		q.pop();

		for (int i = 0; excess[u] > 0 && i < n; i++) {
			if (graph[u][i] - flow[u][i] > 0) {
				if (height[u] > height[i]) {
					if (excess[i] == 0 && i != target)
						q.push(i);

					T delta = min(graph[u][i] - flow[u][i], excess[u]);
					flow[u][i] += delta;
					flow[i][u] -= delta;
					excess[i] += delta;
					excess[u] -= delta;
				} else {
					min_height = min(min_height, height[i]);
				}
			}
		}

		if (excess[u] > 0) {
			int old_height = height[u];
			if (height_count[old_height] == 1 && old_height < n) {
				for (int i = 0; i < n; i++) {
					if (height[i] >= old_height) {
						height_count[height[i]]--;
						height[i] = max(height[i], n + 1);
						height_count[height[i]]++;
					}
				}
			} else {
				height_count[old_height]--;
				height_count[min_height + 1]++;
				height[u] = min_height + 1;
			}

			q.push(u);
		}
	}

	for (int i = 0; i < n; i++) {
		if (height[i] >= n)
			cut[i] = true;
	}
	return{ excess[target], flow, cut };
}
