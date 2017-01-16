#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vl arr(51);
	arr[0] = arr[1] = 1;
	rep(i, 2, 51)
		arr[i] = arr[i - 1] + arr[i - 2];
	while (cin >> n && n != 0)
		printf("%lld\n", arr[n]);
}
