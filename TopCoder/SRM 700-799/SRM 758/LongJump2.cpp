#include <bits/stdc++.h>
#include "header.h"

class LongJump2 {
public:
	int countNewLeaders(int N, vector<int> jumpLengths) {
		int leader = -1, longest = -1, ans = 0;
		rep(k, 0, 3) {
			rep(i, 0, N) {
				if (jumpLengths[k * N + i] > longest) {
					longest = jumpLengths[k * N + i];
					if (i != leader) {
						leader = i;
						ans++;
					}
				}
			}
		}
		return ans;
	}
};
