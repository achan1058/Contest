#include <bits/stdc++.h>
#include "util.h"

int main() {
	int n;
	string s;
	cin >> n >> s;
	vs str = tokenizer(s, [](int c) {return c == '(' || c == ')' ? 1 : 0; }, true);
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < sz(str); i += 2) {
		vs tokens = tokenizer(str[i], [](int c) {return c == '_' ? 1 : 0; }, false);
		irep(v, tokens)
			ans1 = max(ans1, sz(v));
	}

	for (int i = 1; i < sz(str); i += 2)
		ans2 += sz(tokenizer(str[i], [](int c) {return c == '_' ? 1 : 0; }, false));

	printf("%d %d\n", ans1, ans2);
}
