#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s = "0123456789";
	rep(i, 1, 1000000)
		next_permutation(all(s));
	printf("%s\n", s.c_str());
}
