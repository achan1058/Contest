#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s) {
		if (s == "#")
			return 0;
		if (next_permutation(all(s)))
			printf("%s\n", s.c_str());
		else
			printf("No Successor\n");
	}
}
