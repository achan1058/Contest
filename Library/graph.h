#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T>
class AdjList {
	vector<vector<pair<int, T>>> edges;
public:
	AdjList<T>(int n = 0) : edges(vector<vector<pair<int, T>>>(n)) {}
	inline int size() const { return edges.size(); }
	inline const vector<pair<int, T>>& operator[] (int row) const { return edges[row]; }
	inline vector<pair<int, T>>& operator[] (int row) { return edges[row]; }
	inline void push(int s, int t, T weight = 1, bool both_dir = false) {
		edges.resize(max(int(edges.size()), max(s, t) + 1));
		edges[s].push_back({ t, weight });
		if (both_dir) edges[t].push_back({ s, weight });
	}
};
/*

template<class T>
class EdgeList {
vector<tuple<int, int, T>> edges;
int n;
public:
EdgeList(int n_ = 0) : n(n_) {}
inline const tuple<int, int, T>& operator[] (int ind) const { return edges[ind]; }
inline tuple<int, int, T>& operator[] (int ind) { return edges[ind]; }
inline int numE() const { return sz(edges); }
inline int numV() const { return n; }
inline void push(int s, int t, T v = 1) { n = max(n, max(s, t) + 1); edges.pb({s, t, v}); }
template<class U> friend tuple<U, int, EdgeList<U>> kruskal(EdgeList<U>& edges);
};

*/