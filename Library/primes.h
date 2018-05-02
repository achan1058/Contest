#pragma once
#include <bits/stdc++.h>
using namespace std;

template <class T>
bool isPrime(T n) {
	if (n < 2) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	for (T p = 5; p * p <= n; p += 6) {
		if (n % p == 0 || n % (p + 2) == 0)
			return false;
	}
	return true;
}

template <class T>
vector<T> factor(T n) {
	vector<T> result;
	if (n < 0) {
		result.push_back(-1);
		n = -n;
	}
	while (n % 2 == 0) {
		result.push_back(2);
		n /= 2;
	}
	while (n % 3 == 0) {
		result.push_back(3);
		n /= 3;
	}
	for (T p = 5; p * p <= n; p += 6) {
		while (n % p == 0) {
			result.push_back(p);
			n /= p;
		}
		while (n % (p + 2) == 0) {
			result.push_back(p + 2);
			n /= p + 2;
		}
	}
	if (n > 1)
		result.push_back(n);
	return result;
}
