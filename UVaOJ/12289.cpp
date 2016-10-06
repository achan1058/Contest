#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	cin >> n;
	rep(i, 0, n) {
		cin >> s;
		if (sz(s) == 5)
			printf("3\n");
		else if (s[0] == 'o' && s[1] == 'n')
			printf("1\n");
		else if (s[0] == 'o' && s[2] == 'e')
			printf("1\n");
		else if (s[2] == 'e' && s[1] == 'n')
			printf("1\n");
		else
			printf("2\n");
	}
}
