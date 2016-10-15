#include <bits/stdc++.h>
#include "header.h"

class MiniatureDachshund {
public:
	int maxMikan(vector<int> mikan, int weight) {
		int eat = 0;
		sort(all(mikan));
		fori(m, mikan) {
			if (weight + m > 5000)
				break;
			weight += m;
			eat++;
		}
		return eat;
	}
};
