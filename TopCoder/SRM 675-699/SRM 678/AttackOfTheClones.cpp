#include <bits/stdc++.h>
#include "header.h"

class AttackOfTheClones {
public:
    int count(vector<int> firstWeek, vector<int> lastWeek) {
		int n = sz(firstWeek), ans = 0;
		vi time(n);
		rep(i, 0, n)
			time[firstWeek[i] - 1] = i;
		rep(i, 0, n)
			ans = max(ans, time[lastWeek[i] - 1] - i);
		return ans + 1;
    }
};
