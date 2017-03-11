#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	vi pos = { 1, 2, 3, 4, 5, 7, 8, 9 };
	getline(cin, s);
	while (getline(cin, s) && s != "___________") {
		char c = 0;
		irep(p, pos) {
			c *= 2;
			if (s[p] == 'o')
				c++;
		}
		printf("%c", c);
	}
}
