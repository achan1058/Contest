#pragma once
#include "graph.h"

// constructs path from previous node vector
vector<int> getPath(const vector<int>& prev, int s, int t) {
	int n = prev.size();
	vector<int> result;
	vector<bool> visited(n);

	while (t != s) {
		if (t == -1 || visited[t])
			return vector<int>();

		result.push_back(t);
		visited[t] = true;
		t = prev[t];
	}

	result.push_back(s);
	reverse(result.begin(), result.end());
	return result;
}
