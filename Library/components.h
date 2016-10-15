#pragma once
#include "header.h"

void twoConnectedHelper(const vvi& graph, int n, int u, int& count, vi& num, vi& low, stack<int>& stk, vvi& blocks) {
	num[u] = low[u] = count++;
	stk.push(u);

	fori(v, graph[u]) {
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
// uses adjacency list, return bridges and strongly connected blocks
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

// uses adjacency list
vi getArticulationPoints(const vvi& graph) {
	vvi blocks = twoConnected(graph);
	vi count(sz(graph)), pt;
	fori(b, blocks) {
		fori(v, b)
			count[v]++;
	}
	rep(i, 0, sz(graph)) {
		if (count[i] > 1)
			pt.pb(i);
	}
	return pt;
}

void stronglyConnectedHelper(const vvi& graph, int n, int u, int& count, int& numc, vi& num, vi& low, stack<int>& stk, vi& comps) {
	num[u] = low[u] = count++;
	stk.push(u);
	comps[u] = -1;

	fori(v, graph[u]) {
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
pair<int, vi> stronglyConnected(const vvi& graph) {
	int n = sz(graph), count = 1, numc = 0;
	vi num(n, 0), low(n), comps(n, 0);
	stack<int> stk;
	rep(i, 0, n) {
		if (num[i] == 0)
			stronglyConnectedHelper(graph, n, i, count, numc, num, low, stk, comps);
	}
	return{ numc, comps };
}

// uses adjacency list
vvi stronglyConnectedBlocks(const vvi& graph) {
	pair<int, vi> comps = stronglyConnected(graph);
	vvi blocks(comps.x);
	rep(i, 0, sz(comps.y))
		blocks[comps.y[i]].pb(i);
	return blocks;
}
