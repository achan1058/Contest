#include <bits/stdc++.h>
#include "header.h"

int main() {
	string upper, lower, s;
	getline(cin, lower);
	getline(cin, upper);
	while (getline(cin, s)) {
		bool low = true;
		for (int i = 0; i < sz(s); i += 5) {
			int code = stoi(s.substr(i, 5), nullptr, 2);
			if (code == 31)
				low = false;
			else if (code == 27)
				low = true;
			else
				printf("%c", low ? lower[code] : upper[code]);
		}
		printf("\n");
	}
}
