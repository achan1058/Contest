#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl arr(10000);
	arr[0] = 1;
	rep(i, 1, 22) {
		rep(j, i * i * i, 10000)
			arr[j] += arr[j - i * i * i];
	}
	int n;
	while (cin >> n)
		printf("%lld\n", arr[n]);
}
