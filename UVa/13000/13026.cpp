#include <bits/stdc++.h>
#include "header.h"

int diff(const string& s1, const string& s2) {
	int ans = 0;
	rep(i, 0, sz(s1)) {
		if (s1[i] != s2[i])
			ans++;
	}
	return ans;
}

int main() {
	forX() {
		int n, ans = -1;
		string s;
		cin >> n;
		vs numbers(n);
		read(numbers);
		cin >> s;
		printf("Case %d:\n", X);
		irep(v, numbers) {
			if (diff(v, s) <= 1)
				printf("%s\n", v.c_str());
		}
	}
}
