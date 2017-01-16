#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;
	while (getline(cin, s))
		printf("%d\n", sz(tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; }, false)));
}
