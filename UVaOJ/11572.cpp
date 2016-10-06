#include <bits/stdc++.h>
#include "header.h"

int main() {
	int T, n, v;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> n;
		unordered_map<int, int> occur;
		int last = 0, best = 0;
		for (int i = 0; i < n; i++) {
			cin >> v;
			if (occur.find(v) != occur.end())
				last = max(last, occur[v] + 1);

			occur[v] = i;
			best = max(best, i - last + 1);
		}
		printf("%d\n", best);
	}
}
