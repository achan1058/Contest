#include <bits/stdc++.h>
#include "header.h"

int main() {
	int total = 0, v;
	rep(i, 0, 5) {
		cin >> v;
		total += v;
	}
	print(total % 5 || total <= 0 ? -1 : total / 5);
}
