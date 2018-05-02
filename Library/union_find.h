#pragma once
#include <bits/stdc++.h>
using namespace std;

class UnionFind {
	// if p >= 0, then it points to parent, if < 0, it is number of children
	mutable vector<int> p;
public:
	UnionFind(int n = 0) : p(vector<int>(n, -1)) {}
	int find(int n) const {
		if (n >= int(p.size())) p.resize(n + 1, -1);
		if (p[n] < 0) return n;
		p[n] = find(p[n]);
		return p[n];
	}
	int getSize(int n) const { return -p[find(n)]; }
	bool join(int m, int n) {
		m = find(m);
		n = find(n);
		if (m == n) return false;
		if (p[m] > p[n]) {
			p[n] += p[m];
			p[m] = n;
		} else {
			p[m] += p[n];
			p[n] = m;
		}
		return true;
	}
	vector<vector<int>> getComponents() const {
		vector<vector<int>> comps;
		unordered_map<int, int> pos;
		for (int i = 0; i < int(p.size()); i++) {
			int head = find(i);
			auto it = pos.find(head);
			if (it == pos.end()) {
				pos[head] = comps.size();
				comps.push_back(vector<int>(1, i));
			} else {
				comps[it->second].push_back(i);
			}
		}
		return comps;
	}
};
