#include <bits/stdc++.h>
#include "header.h"

int printNext(int n) {
	string s1 = to_string(n);
	sort(all(s1));
	string s2 = s1;
	reverse(all(s2));
	int v1 = stoi(s1), v2 = stoi(s2), ans = v2 - v1;
	print("%d - %d = %d", v2, v1, ans);
	return ans;
}

int main() {
	int n;
	while (cin >> n && n != 0) {
		unordered_set<int> visited;
		int len = 0;
		print("Original number was %d", n);
		do {
			visited.insert(n);
			n = printNext(n);
			len++;
		} while (visited.find(n) == visited.end());
		print("Chain length %d\n", len);
	}
}
