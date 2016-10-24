#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		getline(cin, s);
		int siz = sqrt(sz(s));

		if (siz * siz != sz(s)) {
			printf("INVALID\n");
			continue;
		}

		drep(i, j, siz, siz)
			printf("%c", s[i + j * siz]);
		printf("\n");
	}
}
