#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi arr;
	int n, t = 0;
	while (cin >> n) {
		arr.pb(n);
		sort(all(arr));
		t++;
		printf("%d\n", t % 2 == 0 ? (arr[t / 2 - 1] + arr[t / 2]) / 2 : arr[t / 2]);
	}
}
