#include <bits/stdc++.h>
#include "header.h"

int main() {
	string s;
	whileX(getline(cin, s)) {
		map<int, int> freq;
		irep(c, s)
			freq[c]++;
		printX("");
		vector<pii> ans;
		irep(p, freq)
			ans.pb({ p.y, -p.x });
		sort(all(ans));
		irep(p, ans)
			printf("%d %d\n", -p.y, p.x);
	}
}
