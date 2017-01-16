#include <bits/stdc++.h>
#include "util.h"

int main() {
	fstream in("Euler/input/42.txt");
	vi tri;
	int ans = 0;
	string s;
	in >> s;
	vs words = tokenizer(s, [](int c) {return (c == '\"' || c == ',' ? 1 : 0); });
	rep(i, 1, 31)
		tri.pb(i * (i + 1) / 2);
	irep(w, words) {
		int v = 0;
		irep(c, w)
			v += c - 'A' + 1;
		if (binary_search(all(tri), v))
			ans++;
	}
	printf("%d\n", ans);
}
