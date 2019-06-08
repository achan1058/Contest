#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	vi order(n);
	read(order);
	int low = 0, high = 0;
	rep(i, 1, n) {
		if (order[i] <= order[low])
			low = i;
		if (order[i] > order[high])
			high = i;
	}
	int ans = high + n - low - 1;
	if (ans >= n)
		ans--;
	print(ans);
}
