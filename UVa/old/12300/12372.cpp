#include <bits/stdc++.h>
#include "header.h"

int main() {
	int x, y, z;
	forX() {
		cin >> x >> y >> z;
		printc("%s\n", x > 20 || y > 20 || z > 20 ? "bad" : "good");
	}
}
