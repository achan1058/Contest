#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, k, p;
	forX() {
		cin >> n >> k >> p;
		printc("%d\n", (k + p + n - 1) % n + 1);
	}
}
