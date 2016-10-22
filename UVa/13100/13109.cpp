#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n, w;
	forX() {
		cin >> n >> w;
		vi ele(n);
		read(ele);
		sort(all(ele));
		int i = 0;
		while (i < sz(ele) && w - ele[i] >= 0) {
			w -= ele[i];
			i++;
		}

		printf("%d\n", i);
	}
}
