#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		irep(c, s)
			c = c - 7;
		print(s.c_str());
	}
}
