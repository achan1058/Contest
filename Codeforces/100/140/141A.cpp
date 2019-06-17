#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi count(26);
	string s;
	rep(i, 0, 2) {
		cin >> s;
		irep(c, s)
			count[c - 'A']++;
	}
	cin >> s;
	irep(c, s)
		count[c - 'A']--;

	bool good = true;
	irep(c, count) {
		if (c != 0) {
			good = false;
			break;
		}
	}
	print(good ? "YES" : "NO");
}
