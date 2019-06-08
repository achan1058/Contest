#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	set<int> shoes;
	rep(i, 0, 4) {
		cin >> n;
		shoes.insert(n);
	}
	printd(4 - sz(shoes));
}
