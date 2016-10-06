#include <bits/stdc++.h>
#include "header.h"

vi digits = { 1, 2, 3, 4, 5, 7, 8, 9 };
int main() {
	string s;
	bool start = true;
	while (getline(cin, s) && s.size() >= 10) {
		if (s == "___________") {
			if (!start)
				return 0;
			start = false;
			continue;
		}

		char c = 0;
		rep(i, 0, 8) {
			c <<= 1;
			if (s[digits[i]] == 'o')
				c++;
		}
		printf("%c", c);
	}
}
