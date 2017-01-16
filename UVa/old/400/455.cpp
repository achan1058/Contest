#include <bits/stdc++.h>
#include "dp_algs.h"

int main() {
	string s;
	forX() {
		cin >> s;
		printX("%d\n", kmp(s + s, s)[1]);
	}
}
