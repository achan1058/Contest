#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		auto comp = [](char c1, char c2) {
			char d1 = tolower(c1), d2 = tolower(c2);
			return d1 == d2 ? c1 < c2 : d1 < d2;
		};
		sort(all(s), comp);
		do {
			printv(s);
		} while (next_permutation(all(s), comp));
	}
}
