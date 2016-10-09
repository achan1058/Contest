#pragma once
#include "graph.h"

// elements are given in lex order
vi topoSort(const vvi& graph) {
	int n = sz(graph);
	vi in_degree(n), result;
	priority_queue<int, vi, greater<int>> q;

	rep(i, 0, n) {
		irep(edge, graph[i])
			in_degree[edge]++;
	}

	rep(i, 0, n) {
		if (in_degree[i] == 0)
			q.push(i);
	}

	while (!q.empty()) {
		int vtx = q.top();
		q.pop();
		result.pb(vtx);

		irep(edge, graph[vtx]) {
			in_degree[edge]--;
			if (in_degree[edge] == 0)
				q.push(edge);
		}
	}

	if (sz(result) < n)
		return vi();
	else
		return result;
}

// Path is smallest in reverse lex order.
vi longestDAG(const vvi& graph, int s = -1, int t = -1) {
	int n = sz(graph), mv = 0;
	vi topo = topoSort(graph), prev(n, -1), len(n, -1);

	irep(v, topo) {
		if (s == v)
			len[v] = 0;
		else if (s == -1)
			len[v] = max(len[v], 0);
		if (v == t) {
			mv = t;
			break;
		}
		if (len[v] == -1)
			continue;
		if (t == -1 && (len[v] > len[mv] || len[v] == len[mv] && v < mv))
			mv = v;
		irep(edge, graph[v]) {
			if (len[edge] <= len[v] || len[edge] == len[v] + 1 && v < prev[edge]) {
				len[edge] = len[v] + 1;
				prev[edge] = v;
			}
		}
	}

	if (len[mv] == -1)
		return vi();
	vi result;
	while (mv != -1) {
		result.pb(mv);
		mv = prev[mv];
	}

	reverse(all(result));
	return result;
}

// Path is smallest in reverse lex order.
template<class T>
pair<T, vi> longestDAG(const AdjList<T>& graph, int s = -1, int t = -1, T infinity = inf) {
	int n = sz(graph), mv = 0;
	vvi g(n);
	rep(i, 0, n) {
		irep(v, graph[i])
			g[i].pb(v.x);
	}

	vi topo = topoSort(g), prev(n, -1);
	vector<T> len(n, -infinity);

	irep(v, topo) {
		if (s == v)
			len[v] = 0;
		else if (s == -1)
			len[v] = max(len[v], 0);
		if (v == t) {
			mv = t;
			break;
		}
		if (len[v] == -infinity)
			continue;
		if (t == -1 && (len[v] > len[mv] || len[v] == len[mv] && v < mv))
			mv = v;
		irep(edge, graph[v]) {
			if (len[edge.x] < len[v] + edge.y || len[edge.x] == len[v] + edge.y && v < prev[edge.x]) {
				len[edge.x] = len[v] + edge.y;
				prev[edge.x] = v;
			}
		}
	}

	T mx = len[mv];
	if (mx == -infinity)
		return make_pair(-infinity, vi());
	vi result;
	while (mv != -1) {
		result.pb(mv);
		mv = prev[mv];
	}

	reverse(all(result));
	return make_pair(mx, result);
}
