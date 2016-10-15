#include <bits/stdc++.h>
#include "header.h"

void rev(int n) {
	while (n > 0) {
		printf("%d", n % 10);
		n /= 10;
	}
}

int main() {
	string s;
	while (getline(cin, s)) {
		if (s[0] >= '0' && s[0] <= '9') {
			reverse(all(s));
			int num = 0;
			fori(c, s) {
				num *= 10;
				num += c - '0';
				if (num > 20) {
					printf("%c", char(num));
					num = 0;
				}
			}
			printf("\n");
		} else {
			rrep(i, sz(s) - 1, 0)
				rev(s[i]);
			printf("\n");
		}
	}
}
