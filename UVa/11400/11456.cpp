#include <bits/stdc++.h>
#include "header.h"

template<class T>
T lis(const T& s) {
	vector<int> ind = { 0 };
	vector<int> prev(s.size(), -1);
	for (int i = 1; i < int(s.size()); i++) {
		int pos = lower_bound(ind.begin(), ind.end(), i, [&](int i1, int i2) {return s[i1] < s[i2]; }) - ind.begin();
		if (pos == ind.size()) {
			prev[i] = ind.back();
			ind.push_back(i);
		} else {
			ind[pos] = i;
			if (pos > 0)
				prev[i] = ind[pos - 1];
		}
	}
	vector<int> result(s.size(), 1);
	for (int i = 1; i < int(s.size()); i++) {
		if (prev[i] != -1)
			result[i] = result[prev[i]] + 1;
	}
	return result;
}

int main() {
	forX() {
		int n;
		cin >> n;
		vi nums(n), nums2(n);
		read(nums);
		reverse(all(nums));
		rep(i, 0, n)
			nums2[i] = -nums[i];

		vi res = lis(nums), res2 = lis(nums2);
		int ans = 0;
		rep(i, 0, n)
			ans = max(ans, res[i] + res2[i] - 1);
		print(ans);
	}
}
