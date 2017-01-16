#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		int front = 0;
		rep(i, 1, sz(s) + 1) {
			if (i == sz(s) || isspace(s[i])) {
				reverse(s.begin() + front, s.begin() + i);
				front = i + 1;
			}
		}
		printf("%s\n", s.c_str());
	}
}
