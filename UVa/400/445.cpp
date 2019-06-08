#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		int count = 0;
		irep(c, s) {
			if (c == '!') {
				print();
				continue;
			}
			if (c == 'b')
				c = ' ';
			if (isdigit(c)) {
				count += c - '0';
			} else {
				rep(i, 0, count)
					printf("%c", c);
				count = 0;
			}
		}
		print();
	}
}
