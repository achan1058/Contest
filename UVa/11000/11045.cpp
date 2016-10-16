#include <bits/stdc++.h>
#include "matching.h"

int main() {
	int n, m;
	vs sizes = { "XXL", "XL", "L", "M", "S", "XS" };
	string s;
	forX() {
		cin >> n >> m;
		vvb graph = mb(m, n, false);
		drep(i, j, m, 2) {
			cin >> s;
			for (int k = 0; k < 6; k++) {
				if (s == sizes[k]) {
					for (int l = k * (n / 6); l < (k + 1) * n / 6; l++)
						graph[i][l] = true;
				}
			}
		}
		printf("%s\n", sz(matching(graph)) == m ? "YES" : "NO");
	}
}
