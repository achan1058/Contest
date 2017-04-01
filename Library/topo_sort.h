#pragma once
#include <bits/stdc++.h>
using namespace std;

// uses adjacency list, elements are given in lex order
inline int topoHelper(const int t) { return t; }
template<class T> inline int topoHelper(const pair<int, T>& p) { return p.x; }
template<class T>
vi topoSort(const vector<vector<T>>& graph) {
	int n = sz(graph);
	vi in_degree(n), result;
	priority_queue<int, vi, greater<int>> q;

	rep(i, 0, n) {
		irep(edge, graph[i])
			in_degree[topoHelper(edge)]++;
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
			in_degree[topoHelper(edge)]--;
			if (in_degree[topoHelper(edge)] == 0)
				q.push(topoHelper(edge));
		}
	}

	if (sz(result) < n)
		return vi();
	else
		return result;
}

// uses adjacency list, path is smallest in reverse lex order
inline int DAGHelper(const int t) { return 1; }
template<class T> inline T DAGHelper(const pair<int, T>& p) { return p.y; }
template<class T, class U>
pair<U, vi> longestDAGHelper(const vector<vector<T>>& graph, int s = -1, int t = -1, U infinity = inf) {
	int n = sz(graph), mv = 0;
	vi topo = topoSort(graph), prev(n, -1);
	vector<U> len(n, -infinity);

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
			if (len[topoHelper(edge)] < len[v] + DAGHelper(edge) || len[topoHelper(edge)] == len[v] + DAGHelper(edge) && v < prev[topoHelper(edge)]) {
				len[topoHelper(edge)] = len[v] + DAGHelper(edge);
				prev[topoHelper(edge)] = v;
			}
		}
	}

	U mx = len[mv];
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
inline vi longestDAG(const vector<vector<int>>& graph, int s = -1, int t = -1, int infinity = inf) { return longestDAGHelper(graph, s, t, infinity).y; }
template<class T> inline pair<T, vi> longestDAG(const vector<vector<pair<int, T>>>& graph, int s = -1, int t = -1, T infinity = inf) { return longestDAGHelper(graph, s, t, infinity); }
