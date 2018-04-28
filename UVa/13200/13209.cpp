#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, remain = 1;
		cin >> n;
		printf("0.");
		do {
			remain *= 10;
			printf("%d", remain / n);
			remain %= n;
		} while (remain != 1);
		print("");
	}
}
