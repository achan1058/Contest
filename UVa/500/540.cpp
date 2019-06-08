#include <bits/stdc++.h>
#include "header.h"

int main() {
	int n;
	whileX(cin >> n && n != 0) {
		unordered_map<int, int> team;
		vector<queue<int>> queues(n);
		queue<int> global;
		rep(i, 0, n) {
			int k, v;
			cin >> k;
			rep(j, 0, k) {
				cin >> v;
				team[v] = i;
			}
		}

		print("Scenario #%d", X);
		string s;
		while (cin >> s && s != "STOP") {
			if (s == "ENQUEUE") {
				cin >> n;
				int t = team[n];
				if (queues[t].empty())
					global.push(t);
				queues[t].push(n);
			} else {
				int t = global.front();
				printd(queues[t].front());
				queues[t].pop();
				if (queues[t].empty())
					global.pop();
			}
		}
		print("");
	}
}
