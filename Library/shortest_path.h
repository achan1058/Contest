#pragma once
#include "graph_util.h"

// returns dist matrix and previous node matrix
template<class T>
pair<vector<vector<T>>, vector<vector<int>>> floyd(const vector<vector<T>>& graph, bool minweight = false, T non_edge = inf) {
	int n = graph.size();
	vector<vector<T>> mat = graph;
	vector<vector<int>> prev = vector<vector<int>>(n, vector<int>(n, -1));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] != non_edge)
				prev[i][j] = i;
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (minweight) {
					if (max(mat[i][k], mat[k][j]) < mat[i][j]) {
						mat[i][j] = max(mat[i][k], mat[k][j]);
						prev[i][j] = prev[k][j];
					}
				} else {
					if (mat[i][k] + mat[k][j] < mat[i][j]) {
						mat[i][j] = mat[i][k] + mat[k][j];
						prev[i][j] = prev[k][j];
					}
				}
			}
		}
	}
	return{ mat, prev };
}

// returns dist list and previous node vector
template<class T>
pair<vector<T>, vector<int>> dijkstra(const adj_list<T>& graph, int start, T non_edge = inf) {
	int n = graph.size();
	vector<T> dist(n, non_edge);
	vector<int> prev(n, -1);
	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> q;
	q.push({ 0, start });

	while (!q.empty()) {
		T d = q.top().first;
		int v1 = q.top().second;
		q.pop();

		if (dist[v1] < d)
			continue;
		for (auto& e : graph[v1]) {
			if (d + e.second < dist[e.first]) {
				dist[e.first] = d + e.second;
				prev[e.first] = v1;
				q.push({ dist[e.first], e.first });
			}
		}
	}
	return{ dist, prev };
}

// returns dist list and previous node vector, returns -inf for nodes in cycle
template<class T>
pair<vector<T>, vector<int>> bellmanFord(const adj_list<T>& graph, int start, T non_edge = inf) {
	int n = graph.size();
	vector<T> dist(n, non_edge);
	vector<int> prev(n, -1);
	queue<int> q;
	dist[start] = 0;

	for (int i = 1; i < n; i++) {
		for (int v = 0; v < n; v++) {
			for (auto& e : graph[v]) {
				if (dist[v] + e.second < dist[e.first]) {
					dist[e.first] = dist[v] + e.second;
					prev[e.first] = v;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
		q.push(i);
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		for (auto& e : graph[v]) {
			if (dist[v] + e.second < dist[e.first] && dist[e.first] != -non_edge) {
				dist[e.first] = -non_edge;
				prev[e.first] = v;
				q.push(v);
			}
		}
	}
	return { dist, prev };
}

// Do we need this visited for inf loop test?
// constructs path from previous node vector
vector<int> getPath(const vector<int>& prev, int s, int t) {
	int n = prev.size();
	vector<int> result;
	vector<bool> visited(n);
	while (t != s) {
		if (t == -1 || visited[t])
			return vector<int>();
		result.push_back(t);
		visited[t] = true;
		t = prev[t];
	}
	result.push_back(s);
	reverse(result.begin(), result.end());
	return result;
}
