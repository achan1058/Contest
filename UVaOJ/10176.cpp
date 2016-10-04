#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n = 0;
	char c;
	while (cin >> c) {
		if (c == '#') {
			printf("%s\n", n == 0 ? "YES" : "NO");
			n = 0;
		} else {
			n <<= 1;
			n += c - '0';
			if (n >= 131071)
				n -= 131071;
		}
	}
}
