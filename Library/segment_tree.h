#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T>
class SegmentTree {
	int n;
	bool issum;
	vector<T> tree;
public:
	SegmentTree(int t, bool sum = false, T def = inf) : issum(sum) {
		n = 1;
		while (n < t)
			n <<= 1;
		tree = vector<T>(2 * n, issum ? 0 : def);
	}
	SegmentTree(const vector<T>& values, bool sum = false, T def = inf) : SegmentTree(values.size(), sum, def) {
		for (int i = 0; i < int(values.size()); i++)
			tree[n + i] = values[i];
		for (int i = n - 1; i > 0; i--)
			tree[i] = issum ? tree[2 * i] + tree[2 * i + 1] : min(tree[2 * i], tree[2 * i + 1]);
	}
	// Target query is [L, R]
	T inline query(int L, int R) {
		T ans = issum ? 0 : tree[L + n];
		for (L += n, R += n + 1; L < R; L >>= 1, R >>= 1) {
			if (L & 1) {
				ans = issum ? ans + tree[L] : min(ans, tree[L]);
				L++;
			}
			if (R & 1) {
				R--;
				ans = issum ? ans + tree[R] : min(ans, tree[R]);
			}
		}
		return ans;
	}
	void inline update(int p, T v) {
		p += n;
		tree[p] = v;
		while(p > 1) {
			p /= 2;
			tree[p] = issum ? tree[2 * p] + tree[2 * p + 1] : min(tree[2 * p], tree[2 * p + 1]);
		}
	}
};
