#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	vi arr(5);
	while (cin >> n) {
		read(arr);
		printf("%d\n", count(all(arr), n));
	}
}
