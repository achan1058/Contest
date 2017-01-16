#include <bits/stdc++.h>
#include "header.h"

class FoldingPaper2 {
public:
	int solve(int W, int H, int A) {
		int ans = inf;
		rep(i, 1, int(sqrt(A)) + 1) {
			if (A % i == 0) {
				int j = A / i;

				if (H >= j && W >= i) {
					int H2 = H, W2 = W, a = 0;
					while (H2 > j) {
						a++;
						H2 = (H2 + 1) / 2;
					}
					while (W2 > i) {
						a++;
						W2 = (W2 + 1) / 2;
					}
					ans = min(ans, a);
				}


				if (H >= i && W >= j) {
					int H2 = H, W2 = W, a = 0;
					while (H2 > i) {
						a++;
						H2 = (H2 + 1) / 2;
					}
					while (W2 > j) {
						a++;
						W2 = (W2 + 1) / 2;
					}
					ans = min(ans, a);
				}
			}
		}

		return (ans == inf ? -1 : ans);
	}
};
