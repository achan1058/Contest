#include <bits/stdc++.h>
#include "header.h"

int main() {
	set<int> special;
	rep(i, 1, 22)
		special.insert(i * i * i * i * i * i);

	int n;
	while (cin >> n && n != 0) {
		printf("%s\n", special.find(n) != special.end() ? "Special" : "Ordinary");
	}
}
