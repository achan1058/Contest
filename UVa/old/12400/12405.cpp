#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	string s;
	forX() {
		int total = 0;
		cin >> n >> s;
		rep(i, 0, n) {
			if (s[i] == '.') {
				i += 2;
				total += 1;
			}
		}
		printc("%d\n", total);
	}
}
