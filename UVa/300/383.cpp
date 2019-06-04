#include <bits/stdc++.h>
#include "shortest_path.h"
#include "header.h"

int main() {
	int v, e, q, val;
	string s1, s2;
	print("SHIPPING ROUTES OUTPUT");
	forX() {
		cin >> v >> e >> q;
		vvi grid = mi(v, v, inf);
		map<string, int> m;
		rep(i, 0, v) {
			cin >> s1;
			m[s1] = i;
		}

		rep(i, 0, e) {
			cin >> s1 >> s2;
			grid[m[s1]][m[s2]] = grid[m[s2]][m[s1]] = 1;
		}
		grid = floyd(grid).first;

		print("\nDATA SET  %d\n", X);
		rep(i, 0, q) {
			cin >> val >> s1 >> s2;
			if (grid[m[s1]][m[s2]] == inf)
				print("NO SHIPMENT POSSIBLE");
			else
				print("$%d", 100 * val * grid[m[s1]][m[s2]]);
		}
	}
	print("\nEND OF OUTPUT");
}
