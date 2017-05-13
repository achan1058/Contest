#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "*") {
		stringstream ss(s);
		char c;
		bool good = true;
		ss >> s;
		c = tolower(s[0]);
		while (ss >> s) {
			if (c != tolower(s[0])) {
				good = false;
				break;
			}
		}
		printf("%c\n", good ? 'Y' : 'N');
	}
}
