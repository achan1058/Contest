#pragma once
#include <bits/stdc++.h>
using namespace std;

// returns dist matrix and previous node matrix
template<class T>
pair<vector<vector<T>>, vector<vector<int>>> floyd(const vector<vector<T>>& graph, bool minweight = false, T non_edge = inf) {
	int n = graph.size();
	vector<vector<T>> mat = graph;
	vector<vector<int>> prev = vector<vector<int>>(n, vector<int>(n, -1));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (mat[i][j] != non_edge)
				prev[i][j] = i;
		}
	}
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (minweight) {
					if (max(mat[i][k], mat[k][j]) < mat[i][j]) {
						mat[i][j] = max(mat[i][k], mat[k][j]);
						prev[i][j] = prev[k][j];
					}
				} else {
					if (mat[i][k] + mat[k][j] < mat[i][j]) {
						mat[i][j] = mat[i][k] + mat[k][j];
						prev[i][j] = prev[k][j];
					}
				}
			}
		}
	}
	return make_pair(mat, prev);
}
