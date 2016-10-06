#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0)
		printf("f91(%d) = %d\n", n, n <= 100 ? 91 : n - 10);
}
