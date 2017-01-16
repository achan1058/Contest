#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		vs source(n), target(n);
		getline(cin, source[0]);
		for (string& s : source)
			getline(cin, s);
		for (string& s : target)
			getline(cin, s);

		int remain = n - 1;
		for (int i = n - 1; i >= 0; i--) {
			if (target[remain] == source[i])
				remain--;
		}
		while (remain >= 0) {
			printf("%s\n", target[remain].c_str());
			remain--;
		}
		printf("\n");
	}
}
