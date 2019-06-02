#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	int cur = 0;
	while (cin >> s) {
		irep(c, s) {
			if (c == '#') {
				print("%s", cur ? "NO" : "YES");
				cur = 0;
				break;
			}
			cur <<= 1;
			cur += c - '0';
			cur %= 131071;
		}
	}
}
