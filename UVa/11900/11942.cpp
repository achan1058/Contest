#include <bits/stdc++.h>
#include "header.h"

int main() {
	int N;
	cin >> N;
	printf("Lumberjacks:\n");
	rep(X, 0, N) {
		bool ge = true, le = true;
		vi len(10);
		rep(i, 0, 10)
			cin >> len[i];
		rep(i, 0, 9) {
			if (len[i] < len[i + 1])
				ge = false;
			else
				le = false;
		}
		printf("%s\n", ge || le ? "Ordered" : "Unordered");
	}
}
