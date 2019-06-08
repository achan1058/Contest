#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	rep(i, 0, sz(s1)) {
		if (s2[i] == '1')
			s1[i] = 1 - s1[i] + 2 * '0';
	}
	prints(s1);
}
