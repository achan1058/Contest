#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		cin >> s;
		stringstream ss;
		ss << s;
		char c;
		int n;
		printc("");
		while (ss >> c) {
			ss >> n;
			rep(i, 0, n)
				printf("%c", c);
		}
		printf("\n");
	}
}
