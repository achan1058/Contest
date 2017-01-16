#include <bits/stdc++.h>
#include "util.h"

int main() {
	fstream in("Euler/input/22.txt");
	string s;
	in >> s;

	vs tokens = tokenizer(s, [](int c) {return isalpha(c) ? 0 : 1; }, false);
	int total = 0;
	sort(all(tokens));

	rep(j, 0, sz(tokens)) {
		int sum = 0;
		irep(c, tokens[j])
			sum += c - 'A' + 1;

		total += (j + 1) * sum;
	}
	printf("%d\n", total);
}
