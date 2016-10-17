#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		unordered_set<int> chains;
		printf("Original number was %d\n", n);
		chains.insert(n);

		while (true) {
			string s1 = to_string(n), s2 = s1;
			sort(all(s1));
			sort(all(s2), greater<char>());
			n = stoi(s2) - stoi(s1);
			printf("%d - %d = %d\n", stoi(s2), stoi(s1), n);

			if (chains.find(n) != chains.end())
				break;
			chains.insert(n);
		}
		printf("Chain length %d\n\n", sz(chains));
	}
}
