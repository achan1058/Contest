#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N, t;
	cin >> N;
	rep(X, 0, N) {
		cin >> t;
		vi item(t);
		int total = 0;
		fori(v, item)
			cin >> v;
		sort(all(item));
		for (int i = sz(item) - 3; i >= 0; i -= 3)
			total += item[i];
		printf("%d\n", total);
	}
}
