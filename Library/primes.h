#pragma once
#include "utils.h"

template<class T>
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

template<class T>
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

// arr[i] = true if 2 * i + 1 is prime
vector<bool> sieveVector(int n) {
	n = (n - 1) / 2;
	vector<bool> arr(n + 1, true);
	arr[0] = false;
	for (int p = 1; 2 * p * (p + 1) <= n; p++) {
		if (arr[p]) {
			for (int j = 2 * p * (p + 1); j <= n; j += 2 * p + 1)
				arr[j] = false;
		}
	}
	return arr;
}

vector<int> sieve(int n) {
	if (n < 2) return{};
	vector<bool> arr = sieveVector(n);
	vector<int> primes = { 2 };
	n = (n - 1) / 2;
	for (int i = 1; i < int(arr.size()); i++) {
		if (arr[i])
			primes.push_back(2 * i + 1);
	}
	return primes;
}

template <class T>
T sumFactors(const vector<T>& primes) {
	T result = 1;
	map<T, int> primepower = tally(primes);
	for (auto& p : primepower) {
		T v = 1;
		for (int i = 0; i < p.second; i++) {
			v *= p.first;
			v++;
		}
		result *= v;
	}
	return result;
}