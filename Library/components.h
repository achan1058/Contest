#pragma once
#include <bits/stdc++.h>
using namespace std;

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
