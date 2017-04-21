#pragma once
#include <bits/stdc++.h>
using namespace std;

template<class T>
int inversionCount(vector<T>& v, int l, int r) {
	if (r - l <= 1)
		return 0;
	int m = (l + r) / 2, i1 = l, i2 = m;
	int ans = inversionCount(v, l, m) + inversionCount(v, m, r);
	vector<T> v2;
	while (i1 < m && i2 < r) {
		if (v[i1] <= v[i2]) {
			v2.push_back(v[i1++]);
		} else {
			v2.push_back(v[i2++]);
			ans += m - i1;
		}
	}
	while (i1 < m)
		v2.push_back(v[i1++]);
	while (i2 < r)
		v2.push_back(v[i2++]);
	copy(v2.begin(), v2.end(), v.begin() + l);
	return ans;
}
