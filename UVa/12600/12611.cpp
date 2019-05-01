#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		int l = -n * 9 / 4, r = n * 11 / 4, h = n * 3 / 2;
		printcn();
		print("%d %d", l, h);
		print("%d %d", r, h);
		print("%d %d", r, -h);
		print("%d %d", l, -h);
	}
}
