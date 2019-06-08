#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	b %= n;
	a = (a + b + n) % n;
	print(a == 0 ? n : a);
}
