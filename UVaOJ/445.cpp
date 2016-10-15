#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		int count = 0;
		fori(c, s) {
			if (c == 'b')
				c = ' ';
			if (isdigit(c))
				count += c - '0';
			else if (c == '!')
				printf("\n");
			else {
				rep(j, 0, count)
					printf("%c", c);
				count = 0;
			}
		}
		printf("\n");
	}
}
