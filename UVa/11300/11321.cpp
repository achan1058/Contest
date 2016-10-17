#include <bits/stdc++.h>
#include "header.h"

int m;
bool comp(int v1, int v2) {
	if (v1 % m < v2 % m)
		return true;
	else if (v1 % m > v2 % m)
		return false;
	if (v1 % 2 != 0 && v2 % 2 == 0)
		return true;
	else if (v1 % 2 == 0 && v2 % 2 != 0)
		return false;
	if (v1 % 2 == 0)
		return v1 < v2;
	else
		return v2 < v1;
}

int main() {
	int n;
	while (cin >> n >> m && (n | m) != 0) {
		vi num(n);
		irep(v, num)
			cin >> v;

		sort(all(num), comp);
		printf("%d %d\n", n, m);
		irep(v, num)
			printf("%d\n", v);
	}
	printf("0 0\n");
}
