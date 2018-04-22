#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s1, s2;
		cin >> s1 >> s2;
		printf("Pair #%d: %s\n", X, gcd(stoi(s1, 0, 2), stoi(s2, 0, 2)) == 1 ? "Love is not all you need!" : "All you need is love!");
	}
}
