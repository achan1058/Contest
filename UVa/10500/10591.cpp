#include <bits/stdc++.h>
#include "header.h"

int next_happy(int n) {
	int result = 0;
	while (n > 0) {
		result += (n % 10) * (n % 10);
		n /= 10;
	}
	return result;
}

vi isHappy(1001, -1);
int findHappy(int n, int depth = 0) {
	if (n > 1000)
		return findHappy(next_happy(n));
	else if (isHappy[n] != -1)
		return isHappy[n];
	else if (depth > 1000)
		return 0;
	isHappy[n] = findHappy(next_happy(n), depth + 1);
	return isHappy[n];
}

int main() {
	int N, n;
	cin >> N;
	rep(X, 1, N+1) {
		cin >> n;
		unordered_set<int> chain;
		int cur = n;
		while (true) {
			if (cur == 1) {
				printp("%d is a Happy number.\n", n);
				break;
			} else if (chain.find(cur) != chain.end()) {
				printp("%d is an Unhappy number.\n", n);
				break;
			}
			chain.insert(cur);
			cur = next_happy(cur);
		}
	}
}
