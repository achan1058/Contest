#include <bits/stdc++.h>
#include "header.h"

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	printd(min({ a, b / 2, c / 4 }) * 7);
}
