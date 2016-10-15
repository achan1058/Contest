#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	fori(c, s) {
		c = tolower(c);
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
			continue;
		printf(".%c", c);
	}
	printf("\n");
}
