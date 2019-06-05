#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	irep(c, s) {
		char l = tolower(c);
		if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'y')
			continue;
		printf(".%c", l);
	}
	print("");
}
