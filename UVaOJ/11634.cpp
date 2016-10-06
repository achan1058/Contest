#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	while (cin >> n && n != 0) {
		int count = 0;
		vb visited(10000);
		while (!visited[n]) {
			visited[n] = true;
			count++;
			n *= n;
			n /= 100;
			n %= 10000;
		}
		printf("%d\n", count);
	}
}
