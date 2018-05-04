#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T> using adj_list = vector<vector<pair<int, T>>>;
template<class T> using edge_list = vector<tuple<int, int, T>>;

template<class T>
vector<vector<T>> toMatrix(const edge_list<T>& edges, T non_edge = 0x3f3f3f3f) {
	int n = 0;
	for (auto& e : edges)
		n = max(n, max(get<0>(e), get<1>(e)) + 1);

	vector<vector<T>> graph(n, vector<T>(n, non_edge));
	for (auto& e : edges)
		graph[get<0>(e)][get<1>(e)] = get<2>(e);
	return graph;
}
