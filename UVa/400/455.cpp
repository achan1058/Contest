#include <bits/stdc++.h>
#include "dp_algs.h"
#include "header.h"

int main() {
	forX() {
		string s;
		cin >> s;
		string s2 = s + s;
		printX(kmp(s2, s)[1]);
	}
}
