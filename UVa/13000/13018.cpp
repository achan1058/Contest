#include <bits/stdc++.h>
#include "header.h"

int main() {
	int v1, v2;
	whileX(cin >> v1 >> v2) {
		printX("");
		rep(i, min(v1, v2) + 1, max(v1, v2) + 2)
			print(i);
	}
}
