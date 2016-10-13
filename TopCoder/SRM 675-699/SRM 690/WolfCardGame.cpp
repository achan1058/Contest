#include <bits/stdc++.h>
#include "header.h"

class WolfCardGame {
public:
	vector<int> createAnswer(int N, int K) {
		vi ans;
		if (N % 4 != 0) {
			rep(i, 0, K)
				ans.pb((i + 1) * 4);
		} else if (N % 5 != 0) {
			rep(i, 0, K)
				ans.pb((i + 1) * 5);
		} else if (N % 6 != 0) {
			rep(i, 0, K)
				ans.pb((i + 1) * 6);
		} else {
			ans.pb(1);
			rep(i, 1, K)
				ans.pb(i * 7);
		}
		return ans;
	}
};
