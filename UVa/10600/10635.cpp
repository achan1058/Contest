#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	int n, p, q, v;
	forX() {
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
		printc("%d\n", lis(seq).size());
	}
}
