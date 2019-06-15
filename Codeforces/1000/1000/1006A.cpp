#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	cin >> n;
	rep(i, 0, n) {
		cin >> v;
		printf("%d%c", v % 2 ? v : v - 1, i == n - 1 ? '\n' : ' ');
	}
}
