#include <bits/stdc++.h>
#include "header.h"

bool check(string& s) {
	int sta = 1;
	rep(i, 0, sz(s)) {
		if (s[i] == 'N')
			continue;
		else if (s[i] == 'C' || s[i] == 'D' || s[i] == 'E' || s[i] == 'I')
			sta++;
		else
			sta--;
		if (sta == 0) {
			if (i == sz(s) - 1)
				return true;
			else
				return false;
		}
	}
	return false;
}

int main() {
	string s;
	while (cin >> s)
		printf("%s\n", check(s) ? "YES" : "NO");
}
