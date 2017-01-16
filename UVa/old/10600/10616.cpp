#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, q, d, m;
	whileX(cin >> n >> q && (n | q) != 0) {
		int Y = 1;
		printf("SET %d:\n", X);
		vector<int> nums(n);
		read(nums);
		for (int x = 0; x < q; x++) {
			cin >> d >> m;
			vvl dp = ml(m + 1, d, 0);
			dp[0][0] = 1;

			for (int k : nums) {
				k = (k % d + d) % d;
				for (int i = m - 1; i >= 0; i--) {
					for (int j = 0; j < d; j++)
						dp[i + 1][(k + j) % d] += dp[i][j];
				}
			}
			printf("QUERY %d: %lld\n", Y, dp[m][0]);
			Y++;
		}
	}
}
