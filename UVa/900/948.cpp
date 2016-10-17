#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi base = { 1, 2 };
	int n, num;
	while (base.back() <= 1000000000)
		base.push_back(base.back() + base[base.size() - 2]);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		printf("%d = ", num);
		bool first = false;
		for (int i = base.size() - 1; i >= 0; i--) {
			if (num >= base[i]) {
				first = true;
				num -= base[i];
				printf("1");
			} else if (first)
				printf("0");
		}
		printf(" (fib)\n");
	}
}
