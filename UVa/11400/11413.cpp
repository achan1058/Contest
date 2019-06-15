#include <bits/stdc++.h>
#include "binary_search.h"
#include "header.h"

int n, c;
vi milk;
int minN(int t) {
	int num = 0, cur = 0;
	irep(m, milk) {
		if (m > t)
			return -1;
		if (m + cur > t) {
			num++;
			cur = m;
		} else {
			cur += m;
		}
	}
	return num + 1 <= c ? 0 : -1;
}

int main() {
	while (cin >> n >> c) {
		milk.resize(n);
		read(milk);
		print(binarySearch(minN));
	}
}
