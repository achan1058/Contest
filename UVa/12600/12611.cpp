#include <bits/stdc++.h>
#include "header.h"

int main() {
	int r;
	forX() {
		cin >> r;
		printcn();
		printf("%d %d\n", -r * 45 / 20, r * 30 / 20);
		printf("%d %d\n", r * 55 / 20, r * 30 / 20);
		printf("%d %d\n", r * 55 / 20, r * -30 / 20);
		printf("%d %d\n", -r * 45 / 20, r * -30 / 20);
	}
}
