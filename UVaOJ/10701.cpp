#include <bits/stdc++.h>
#include "header.h"

void parse(const string& prefix, const string& infix) {
	if (prefix.empty())
		return;
	char c = prefix[0];
	int p = infix.find(c);
	parse(prefix.substr(1, p), infix.substr(0, p));
	parse(prefix.substr(p + 1), infix.substr(p + 1));
	printf("%c", c);
}

int main() {
	int N, n;
	string s1, s2;
	cin >> N;
	rep(X, 0, N) {
		cin >> n >> s1 >> s2;
		parse(s1, s2);
		printf("\n");
	}
}
