#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, total = 0, v;
	string s;
	cin >> n;
	rep(i, 0, n) {
		cin >> s;
		if (s == "donate") {
			cin >> v;
			total += v;
		} else
			printf("%d\n", total);
	}
}
