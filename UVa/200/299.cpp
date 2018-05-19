#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n, ans = 0;
		cin >> n;
		vi trains(n);
		read(trains);
		drep(i, j, n, n - 1) {
			if (trains[j] > trains[j + 1]) {
				ans++;
				swap(trains[j], trains[j + 1]);
			}
		}
		print("Optimal train swapping takes %d swaps.", ans);
	}
}
