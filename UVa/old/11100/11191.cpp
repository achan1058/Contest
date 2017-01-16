#include <bits/stdc++.h>
#include "header.h"

vi primes = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, -1 };
int to_bit(ll n) {
	int result = 0;
	rep(i, 0, 10) {
		while (n % primes[i] == 0) {
			n /= primes[i];
			result ^= 1 << i;
		}
	}
	if (n == -1)
		result ^= 1 << 10;
	return result;
}

inline ll nC2(ll n) { return n * (n - 1) / 2; }
inline ll nC3(ll n) { return n * (n - 1) * (n - 2) / 6; }

int main() {
	int n;
	ll t;
	forX() {
		cin >> n;
		int num_zero = 0;
		vl arr(1 << 11);
		rep(i, 0, n) {
			cin >> t;
			if (t == 0) {
				num_zero++;
				continue;
			}
			int result = to_bit(t);
			arr[result]++;
		}

		ll double_zero = nC2(num_zero), triple_zero = nC3(num_zero) + nC3(arr[0]) - nC2(arr[0]) * arr[0];
		rep(i, 0, 1<<11) {
			double_zero += arr[i] * num_zero;
			double_zero += nC2(arr[i]);
			triple_zero += nC2(num_zero) * arr[i];
			triple_zero += nC2(arr[i]) * num_zero;
			triple_zero += nC2(arr[i]) * arr[0];

			rep(j, i+1, 1<<11) {
				triple_zero += arr[i] * arr[j] * num_zero;
				if ((i ^ j) > j)
					triple_zero += arr[i] * arr[j] * arr[i ^ j];
			}
		}
		printf("%lld %lld\n", double_zero, triple_zero);
	}
}
