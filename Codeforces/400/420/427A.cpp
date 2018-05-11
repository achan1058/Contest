#include <bits/stdc++.h>
#include "header.h"

int main() {
	int police = 0, ans = 0, v;
	forX() {
		cin >> v;
		if (v > 0) {
			police += v;
		} else if (police > 0) {
			police--;
		} else {
			ans++;
		}
	}
	print("%d", ans);
}
