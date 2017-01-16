#include <bits/stdc++.h>
#include "header.h"

bool isBouncy(int n) {
	string s = to_string(n);
	bool inc = false, dec = false;
	rep(i, 1, sz(s)) {
		if (s[i - 1] < s[i])
			inc = true;
		else if (s[i - 1] > s[i])
			dec = true;
		if (inc && dec)
			return true;
	}
	return false;
}

int notBouncyRatio(int p) {
	int not_bouncy = 0;
	rep(i, 1, inf) {
		if (!isBouncy(i))
			not_bouncy++;
		if (not_bouncy * p == i)
			return i;
	}
	return inf;
}

int main() {
	assert(notBouncyRatio(10) == 21780);
	printf("%d\n", notBouncyRatio(100));
}
