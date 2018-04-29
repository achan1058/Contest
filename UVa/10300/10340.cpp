#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		int t1 = 0, t2 = 0;
		while (t1 < sz(s1) && t2 < sz(s2)) {
			if (s1[t1] == s2[t2])
				t1++;
			t2++;
		}
		print("%s", t1 == sz(s1) ? "Yes" : "No");
	}
}
