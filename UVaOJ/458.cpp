#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		fori(c, s)
			c -= 7;
		printf("%s\n", s.c_str());
	}
}
