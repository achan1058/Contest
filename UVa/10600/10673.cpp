#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, k;
		cin >> n >> k;
		print(k - n % k, n % k);
	}
}
