#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	cin >> n;
	rep(i, 0, n) {
		if (i % 2)
			printf("I love ");
		else
			printf("I hate ");
		if (i == n - 1)
			print("it");
		else
			printf("that ");
	}
}
