#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	forX() {
		getline(cin, s);
		vi count(26);
		int mx = 0;
		for (char c : s) {
			if (!isalpha(c))
				continue;
			c = tolower(c);
			count[c - 'a']++;
			mx = max(mx, count[c - 'a']);
		}

		for (int i = 0; i < 26; i++) {
			if (count[i] == mx)
				printf("%c", i + 'a');
		}
		printf("\n");
	}
}
