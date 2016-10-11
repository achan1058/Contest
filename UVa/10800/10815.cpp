#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;
	set<string> dict;
	while (getline(cin, s)) {
		vs str = tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; });
		irep(s, str) {
			transform(all(s), s.begin(), (int(*)(int))tolower);
			dict.insert(s);
		}
	}
	irep(s, dict)
		printf("%s\n", s.c_str());
}