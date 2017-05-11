#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		stringstream ss(s);
		int total = 0, v;
		vb possible(201);
		possible[0] = true;
		while (ss >> v) {
			total += v;
			rrep(i, 200, v)
				possible[i] = possible[i] || possible[i - v];
		}

		printf("%s\n", total % 2 == 0 && possible[total / 2] ? "YES" : "NO");
	}
}
