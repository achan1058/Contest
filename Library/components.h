#pragma once
#include "header.h"

void twoConnectedHelper(const vvi& graph, int n, int u, int& count, vi& num, vi& low, stack<int>& stk, vvi& blocks) {
	num[u] = low[u] = count++;
	stk.push(u);

	irep(v, graph[u]) {
		if (num[v] == 0) {
			twoConnectedHelper(graph, n, v, count, num, low, stk, blocks);
			low[u] = min(low[u], low[v]);
			if (low[v] >= num[u]) {
				blocks.pb({ u, v });
				while (stk.top() != v) {
					blocks.back().pb(stk.top());
					stk.pop();
				}
				stk.pop();
			}
		} else {
			low[u] = min(low[u], num[v]);
		}
	}
}
// return bridges and strongly connected blocks
vvi twoConnected(const vvi& graph) {
	int n = sz(graph), count = 1;
	vvi blocks;
	vi num(n, 0), low(n);
	stack<int> stk;
	rep(i, 0, n) {
		if (num[i] == 0)
			twoConnectedHelper(graph, n, i, count, num, low, stk, blocks);
	}
	return blocks;
}

vi getArticulationPoints(const vvi& graph) {
	vvi blocks = twoConnected(graph);
	vi count(sz(graph)), pt;
	irep(b, blocks) {
		irep(v, b)
			count[v]++;
	}
	rep(i, 0, sz(graph)) {
		if (count[i] > 1)
			pt.pb(i);
	}
	return pt;
}
