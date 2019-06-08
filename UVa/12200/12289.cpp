#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s, one = "one";
		cin >> s;
		if (sz(s) == 5) {
			print("3");
			continue;
		}

		int count = 0;
		rep(i, 0, 3) {
			if (s[i] == one[i])
				count++;
		}
		print(count >= 2 ? 1 : 2);
	}
}
