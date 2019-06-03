#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

class EllysThreePrimes {
public:
	vector<int> getPrimes(vector<int> sums) {
		vi vp = sieve(100000), primes;
		unordered_set<int> prime_set;
		irep(p, vp) {
			if (p < 10000)
				continue;
			prime_set.insert(p);
			primes.pb(p);
		}
		drep(i, j, sz(primes), i) {
			int k = 0, p1 = primes[i], p2 = primes[j], m = 1;
			bool good = true;
			rep(t, 0, 5) {
				int d = sums[t] - p1 % 10 - p2 % 10;
				if (d < 0 || d > 9) {
					good = false;
					break;
				}
				k += d * m;
				m *= 10;
				p1 /= 10;
				p2 /= 10;
			}

			if (good && prime_set.find(k) != prime_set.end() && k != primes[i] && k != primes[j])
				return vi{ primes[i], primes[j], k };
		}
		return vector<int>();
	}
};
