#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		unordered_map<int, int> m;
		vector<queue<int>> teams(n);
		queue<queue<int>*> q;
		rep(i, 0, n) {
			int ppl;
			cin >> ppl;
			rep(j, 0, ppl) {
				int v;
				cin >> v;
				m[v] = i;
			}
		}
		string s;
		printf("Scenario #%d\n", X);
		while (cin >> s && s != "STOP") {
			if (s == "ENQUEUE") {
				int v;
				cin >> v;
				teams[m[v]].push(v);
				if (sz(teams[m[v]]) == 1)
					q.push(&teams[m[v]]);
			} else {
				printf("%d\n", q.front()->front());
				q.front()->pop();
				if (q.front()->empty())
					q.pop();
			}
		}
		printf("\n");
	}
}
