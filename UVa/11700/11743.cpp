#include <bits/stdc++.h>
#include "header.h"

vi two = { 0, 2, 4, 6, 8, 1, 3, 5, 7, 9 };
int main() {
	int  n, t;
	forX() {
		t = 0;
		rep(i, 0, 4) {
			cin >> n;
			t += n + n / 100 + two[n / 10 % 10] + two[n / 1000];
		}
		printf("%s\n", t % 10 == 0 ? "Valid" : "Invalid");
	}
}
