#include <bits/stdc++.h>
#include "matching.h"

int main() {
	int T, n, m;
	vs sizes = { "XXL", "XL", "L", "M", "S", "XS" };
	string s;
	cin >> T;
	for (int X = 0; X < T; X++) {
		cin >> n >> m;
		vvb graph = mb(m, n, false);
		for (int i = 0; i < m; i++) {
			for (int j = 0; j < 2; j++) {
				cin >> s;
				for (int k = 0; k < 6; k++) {
					if (s == sizes[k]) {
						for (int l = k * (n / 6); l < (k + 1) * n / 6; l++)
							graph[i][l] = true;
					}
				}
			}
		}
		printf("%s\n", sz(matching(graph)) == m ? "YES" : "NO");
	}
}
