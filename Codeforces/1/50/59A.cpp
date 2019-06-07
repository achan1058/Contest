#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	cin >> s;
	int low = 0;
	irep(c, s) {
		if (islower(c))
			low++;
	}
	if (2 * low >= sz(s))
		transform(all(s), s.begin(), ::tolower);
	else
		transform(all(s), s.begin(), ::toupper);
	print("%s", s.c_str());
}
