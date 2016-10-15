#include <bits/stdc++.h>
#include "primes.h"

class BigFatInteger2 {
public:
	string isDivisible(int A, int B, int C, int D) {
		ll d = D, b = B;
		map<int, int> pa = tally(factor(A)), pc = tally(factor(C));
		bool div = true;
		irep(p, pc) {
			bool good = false;
			irep(r, pa) {
				if (p.x == r.x) {
					good = (p.y * d <= r.y * b);
					break;
				}
			}
			if (!good) {
				div = false;
				break;
			}
		}
		return div ? "divisible" : "not divisible";
	}
};
