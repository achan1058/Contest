#pragma once
#include "graph.h"

// uses adjacency matrix, returns dist matrix and previous node matrix
template<class T>
pair<vector<vector<T>>, vvi> floydWarshall(const vector<vector<T>>& graph, T non_edge = inf, bool minweight = false) {
	int n = sz(graph);
	vector<vector<T>> mat = graph;
	vvi prev = mi(n, n, -1);
	rep(i, 0, n)
		rep(j, 0, n)
		if (mat[i][j] != non_edge)
			prev[i][j] = i;
	rep(k, 0, n)
		rep(i, 0, n)
		rep(j, 0, n)
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
	return make_pair(mat, prev);
}

// uses adjacency list, returns dist list and previous node vector
template<class T>
pair<vector<T>, vi> dijkstra(const AdjList<T>& graph, int start, T non_edge = inf) {
	int n = sz(graph);
	vector<T> dist(n, non_edge);
	vi prev(n, -1);
	priority_queue<pair<T, int>, vector<pair<T, int>>, greater<pair<T, int>>> q;
	q.push({ 0, start });

	while (!q.empty()) {
		T d = q.top().x;
		int v1 = q.top().y;
		q.pop();

		if (dist[v1] < d)
			continue;
		irep(e, graph[v1]) {
			if (d + e.y < dist[e.x]) {
				dist[e.x] = d + e.y;
				prev[e.x] = v1;
				q.push(make_pair(dist[e.x], e.x));
			}
		}
	}

	return make_pair(dist, prev);
}

// uses adjacency list, returns dist list and previous node vector
template<class T>
pair<vector<T>, vi> bellmanFord(const AdjList<T>& graph, int start, T non_edge = inf) {
	int n = sz(graph);
	vector<T> dist(n, non_edge);
	vi prev(n, -1);
	queue<int> q;
	dist[start] = 0;

	rep(i, 0, n)
		q.push(i);
	rep(i, 1, n) {
		rep(v, 0, n) {
			irep(e, graph[v]) {
				if (dist[v] + e.y < dist[e.x]) {
					dist[e.x] = dist[v] + e.y;
					prev[e.x] = v;
				}
			}
		}
	}
	while (!q.empty()) {
		int v = q.front();
		q.pop();
		irep(e, graph[v]) {
			if (dist[v] + e.y < dist[e.x] && dist[e.x] != -non_edge) {
				dist[e.x] = -non_edge;
				prev[e.x] = v;
				q.push(v);
			}
		}
	}

	return make_pair(dist, prev);
}

// constructs path from previous node vector
vi getPath(const vi& prev, int s, int t) {
	int n = sz(prev);
	vi result;
	vb visited(n);

	while (t != s) {
		if (t == -1 || visited[t])
			return vi();

		result.pb(t);
		visited[t] = true;
		t = prev[t];
	}

	result.pb(s);
	reverse(all(result));
	return result;
}
