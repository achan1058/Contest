#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr(1000001);
	rep(i, 2, 1000001) {
		if (arr[i] == 0) {
			rep(j, 1, 1000000 / i + 1)
				arr[i * j] = arr[j] + 1;
		}
	}

	rep(i, 2, 1000000)
		arr[i + 1] += arr[i];
	int n;
	while (cin >> n)
		printf("%d\n", arr[n]);
}
