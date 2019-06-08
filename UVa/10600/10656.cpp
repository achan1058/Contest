#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		bool printed = false;
		int t;
		rep(i, 0, n) {
			cin >> t;
			if (t != 0) {
				printf("%s%d", printed ? " " : "", t);
				printed = true;
			}
		}
		print(printed ? "" : "0");
	}
}
