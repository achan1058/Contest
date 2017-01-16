#include <bits/stdc++.h>
#include "header.h"

class Quorum {
public:
	int count(vector<int> arr, int k) {
		int ans = 0;
		sort(all(arr));
		rep(i, 0, k)
			ans += arr[i];
		return ans;
	}
};
