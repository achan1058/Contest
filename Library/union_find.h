#pragma once
#include "header.h"

class UnionFind {
	//if p >= 0, then it points to parent, if < 0, it is number of children
	mutable vi p;
public:
	UnionFind(int n = 0) : p(vi(n, -1)) {}
	int find(int n) const {
		if (n >= sz(p)) p.resize(n + 1, -1);
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
	vvi getComponents() const {
		vvi comps;
		unordered_map<int, int> pos;
		rep(i, 0, sz(p)) {
			int head = find(i);
			auto it = pos.find(head);
			if (it == pos.end()) {
				pos[head] = sz(comps);
				comps.pb(vi(1, i));
			} else {
				comps[it->y].pb(i);
			}
		}
		return comps;
	}
	vi getComponentSizes() const {
		vi sizes;
		irep(v, p) {
			if (v < 0)
				sizes.pb(-v);
		}
		return sizes;
	}
};
