#include <bits/stdc++.h>
#include "header.h"

pii backtrack(const vi& in, const vi& pos, int s1, int t1, int s2, int t2) {
	assert(t1 - s1 == t2 - s2);
	if (s1 == t1)
		return { in[s1], in[t1] };
	if (s1 > t1)
		return { inf, inf };
	rrep(j, t1, s1) {
		if (pos[t2] == in[j]) {
			pii p1 = backtrack(in, pos, s1, j - 1, s2, j - 1 + s2 - s1);
			pii p2 = backtrack(in, pos, j + 1, t1, j + s2 - s1, t2 - 1);
			pii ans = min(p1, p2);
			ans.first += in[j];
			return ans;
		}
	}
	return { inf, inf };
}

int main() {
	string s;
	int t;
	while (getline(cin, s)) {
		vi nums1, nums2;
		{
			stringstream ss(s);
			while (ss >> t)
				nums1.pb(t);
		}
		{
			getline(cin, s);
			stringstream ss(s);
			while (ss >> t)
				nums2.pb(t);
		}
		auto ans = backtrack(nums1, nums2, 0, sz(nums1) - 1, 0, sz(nums2) - 1);
		print(ans.second);
	}
}
