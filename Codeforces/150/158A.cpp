#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k;
	cin >> n >> k;
	vi arr(n);
	read(arr);
	while (k > 0 && arr[k - 1] == 0)
		k--;
	while (k < n && arr[k - 1] == arr[k])
		k++;
	printf("%d\n", k);
}
