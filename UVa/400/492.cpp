#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;

	while (getline(cin, s)) {
		vs stuff = tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; }, false);
		int index = 0;
		rep(i, 0, sz(s)) {
			if (!isalpha(s[i])) {
				printf("%c", s[i]);
			} else {
				while (i < sz(s) - 1 && isalpha(s[i + 1]))
					i++;

				char c = tolower(stuff[index][0]);
				if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
					printf("%say", stuff[index].c_str());
				else
					printf("%s%cay", stuff[index].substr(1).c_str(), stuff[index][0]);

				index++;
			}
		}
		printf("\n");
	}
}
