#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k, p;
		cin >> n >> k >> p;
		printc("%d", (k + p - 1) % n + 1);
	}
}
