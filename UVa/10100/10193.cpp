#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s1, s2;
		cin >> s1 >> s2;
		int v1 = stoi(s1, 0, 2), v2 = stoi(s2, 0, 2);
		if (gcd(v1, v2) == 1)
			print("Pair #%d: Love is not all you need!", X);
		else
			print("Pair #%d: All you need is love!", X);
	}
}
