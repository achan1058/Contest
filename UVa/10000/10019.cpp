#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		int b1 = bits(stoi(s, 0, 10));
		int b2 = bits(stoi(s, 0, 16));
		print("%d %d", b1, b2);
	}
}
