#include <bits/stdc++.h>
#include "util.h"
#include "header.h"

int main() {
	set<string> ans;
	string s;
	while (getline(cin, s)) {
		vs words = tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; });
		irep(w, words) {
			transform(all(w), w.begin(), ::tolower);
			ans.insert(w);
		}
	}
	irep(w, ans)
		printf("%s\n", w.c_str());
}
