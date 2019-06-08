#include <bits/stdc++.h>
#include "header.h"

map<int, vi> ans = {
	{2, {6, 2, 4, 8}},
	{3, {1, 3, 9, 7}},
	{4, {6, 4, 6, 4}},
	{7, {1, 7, 9, 3}},
	{8, {6, 8, 4, 2}},
	{9, {1, 9, 1, 9}},
};

int main() {
	string n, p;
	while (cin >> n >> p && (n != "0" | p != "0")) {
		if (p == "0") {
			print("1");
			continue;
		}

		int d = n.back() - '0';
		if (d == 0 || d == 1 || d == 5 || d == 6) {
			print(d);
			continue;
		}
		int e = p.back() - '0';
		if (sz(p) >= 2)
			e += 10 * p[sz(p) - 2] - '0';
		print(ans[d][e % 4]);
	}
}
