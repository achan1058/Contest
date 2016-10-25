#include <bits/stdc++.h>
#include "util.h"

int main() {
	string s;
	forX() {
		getline(cin, s);
		vs str = tokenizer(s);
		int t2;
		if (sz(str) == 1)
			t2 = stoi(str[0]) * stoi(str[0]);
		else
			t2 = 16 * stoi(str[0]) * stoi(str[1]);

		printf("%.4f\n", t2 / 8. * M_PI);
	}
}
