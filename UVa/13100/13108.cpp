#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		print("%d", n * (n - 1) * (n - 2) * (n - 3) / 24 + n * (n - 1) / 2 + 1);
	}
}
