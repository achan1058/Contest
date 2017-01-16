#include <bits/stdc++.h>
#include "components.h"

int main() {
	int N;
	char x;
	whileX(cin >> N && N != 0) {
		vvi graph(26);
		vector<char> ans(5);
		vector<bool> used(26, false);
		for (int i = 0; i < N; i++) {
			for (auto& a : ans)
				cin >> a;
			cin >> x;
			for (auto& a : ans) {
				graph[x - 'A'].pb(a - 'A');
				used[a - 'A'] = true;
			}
		}

		printX("");
		vector<vector<int>> comps = stronglyConnectedBlocks(graph);
		sort(comps.begin(), comps.end());
		for (auto& block : comps) {
			if (used[block[0]]) {
				for (int i = 0; i < sz(block) - 1;  i++)
					printf("%c ", block[i] + 'A');
				printf("%c\n", block.back() + 'A');
			}
		}
	}
}
