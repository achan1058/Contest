#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		s += "Z";
		char output = ' ';
		int n = 0;
		printc("");
		irep(c, s) {
			if (c >= 'A' && c <= 'Z') {
				rep(i, 0, n)
					printf("%c", output);
				n = 0;
				output = c;
			} else {
				n = n * 10 + c - '0';
			}
		}
		printf("\n");
	}
}
