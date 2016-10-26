#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	forX() {
		cin >> n;
		int count = 0;
		vi sales(n);
		for (int i = 0; i < n; i++) {
			cin >> sales[i];
			for (int j = 0; j < i; j++) {
				if (sales[i] >= sales[j])
					count++;
			}
		}
		printf("%d\n", count);
	}
}
