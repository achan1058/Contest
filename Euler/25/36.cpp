#include <bits/stdc++.h>
#include "bases.h"

int main() {
	int ans = 0;
	rep(i, 0, 1000001) {
		string s = to_string(i), s2 = s;
		reverse(all(s2));
		if (s2 != s)
			continue;
		s = intToString(i, 2), s2 = s;
		reverse(all(s2));
		if (s2 != s)
			continue;
		ans += i;
	}
	printf("%d\n", ans);
}
