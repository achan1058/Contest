#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int a, b;
		map<pair<int, int>, int> m1, m2;
		rep(i, 0, n) {
			cin >> a >> b;
			if (a < b)
				m1[{a, b}]++;
			else
				m2[{b, a}]++;
		}

		printf("%s\n", m1 == m2 ? "YES" : "NO");
	}
}
