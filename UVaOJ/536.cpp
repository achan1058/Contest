#include <bits/stdc++.h>
#include "header.h"

void parse(const string& prefix, const string& infix) {
	if (prefix.empty())
		return;

	int p = infix.find(prefix[0]);
	parse(prefix.substr(1, p), infix.substr(0, p));
	parse(prefix.substr(p + 1), infix.substr(p + 1));
	printf("%c", prefix[0]);
}

int main() {
	string s1, s2;
	while (cin >> s1 >> s2) {
		parse(s1, s2);
		printf("\n");
	}
}
