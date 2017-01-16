#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, top, bot, diff;
	forX() {
		bool good = true;
		cin >> n;
		cin >> top >> bot;
		diff = top - bot;
		rep(i, 1, n) {
			cin >> top >> bot;
			if (top - bot != diff)
				good = false;
		}

		printX("%s\n", good ? "yes" : "no");
	}
}
