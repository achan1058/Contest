#include <bits/stdc++.h>
#include "header.h"

int main() {
	int p, h, o;
	while (cin >> p >> h >> o)
		print(h > o - p ? "Hunters win!" : "Props win!");
}
