#include <bits/stdc++.h>
#include "header.h"

void mut(string& s) {
	irep(c, s)
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			c = ' ';
}

int main() {
	string s1, s2;
	forX() {
		cin >> s1 >> s2;
		mut(s1);
		mut(s2);
		printf("%s\n", s1 == s2 ? "Yes" : "No");
	}
}
