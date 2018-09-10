#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		getline(cin, s);
		int total = 0, v;
		vi nums;
		stringstream ss(s);
		while (ss >> v) {
			total += v;
			nums.pb(v);
		}

		if (total % 2) {
			print("NO");
			continue;
		}
		vb hit(total / 2 + 1);
		hit[0] = true;
		irep(t, nums) {
			rrep(j, total / 2 - t, 0)
				hit[j + t] = hit[j + t] || hit[j];
		}
		print("%s", hit[total / 2] ? "YES" : "NO");
	}
}
