#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n = 0;
	char c;
	while (cin >> c) {
		if (c == '#') {
			printf(n % 131071 ? "NO\n" : "YES\n");
			n = 0;
		} else {
			n *= 2;
			n += c - '0';
			n %= 131071;
		}
	}
}
