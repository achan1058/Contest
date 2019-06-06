#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	int a = 1, b = n - 2;
	if (b % 3 == 0) {
		b--;
		a++;
	}
	printf("%d %d %d", 1, a, b);
}
