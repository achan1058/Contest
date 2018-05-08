#include <bits/stdc++.h>
#include "header.h"

int main() {
	int v;
	drep(i, j, 5, 5) {
		cin >> v;
		if (v == 1) {
			print("%d", abs(i - 2) + abs(j - 2));
			return 0;
		}
	}
}
