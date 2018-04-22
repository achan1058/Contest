#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	while (getline(cin, s) && s != "#") {
		int ans = 0;
		irep(c, s)
			ans = ((ans + c) * 256) % 34943;

		ans = (ans * 256) % 34943;
		if (ans != 0)
			ans = 34943 - ans;

		printf("%02X %02X\n", ans / 256, ans % 256);
	}
}
