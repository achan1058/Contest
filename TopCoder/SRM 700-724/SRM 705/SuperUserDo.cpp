#include <bits/stdc++.h>
#include "header.h"

class SuperUserDo {
public:
    int install(vector<int> A, vector<int> B) {
		int ans = 0;
		vb need(1000);
		rep(i, 0, sz(A)) {
			rep(j, A[i], B[i] + 1)
				need[j - 1] = true;
		}
		rep(j, 0, 1000)
			if (need[j])
				ans++;
        return ans;
    }
};
