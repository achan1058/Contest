#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int T, n, p, q, v;
	cin >> T;
	for (int X = 1; X <= T; X++) {
		cin >> n >> p >> q;
		map<int, int> m;
		vector<int> seq;
		for (int i = 0; i < p + 1; i++) {
			cin >> v;
			m[v] = i + 1;
		}
		for (int i = 0; i < q + 1; i++) {
			cin >> v;
			if (m[v] != 0)
				seq.push_back(m[v]);
		}
		printf("Case %d: %d\n", X, lis(seq).size());
	}
}
