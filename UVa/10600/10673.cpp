#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		print("%d %d", k - n % k, n % k);
	}
}
