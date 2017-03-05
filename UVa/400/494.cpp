#include <bits/stdc++.h>
#include "util.h"
#include "header.h"

int main() {
	string s;
	while (getline(cin, s)) {
		printf("%d\n", tokenizer(s, isalpha).size());
	}
}
