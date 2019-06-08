#include <bits/stdc++.h>
#include "combinatorics.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		print(binom(n, 4) + binom(n, 2) + 1);
	}
}
