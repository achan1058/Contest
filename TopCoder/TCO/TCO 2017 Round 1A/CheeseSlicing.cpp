#include <bits/stdc++.h>
#include "header.h"

class CheeseSlicing {
public:
	inline int area(int a, int b, int c) {
		if (a < b && a < c)
			return b * c;
		else if (b < c)
			return a * c;
		else
			return a * b;
	}
	int totalArea(int A, int B, int C, int S) {
		vector<vvi> dp = vector<vvi>(A + 1, mi(B + 1, C + 1, 0));
		rep(i, S, A + 1) {
			rep(j, S, B + 1) {
				rep(k, S, C + 1) {
					dp[i][j][k] = area(i, j, k);
					rep(di, S, i + 1 - S)
						dp[i][j][k] = max(dp[i][j][k], dp[di][j][k] + dp[i - di][j][k]);
					rep(dj, S, j + 1 - S)
						dp[i][j][k] = max(dp[i][j][k], dp[i][dj][k] + dp[i][j - dj][k]);
					rep(dk, S, k + 1 - S)
						dp[i][j][k] = max(dp[i][j][k], dp[i][j][dk] + dp[i][j][k - dk]);
				}
			}
		}
		return dp[A][B][C];
	}
};
