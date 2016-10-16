#include <bits/stdc++.h>
#include "header.h"

inline int war(const set<double>& nb, set<double> kb) {
	int result = 0;
	irep(v, nb) {
		auto it = upper_bound(all(kb), v);
		if (it == kb.end())
			kb.erase(kb.begin());
		else {
			result++;
			kb.erase(it);
		}
	}
	return result;
}

int main() {
	double v;
	forX() {
		int n;
		cin >> n;
		set<double> nb, kb;

		rep(i, 0, n) {
			cin >> v;
			nb.insert(v);
		}
		rep(i, 0, n) {
			cin >> v;
			kb.insert(v);
		}

		int warout = n - war(nb, kb);
		int warout2 = war(kb, nb);
		printp("%d %d\n", warout2, warout);
	}
}