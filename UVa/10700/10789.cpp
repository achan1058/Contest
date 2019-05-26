#include <bits/stdc++.h>
#include "primes.h"
#include "header.h"

int main() {
	forX() {
		string s, ans;
		cin >> s;
		map<char, int> t = tally(s);
		irep(m, t) {
			if (isPrime(m.second))
				ans.pb(m.first);
		}
		printc("%s", ans.empty() ? "empty" : ans.c_str());
	}
}
