#include <bits/stdc++.h>
#include "header.h"

class WakingUpEasy {
public:
	int countAlarms(vector<int> volume, int S) {
		int n = 0;
		while (true) {
			fori(v, volume) {
				S -= v;
				n++;

				if (S <= 0)
					return n;
			}
		}
	}
};
