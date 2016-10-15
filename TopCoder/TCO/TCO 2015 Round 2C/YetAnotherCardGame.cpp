#include <bits/stdc++.h>
#include "header.h"

class YetAnotherCardGame {
public:
	int maxCards(vector<int> petr, vector<int> snuke) {
		int n = sz(petr);
		vector<pii> nums;

		rep(i, 0, n) {
			nums.pb({ petr[i], 0 });
			nums.pb({ snuke[i], 1 });
		}

		sort(all(nums));

		vvi grid = mi(2 * n + 1, 101, 0);
		int longest = 1;

		fori(v, nums) {
			rep(i, 0, 2 * n + 1) {
				rep(k, 0, v.x) {
					if (v.y != i % 2) {
						if (i >= 2)
							grid[i][v.x] = max(grid[i][v.x], grid[i - 2][k] + 1);
						if (i >= 1)
							grid[i][v.x] = max(grid[i][v.x], grid[i - 1][k] + 1);
					}
				}
				longest = max(longest, grid[i][v.x]);
			}
		}
		return longest;
	}
};
