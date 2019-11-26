#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	while (cin >> n >> m) {
		string s, t;
		cin >> s;
		vvb graph = mb(26, 26, false);
		vb wake(26);
		rep(i, 0, m) {
			cin >> t;
			int v1 = t[0] - 'A', v2 = t[1] - 'A';
			graph[v1][v2] = graph[v2][v1] = true;
		}
		rep(i, 0, 3)
			wake[s[i] - 'A'] = true;

		n -= 3;
		bool found = false;
		int years = -1;
		do {
			vb wake2 = wake;
			found = false;

			rep(i, 0, 26) {
				if (wake[i])
					continue;

				int num_wake = 0;
				rep(j, 0, 26) {
					if (wake[j] && graph[i][j])
						num_wake++;
				}
				if (num_wake >= 3) {
					wake2[i] = true;
					found = true;
					n--;
				}
			}
			years++;
			wake = wake2;
		} while (found);
		if (n == 0)
			print("WAKE UP IN, %d, YEARS", years);
		else
			print("THIS BRAIN NEVER WAKES UP");
	}
}
