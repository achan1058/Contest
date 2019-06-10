#include <bits/stdc++.h>
#include "header.h"

int main() {
	vl ans(51);
	ans[0] = 1;
	ans[1] = 2;
	rep(i, 2, 51)
		ans[i] = ans[i - 1] + ans[i - 2];
	forX() {
		int n;
		cin >> n;
		print("Scenario #%d:", X);
		print(ans[n]);
		print();
	}
}
