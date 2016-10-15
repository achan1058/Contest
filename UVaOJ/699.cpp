#include <bits/stdc++.h>
#include "header.h"

map<int, int> result;
bool recurse(int pos = 0) {
	int n;
	cin >> n;
	if (n == -1)
		return false;

	result[pos] += n;
	recurse(pos - 1);
	recurse(pos + 1);
	return true;
}

int main() {
	int X = 1, n, ind = 0;
	while (recurse(ind)) {
		bool fs = true;
		printf("Case %d:\n", X);
		fori(v, result) {
			printf("%s%d", fs ? "" : " ", v.y);
			fs = false;
		}
		printf("\n\n");
		X++;
		result.clear();
	}
}
