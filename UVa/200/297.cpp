#include <bits/stdc++.h>
#include "header.h"

int recurse(const string& s, int& i, int area) {
	i++;
	if (s[i] == 'p') {
		int ans = 0;
		rep(j, 0, 4)
			ans += recurse(s, i, area / 4);
		return ans;
	} else if (s[i] == 'f') {
		return area;
	} else {
		return 0;
	}
}

int recurse_both(const string& s1, const string& s2, int& i1, int& i2, int area = 1024) {
	i1++;
	i2++;
	if (s1[i1] == 'f' || s2[i2] == 'f') {
		if (s1[i1] == 'p') {
			i1--;
			recurse(s1, i1, area);
		} else if (s2[i2] == 'p') {
			i2--;
			recurse(s2, i2, area);
		}
		return area;
	} else if (s1[i1] == 'p' && s2[i2] == 'p') {
		int ans = 0;
		rep(j, 0, 4)
			ans += recurse_both(s1, s2, i1, i2, area / 4);
		return ans;
	} else if (s1[i1] == 'p') {
		i1--;
		return recurse(s1, i1, area);
	} else if (s2[i2] == 'p') {
		i2--;
		return recurse(s2, i2, area);
	} else {
		return 0;
	}
}

int main() {
	forX() {
		string s1, s2;
		cin >> s1 >> s2;
		int i1 = -1, i2 = -1;
		print("There are %d black pixels.", recurse_both(s1, s2, i1, i2));
	}
}
