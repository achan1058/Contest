#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, v;
	cin >> n;
	unordered_map<int, int> ans1, ans2;
	rep(i, 0, n) {
		cin >> v;
		ans1[v]++;
	}
	rep(i, 0, n - 1) {
		cin >> v;
		ans2[v]++;
		ans1[v]--;
	}
	rep(i, 0, n - 2) {
		cin >> v;
		ans2[v]--;
	}
	irep(a, ans1) {
		if (a.second != 0) {
			print("%d", a.first);
			break;
		}
	}
	irep(a, ans2) {
		if (a.second != 0) {
			print("%d", a.first);
			break;
		}
	}
}
