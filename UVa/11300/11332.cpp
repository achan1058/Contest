#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		n %= 9;
		print("%d", n == 0 ? 9 : n);
	}
}
