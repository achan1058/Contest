#pragma once
#include "graph_util.h"

// uses adjacency list, elements are given in lex order
vector<int> topoSort(const vector<vector<int>>& graph) {
	int n = graph.size();
	vector<int> in(n), result;
	priority_queue<int, vector<int>, greater<int>> q;
	for (int i = 0; i < n; i++) {
		for (auto& v : graph[i])
			in[v]++;
	}
	for (int i = 0; i < n; i++) {
		if (in[i] == 0)
			q.push(i);
	}
	while (!q.empty()) {
		int v = q.top();
		q.pop();
		result.push_back(v);
		for (auto u : graph[v]) {
			in[u]--;
			if (in[u] == 0)
				q.push(u);
		}
	}
	if (int(result.size()) < n)
		return vector<int>();
	else
		return result;
}

// uses adjacency list, path is smallest in reverse lex order
template<class T>
pair<T, vector<int>> longestDAG(const adj_list<T>& graph, int s = -1, int t = -1, T non_edge = inf) {
	int n = graph.size(), mv = 0;
	vector<vector<int>> g(n);
	for (int i = 0; i < n; i++) {
		for (auto& v : graph[i])
			g[i].push_back(v.first);
	}

	vector<int> topo = topoSort(g), prev(n, -1);
	vector<T> len(n, -non_edge);
	for (auto& v : topo) {
		if (s == v)
			len[v] = 0;
		else if (s == -1)
			len[v] = max(len[v], 0);
		if (v == t) {
			mv = t;
			break;
		}
		if (len[v] == -non_edge)
			continue;
		if (t == -1 && (len[v] > len[mv] || len[v] == len[mv] && v < mv))
			mv = v;
		for (auto& edge : graph[v]) {
			if (len[edge.first] < len[v] + edge.second || len[edge.first] == len[v] + edge.second && v < prev[edge.first]) {
				len[edge.first] = len[v] + edge.second;
				prev[edge.first] = v;
			}
		}
	}

	vector<int> result;
	T mx = len[mv];
	if (mx != -non_edge) {
		while (mv != -1) {
			result.push_back(mv);
			mv = prev[mv];
		}
	}
	reverse(result.begin(), result.end());
	return { mx, result };
}
