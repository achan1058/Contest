#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s1, s2;
	cin >> s1 >> s2;
	transform(all(s1), s1.begin(), ::tolower);
	transform(all(s2), s2.begin(), ::tolower);
	printv(s1 < s2 ? -1 : s1 > s2 ? 1 : 0);
}
