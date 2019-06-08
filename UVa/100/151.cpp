#include <bits/stdc++.h>
#include "misc.h"
#include "header.h"

int main() {
	int n;
	vi ans(100);
	while (cin >> n && n != 0) {
		if (ans[n] == 0) {
			for (int i = 1; ; i++) {
				if (joseph(n - 1, i) + 2 == 13) {
					ans[n] = i;
					break;
				}
			}
		}
		print(ans[n]);
	}
}
