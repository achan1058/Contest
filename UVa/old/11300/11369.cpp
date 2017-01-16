#include <bits/stdc++.h>
#include "header.h"

int main() {
	int t;
	forX() {
		int total = 0;
		cin >> t;
		vi item(t);
		read(item);
		sort(all(item));
		for (int i = sz(item) - 3; i >= 0; i -= 3)
			total += item[i];
		printf("%d\n", total);
	}
}
