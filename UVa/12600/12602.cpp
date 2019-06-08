#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		char c1, c2, c3, c;
		string s;
		cin >> c1 >> c2 >> c3 >> c >> s;
		int a = (c1 - 'A') * 26 * 26 + (c2 - 'A') * 26 + (c3 - 'A');
		int b = stoi(s);
		print(abs(a - b) <= 100 ? "nice" : "not nice");
	}
}
