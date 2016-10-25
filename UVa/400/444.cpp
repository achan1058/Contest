#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		if (s[0] >= '0' && s[0] <= '9') {
			reverse(all(s));
			int num = 0;
			irep(c, s) {
				num *= 10;
				num += c - '0';
				if (num > 20) {
					printf("%c", char(num));
					num = 0;
				}
			}
			printf("\n");
		} else {
			rrep(i, sz(s) - 1, 0) {
				string ch = to_string(s[i]);
				reverse(all(ch));
				printf("%s", ch.c_str());
			}
			printf("\n");
		}
	}
}
