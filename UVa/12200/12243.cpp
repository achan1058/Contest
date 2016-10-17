#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, p;
	while (getline(cin, s) && s != "*") {
		stringstream ss(s);
		bool good = true;
		ss >> p;
		while (ss >> s) {
			if (tolower(s[0]) != tolower(p[0])) {
				good = false;
				break;
			}
			p = s;
		}

		printf("%c\n", good ? 'Y' : 'N');
	}
}
