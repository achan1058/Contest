#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		getline(cin, s);
		s.erase(remove_if(all(s), [](int c){ return !isalpha(c); }), s.end());
		int n = sqrt(sz(s));
		printf("Case #%d:\n", X);
		if (n * n != sz(s)) {
			print("No magic :(");
			continue;
		}

		bool good = true;
		vs grid(n);
		rep(i, 0, n)
			grid[i] = s.substr(i * n, n);
		rep(i, 0, n / 2) {
			rep(j, i, n - i) {
				if (grid[i][j] != grid[j][i] || grid[i][j] != grid[n - i - 1][n - j - 1] || grid[i][j] != grid[n - j - 1][n - i - 1]) {
					good = false;
					break;
				}
			}
		}

	end:;
		if (good)
			print("%d", n);
		else
			print("No magic :(");
	}
}
