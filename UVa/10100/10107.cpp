#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr;
	int n;
	whileX(cin >> n) {
		arr.pb(n);
		sort(all(arr));
		printf("%d\n", X % 2 == 0 ? (arr[X / 2 - 1] + arr[X / 2]) / 2 : arr[X / 2]);
	}
}
