#include <bits/stdc++.h>
#include "combinatorics.h"

int main() {
	forX() {
		vi count(26);
		string s;
		cin >> s;
		irep(c, s)
			count[c - 'A']++;

		printf("Data set %d: %lld\n", X, multinomial(count));
	}
}
