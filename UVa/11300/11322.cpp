#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		printf("%d\n", n % 9 == 0 ? 9 : n % 9);
}
