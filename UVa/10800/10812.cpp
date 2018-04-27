#include <bits/stdc++.h>
#include "header.h"

int main() {
	int sum, diff;
	forX() {
		cin >> sum >> diff;
		if (diff > sum || (sum + diff) % 2) {
			print("impossible");
			continue;
		}
		print("%d %d", (sum + diff) / 2, (sum - diff) / 2);
	}
}
