#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		if (sz(s) == 5)
			printf("3\n");
		else if ((s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e'))
			printf("1\n");
		else
			printf("2\n");
	}
}
