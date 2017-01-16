#include <bits/stdc++.h>
#include "header.h"

int main() {
	vi coins = { 1, 2, 5, 10, 20, 50, 100, 200 };
	vi arr(201);
	arr[0] = 1;
	irep(c, coins) {
		rep(i, 0, 201 - c)
			arr[i + c] += arr[i];
	}
	printf("%d\n", arr[200]);
}
