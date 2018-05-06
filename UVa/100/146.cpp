#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (cin >> s && s != "#")
		print("%s", next_permutation(all(s)) ? s.c_str() : "No Successor");
}
