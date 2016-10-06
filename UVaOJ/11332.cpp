#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int t = n % 9;
		printf("%d\n", t == 0 ? 9 : t);
	}
}
