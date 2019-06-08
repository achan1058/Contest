#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	bool easy = true;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		easy = easy && v == 0;
	}
	print(easy ? "EASY" : "HARD");
}
