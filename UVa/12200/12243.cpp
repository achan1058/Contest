#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "*") {
		stringstream ss(s);
		ss >> s;
		char c = tolower(s[0]);
		while (ss >> s) {
			if (tolower(s[0]) != c) {
				c = ' ';
				break;
			}
		}
		print("%c", c == ' ' ? 'N' : 'Y');
	}
}
