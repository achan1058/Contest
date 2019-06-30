#pragma once
#include <bits/stdc++.h>
using namespace std;

// uses adjacency list, return bipartition with minimum cardinality LHS.
pair<vector<int>, vector<int>> bipartite(const vector<vector<int>>& graph) {
	int n = graph.size();
	vector<int> color(n, -1);
	vector<vector<int>> ans(2);
	for (int i = 0; i < n; i++) {
		if (color[i] != -1)
			continue;
		vector<vector<int>> parts(2);
		queue<int> q;
		color[i] = 0;
		parts[0].push_back(i);
		q.push(i);
		while (!q.empty()) {
			int v = q.front();
			q.pop();
			for (auto e : graph[v]) {
				if (color[e] == color[v])
					return { vector<int>(), vector<int>() };
				else if (color[e] == -1) {
					color[e] = 1 - color[v];
					parts[1 - color[v]].push_back(e);
					q.push(e);
				}
			}
		}
		if (parts[0].size() > parts[1].size())
			swap(parts[0], parts[1]);
		for (int t = 0; t < 2; t++)
			ans[t].insert(ans[t].end(), parts[t].begin(), parts[t].end());
	}
	return { ans[0], ans[1] };
}

void twoConnectedHelper(const vector<vector<int>>& graph, int n, int u, int& count, vector<int>& num, vector<int>& low, stack<int>& stk, vector<vector<int>>& blocks) {
	num[u] = low[u] = count++;
	stk.push(u);
	for (auto v : graph[u]) {
		if (num[v] == 0) {
			twoConnectedHelper(graph, n, v, count, num, low, stk, blocks);
			low[u] = min(low[u], low[v]);
			if (low[v] >= num[u]) {
				blocks.push_back({ u, v });
				while (stk.top() != v) {
					blocks.back().push_back(stk.top());
					stk.pop();
				}
				stk.pop();
			}
		} else {
			low[u] = min(low[u], num[v]);
		}
	}
}
// uses adjacency list, return bridges and two connected blocks
vector<vector<int>> twoConnected(const vector<vector<int>>& graph) {
	int n = graph.size(), count = 1;
	vector<vector<int>> blocks;
	vector<int> num(n, 0), low(n);
	stack<int> stk;
	for (int i = 0; i < n; i++) {
		if (num[i] == 0)
			twoConnectedHelper(graph, n, i, count, num, low, stk, blocks);
	}
	return blocks;
}

// uses adjacency list
vector<int> getArticulationPoints(const vector<vector<int>>& graph) {
	int n = graph.size();
	vector<vector<int>> blocks = twoConnected(graph);
	vector<int> count(n), pts;
	for (auto& b : blocks) {
		for (auto v : b)
			count[v]++;
	}
	for (int i = 0; i < n; i++) {
		if (count[i] > 1)
			pts.push_back(i);
	}
	return pts;
}

void stronglyConnectedHelper(const vector<vector<int>>& graph, int n, int u, int& count, int& numc, vector<int>& num, vector<int>& low, stack<int>& stk, vector<int>& comps) {
	num[u] = low[u] = count++;
	stk.push(u);
	comps[u] = -1;
	for(auto v: graph[u]) {
		if (num[v] == 0)
			stronglyConnectedHelper(graph, n, v, count, numc, num, low, stk, comps);
		if (comps[v] == -1)
			low[u] = min(low[u], low[v]);
	}
	if (low[u] == num[u]) {
		comps[u] = numc;
		while (stk.top() != u) {
			comps[stk.top()] = numc;
			stk.pop();
		}
		stk.pop();
		numc++;
	}
}
// uses adjacency list, returns number of components and component vector
pair<int, vector<int>> stronglyConnected(const vector<vector<int>>& graph) {
	int n = graph.size(), count = 1, numc = 0;
	vector<int> num(n), low(n), comps(n);
	stack<int> stk;
	for (int i = 0; i < n; i++) {
		if (num[i] == 0)
			stronglyConnectedHelper(graph, n, i, count, numc, num, low, stk, comps);
	}
	return{ numc, comps };
}

// uses adjacency list
vector<vector<int>> stronglyConnectedBlocks(const vector<vector<int>>& graph) {
	pair<int, vector<int>> comps = stronglyConnected(graph);
	vector<vector<int>> blocks(comps.first);
	for (int i = 0; i < int(comps.second.size()); i++)
		blocks[comps.second[i]].push_back(i);
	return blocks;
}
