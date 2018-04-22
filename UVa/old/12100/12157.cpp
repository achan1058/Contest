#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, t;
		cin >> n;
		int mile = 0, juice = 0;
		rep(i, 0, n) {
			cin >> t;
			mile += t / 30 * 10 + 10;
			juice += t / 60 * 15 + 15;
		}
		printc("%s%s%d\n", mile <= juice ? "Mile " : "", juice <= mile ? "Juice " : "", min(mile, juice));
	}
}
