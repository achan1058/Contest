#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s[0] != '-') {
		if (sz(s) > 2 && s[1] == 'x') {
			print("%d", stoi(s.substr(2), 0, 16));
		} else {
			print("0x%X", stoi(s));
		}
	}
}
