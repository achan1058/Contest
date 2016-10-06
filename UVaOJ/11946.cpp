#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s, convert = "OIZEASGTBP";
	getline(cin, s);
	while (getline(cin, s)) {
		for (char& c : s) {
			if (c >= '0' && c <= '9')
				c = convert[c - '0'];
		}
		printf("%s\n", s.c_str());
	}
}
