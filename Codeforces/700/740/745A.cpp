#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	string s;
	cin >> s;
	string s2 = s + s;
	printv(kmp(s2, s)[1]);
}
