#include <bits/stdc++.h>
#include "header.h"

int main() {
	forX() {
		string s;
		map<int, int> perm;
		getline(cin, s);

		{
			getline(cin, s);
			stringstream ss(s);
			int i = 0, v;
			while (ss >> v) {
				perm[i] = v - 1;
				i++;
			}
		}

		vs ans(sz(perm));

		{
			getline(cin, s);
			stringstream ss2(s);
			rep(i, 0, sz(perm))
				ss2 >> ans[perm[i]];
		}

		printX("");
		irep(out, ans)
			print(out);
	}
}
