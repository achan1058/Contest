#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		cin >> s;
		sort(all(s), [](char c1, char c2) { return tolower(c1) < tolower(c2) || (tolower(c1) == tolower(c2) && c1 < c2); });
		do {
			printf("%s\n", s.c_str());
		} while (next_permutation(all(s), [](char c1, char c2) { return tolower(c1) < tolower(c2) || (tolower(c1) == tolower(c2) && c1 < c2); }));
	}
}
