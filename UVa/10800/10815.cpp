#include <bits/stdc++.h>
#include "utils.h"
#include "header.h"

int main() {
	string s;
	set<string> dict;
	while (getline(cin, s)) {
		irep(t, tokenize(s, [](int c)->int { return !isalpha(c); })) {
			transform(all(t), t.begin(), ::tolower);
			dict.insert(t);
		}
	}

	irep(t, dict)
		print(t);
}
