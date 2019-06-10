#include <bits/stdc++.h>
#include "header.h"

void process(string s) {
	char c = tolower(s[0]);
	if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
		s = s.substr(1) + s[0];
	printf("%say", s.c_str());
}

int main() {
	string s;
	while (getline(cin, s)) {
		string t;
		irep(c, s) {
			if (isalpha(c)) {
				t += c;
			} else {
				if (!t.empty()) {
					process(t);
					t.clear();
				}
				printv(c);
			}
		}
		if (!t.empty())
			process(t);
		print();
	}
}
