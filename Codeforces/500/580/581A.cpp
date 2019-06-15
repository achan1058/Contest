#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, m;
	cin >> n >> m;
	print(min(n, m), abs(n - m) / 2);
}
