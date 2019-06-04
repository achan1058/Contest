#include <bits/stdc++.h>
#include "header.h"

class MtGFight {
public:
	vector<int> findGoodFight(vector<int> power, vector<int> toughness) {
		int n = sz(power);
		drep(i, j, n, n) {
			if (i == j)
				continue;
			if (power[i] >= toughness[j] && power[j] < toughness[i])
				return { i, j };
		}
		return vector<int>();
	}
};
