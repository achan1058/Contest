#pragma once
#include <bits/stdc++.h>
using namespace std;

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
