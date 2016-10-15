#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	char last = 0;
	bool bad = false;
	int count = 1;

	fori(c, s) {
		if (c == last) {
			count++;
			if (count >= 7) {
				bad = true;
				break;
			}
		} else {
			count = 1;
		}
		last = c;
	}

	printf("%s\n", bad ? "YES" : "NO");
}
