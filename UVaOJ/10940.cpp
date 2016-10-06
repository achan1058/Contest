#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi arr(500001);
	arr[0] = 0;
	rep(i, 1, 500001)
		arr[i] = (arr[i - 1] + 2) % i;
	while (cin >> n && n != 0)
		printf("%d\n", (arr[n] + n - 1) % n + 1);
}
