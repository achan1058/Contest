#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	rep(i, 0, sz(s1))
		s1[i] = (s1[i] + s2[i] - 2 * '0') % 2 + '0';
	printf("%s\n", s1.c_str());
}
