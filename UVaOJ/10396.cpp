#include <bits/stdc++.h>
#include "header.h"

set<int> createVamp(int m, int M, int mn, int n) {
	vi d1(n), d2(n);
	set<int> result;
	for (int i = m; i < M; i++) {
		for (int j = max(i, mn / i + 1); j < M; j++) {
			if (i * j % 2 == 1 || (i % 10 == 0 && j % 10 == 0))
				continue;

			string s1 = to_string(i * j), s2 = to_string(M * i + j);
			sort(all(s1));
			sort(all(s2));
			if (s1 == s2)
				result.insert(i * j);
		}
	}
	return result;
}

int main() {
	int n;
	vector<set<int>> vamp(3);
	vamp[0] = createVamp(10, 100, 1000, 4);
	vamp[1] = createVamp(100, 1000, 100000, 6);
	vamp[2] = createVamp(1000, 10000, 10000000, 8);
	while (cin >> n) {
		n -= 4;
		n /= 2;
		irep(v, vamp[n])
			printf("%d\n", v);
		printf("\n");
	}
}
