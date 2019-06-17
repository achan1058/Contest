#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	bool good = false;
	irep(c, s) {
		if (c == 'H' || c == 'Q' || c == '9') {
			good = true;
			break;
		}
	}
	print(good ? "YES" : "NO");
}
