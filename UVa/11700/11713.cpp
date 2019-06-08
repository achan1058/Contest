#include <bits/stdc++.h>
#include "header.h"

void transform(string& s) {
	irep(c, s) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			c = ' ';
	}
}

int main() {
	forX() {
		string s1, s2;
		cin >> s1 >> s2;
		transform(s1);
		transform(s2);
		print(s1 == s2 ? "Yes" : "No");
	}
}
