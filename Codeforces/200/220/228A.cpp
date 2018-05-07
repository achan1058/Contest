#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	set<int> shoes;
	rep(i, 0, 4) {
		cin >> n;
		shoes.insert(n);
	}
	print("%d", 4 - sz(shoes));
}
