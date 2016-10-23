#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		vi arr(n), zero(n);
		read(arr);
		set<vi> visited;
		visited.insert(arr);
		while (arr != zero) {
			int a = arr[0];
			rep(i, 0, n - 1)
				arr[i] = abs(arr[i + 1] - arr[i]);
			arr[n - 1] = abs(arr[n - 1] - a);

			if (visited.find(arr) != visited.end()) {
				printf("LOOP\n");
				goto end;
			}
			visited.insert(arr);
		}
		printf("ZERO\n");
	end:;
	}
}
