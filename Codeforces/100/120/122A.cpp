#include <bits/stdc++.h>
#include "header.h"

vi lucky = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777 };
int main() {
	int n;
	bool good = false;
	cin >> n;
	irep(l, lucky) {
		if (n % l == 0)
			good = true;
	}
	print(good ? "YES" : "NO");
}
