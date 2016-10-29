#pragma once
#include "header.h"

template<class T>
class SegmentTree {
	int n;
	bool issum;
	vector<T> tree;

	// Target query is [L, R), against a range of [lrange, rrange)
	T query(int L, int R, int p, int lrange, int rrange) {
		if (L <= lrange && R >= rrange)
			return tree[p];
		int mrange = (lrange + rrange) / 2;
		if (L >= mrange) return query(L, R, 2 * p + 1, mrange, rrange);
		else if (R <= mrange) return query(L, R, 2 * p, lrange, mrange);
		else if (issum) return query(L, R, 2 * p, lrange, mrange) + query(L, R, 2 * p + 1, mrange, rrange);
		else return min(query(L, R, 2 * p, lrange, mrange), query(L, R, 2 * p + 1, mrange, rrange));
	}

public:
	SegmentTree(int t, bool sum = false, T def = inf) : issum(sum) {
		n = 1;
		while (n < t)
			n <<= 1;
		tree = vi(2 * n, def == inf ? (issum ? T(0) : inf) : def);
	}

	SegmentTree(const vi& values, bool sum = false, T def = inf) : issum(sum) {
		n = 1;
		while (n < sz(values))
			n <<= 1;
		tree = vi(2 * n, def == inf ? (issum ? T(0) : inf) : def);
		rep(i, 0, sz(values))
			tree[n + i] = values[i];
		rrep(i, n - 1, 1)
			tree[i] = (issum ? (tree[2 * i] + tree[2 * i + 1]) : min(tree[2 * i], tree[2 * i + 1]));
	}

	// Target query is [L, R], against a range of [lrange, rrange]
	T inline query(int L, int R) {
		return query(L, R + 1, 1, 0, n);
	}

	void inline update(int p, T v) {
		p += n;
		tree[p] = v;
		while(p > 1) {
			p /= 2;
			tree[p] = (issum ? (tree[2 * p] + tree[2 * p + 1]) : min(tree[2 * p], tree[2 * p + 1]));
		}
	}
};
