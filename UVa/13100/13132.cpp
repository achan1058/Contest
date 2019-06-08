#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		int n;
		cin >> n;
		print(eulerPhi(factor(n)));
	}
}
