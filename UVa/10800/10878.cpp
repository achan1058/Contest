#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		if (s == "___________")
			continue;
		char out = 0;
		irep(c, s) {
			if (c == '|' || c == '.')
				continue;
			out <<= 1;
			if (c == 'o')
				out++;
		}
		printf("%c", out);
	}
}
