#include <bits/stdc++.h>
#include "header.h"

int main() {
	map<int, tuple<int, int, int>> ans;
	for (int i = 0; i * i <= 50000; i++) {
		for (int j = i; i * i + j * j <= 50000; j++) {
			for (int k = j; i * i + j * j + k * k <= 50000; k++) {
				if (ans.find(i * i + j * j + k * k) == ans.end())
					ans[i * i + j * j + k * k] = { i, j, k };
			}
		}
	}

	int n;
	forX() {
		cin >> n;
		if (ans.find(n) != ans.end()) {
			printf("%d %d %d\n", get<0>(ans[n]), get<1>(ans[n]), get<2>(ans[n]));
		} else {
			printf("-1\n");
		}
	}
}
