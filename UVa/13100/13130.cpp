#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		vi dice(5);
		read(dice);
		bool good = true;
		rep(i, 0, 4) {
			if (dice[i] + 1 != dice[i + 1])
				good = false;
		}
		print(good ? 'Y' : 'N');
	}
}
