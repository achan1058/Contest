#include <bits/stdc++.h>
#include "utils.h"
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		string s, ans;
		cin >> s;
		map<char, int> t = tally(s);
		irep(m, t) {
			if (isPrime(m.y))
				ans.pb(m.x);
		}
		printc("%s", ans.empty() ? "empty" : ans.c_str());
	}
}