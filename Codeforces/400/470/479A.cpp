#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int d = max(max(max(max(max(a + b + c, a + b * c), (a + b) * c), a * b + c), a * (b + c)), a * b * c);
	print("%d", d);
}
