#include <bits/stdc++.h>
#include "sorting.h"
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		vi nums(n);
		read(nums);
		printl(inversionCount(nums, 0, n));
	}
}
