#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		int b1 = stoi(s), b2 = stoi(s, 0, 16);
		printf("%d %d\n", bits(b1), bits(b2));
	}
}
