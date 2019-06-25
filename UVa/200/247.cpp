#include <bits/stdc++.h>
#include "components.h"
#include "utils.h"
#include "header.h"

int main() {
	int n, m;
	string s1, s2;
	whileX(cin >> n >> m && (n | m) != 0) {
		vvi graph(n);
		mapper<string> mp;
		rep(i, 0, m) {
			cin >> s1 >> s2;
			graph[mp.map(s1)].pb(mp.map(s2));
		}

		vvi blocks = stronglyConnectedBlocks(graph);
		printX("Calling circles for data set %d:", X);
		irep(b, blocks) {
			rep(i, 0, sz(b))
				printf("%s%s", mp.unmap(b[i]).c_str(), i == sz(b) - 1 ? "\n" : ", ");
		}
	}
}
