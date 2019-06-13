#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		char last = 0;
		int count = 0;
		printf("Case %d: ", X);
		irep(c, s) {
			if (c >= '0' && c <= '9') {
				count *= 10;
				count += c - '0';
			} else {
				rep(i, 0, count)
					printv(last);
				last = c;
				count = 0;
			}
		}
		rep(i, 0, count)
			printv(last);
		print();
	}
}
